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
int FrameBufferFD;
char *fbname;
struct fb_fix_screeninfo fix_info;
struct fb_var_screeninfo var_info;
struct stat finfo;
int x, y,i,j,size1,xres,yres,size,temp;

int main(int argc, char *argv[])
{
	int fbsize;
        int fbFD, bmpFD,fd;
	int x, y,i,j,size1,xres,yres,size,temp;
	u_int32_t pixel;
        char buff[80];
        unsigned int *fb_ptr;
	fbname = "/dev/fb0";
	FrameBufferFD = open(fbname, O_RDWR);
	if (FrameBufferFD < 0) {
		printf("Unable to open %s.\n", fbname);
	return 1;
}

/* Do Ioctl. Retrieve fixed screen info. */
if (ioctl(FrameBufferFD, FBIOGET_FSCREENINFO, &fix_info) < 0) {
	printf("get fixed screen info failed: %s\n",strerror(errno));
	close(FrameBufferFD);
	return 1;
}
/* Do Ioctl. Get the variable screen info. */
if (ioctl(FrameBufferFD, FBIOGET_VSCREENINFO, &var_info) < 0) {
	printf("Unable to retrieve variable screen info: %s\n",strerror(errno));
	close(FrameBufferFD);
	return 1;
}
fbsize = var_info.xres*var_info.yres*(var_info.bits_per_pixel/8);
printf("xres:%d x yres:%d",var_info.xres,var_info.yres);
size=fix_info.line_length * var_info.yres;
printf("line length:%d",fix_info.line_length);

 // Open the file for reading
     bmpFD=open(argv[1],O_RDONLY);
     read(bmpFD,buff,54);
     
     if(bmpFD < 0) {
         perror("Error: cannot open framebuffer device");
         exit(1);
     }
     printf("The framebuffer device was opened successfully.\n");
for(i=10;i<14;i++)
{
printf("%x",buff[i]);
}

size1=0x0000000;
size1=buff[2]&0x000000ff|buff[3]<<8|buff[4]<<16|buff[5]<<24;
printf("size1:%d",size1);
xres=buff[18]&0x000000ff|buff[19]<<8|buff[20]<<16|buff[21]<<24;
printf("xres:%d",xres);
yres=buff[22]&0x000000ff|buff[23]<<8|buff[24]<<16|buff[25]<<24;
printf("yres:%d",yres);
if((xres*yres)<(var_info.xres*var_info.yres)||(xres*yres)==(var_info.xres*var_info.yres)<0)
{
perror("mmap not possible");
}
else
{
fb_ptr= (unsigned int *) mmap (0, size, PROT_READ|PROT_WRITE, MAP_SHARED, FrameBufferFD , 0);
}
lseek(bmpFD,54,SEEK_SET);
int line_length = fix_info.line_length/4;
for(i = yres - 1;i >= 0;i--)
{
 for(j = 0;j < xres;j++)
 {
 read(bmpFD, &temp, 4);
 fb_ptr[i * line_length + j] = temp;
 }
 }
}


