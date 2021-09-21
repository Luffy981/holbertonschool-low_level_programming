#!/bin/bash
gcc *.c -c -fpic
gcc *.o -shared -o liball.so
ls -la lib*
rm *.o
nm -D --defined-only liball.so 
