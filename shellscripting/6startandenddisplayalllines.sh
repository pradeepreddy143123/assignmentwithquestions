#!/bin/sh

head -n $(expr $3 - 1) $1|tail -n $(expr $(expr $3 - $2) - 1) 

