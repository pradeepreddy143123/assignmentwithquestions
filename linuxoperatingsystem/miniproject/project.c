/* File: fbs.c */
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
//#include <asm/page.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <linux/fb.h>
/* Device Name like /dev/fb */
char *fbname,a[100];
/* handle to fb device */
int FrameBufferFD,imfd,ret,offset,imxres,imyres,i,j,temp;
long int size1;
/* fixed screen information */
struct fb_fix_screeninfo fix_info;
/* configurable screen info */
struct fb_var_screeninfo var_info;
/* The frame buffer memory pointer */
unsigned int *frbfr;
/* function to plot pixel at position (x,y) */
void draw_pixel(int x,int y, u_int32_t pixel);
int main(int argc, char *argv[])
{
	int size,fbsize;
	u_int8_t red, green, blue;
	int x,i, y;
	u_int32_t pixel;
	fbname = "/dev/fb0";
	/* Open the framebuffer device in read write */
	FrameBufferFD = open(fbname, O_RDWR);
	if (FrameBufferFD < 0) {
		printf("Unable to open %s.\n", fbname);
	return 1;
				}

/* Do Ioctl. Retrieve fixed screen info. */
if (ioctl(FrameBufferFD, FBIOGET_FSCREENINFO, &fix_info) < 0) {
	printf("get fixed screen info failed: %s\n",
	strerror(errno));
	close(FrameBufferFD);
	return 1;
					}
/* Do Ioctl. Get the variable screen info. */
if (ioctl(FrameBufferFD, FBIOGET_VSCREENINFO, &var_info) < 0) {
	printf("Unable to retrieve variable screen info: %s\n",
	strerror(errno));
	close(FrameBufferFD);
	return 1;
				}
/* Print some screen info currently available */
printf("Screen resolution: (%dx%d)\n", var_info.xres,var_info.yres);
printf("Line width in bytes %d\n", fix_info.line_length);
printf("bits per pixel : %d\n", var_info.bits_per_pixel);
//* Calculate the size to mmap */
size=fix_info.line_length * var_info.yres;

/* Now mmap the framebuffer.
framebuffer = mmap(NULL, size, PROT_READ | PROT_WRITE,MAP_SHARED, FrameBufferFD,0);
if (framebuffer == NULL) {
	printf("mmap failed:\n");
	close(FrameBufferFD);
	return 1;
}*/
 fbsize = var_info.xres*var_info.yres*(var_info.bits_per_pixel/8);
printf("%d\n",fbsize);

imfd = open(argv[1], O_RDONLY);
      if (imfd < 0) {
             printf("Unable to open %s.\n", argv[1]);
}

ret=read(imfd,a,54);

//printf("%d\n",ret);

size1=0x00000000;
size1=a[2]&0x0000ff|a[3]<<8|a[4]<<16;
printf("%d\n",size1);
offset=a[10];
printf("offset %d\n",offset);
imxres=a[18]&0x0000ff|a[19]<<8;
printf("bmp xres %d\n",imxres);
imyres=a[22]&0x000000ff|a[23]<<8;
printf("imyres %d\n",imyres);

//for(i=0;i<54;i++)
//printf("%x\n",a[i]);
if((imxres*imyres)<(var_info.xres*var_info.yres)||(imxres*imyres)==(var_info.xres*var_info.yres)<0)
perror("not possible to map");
else
{
frbfr= (unsigned int *)mmap(0,size, PROT_READ|PROT_WRITE, MAP_SHARED, FrameBufferFD,0);
}
lseek(imfd,54,SEEK_SET);

int line_length=fix_info.line_length/4; 
for(i = imyres - 1;i >= 0;i--)
{
for(j = 0;j < imxres;j++)
{
read(imfd, &temp, 4);
frbfr[i * line_length + j] = temp;
}
}
}
