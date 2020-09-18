#include <stdio.h>
int main() {
  printf("hello, world\n");
}

/*
gcc -static hello.c
od -An -tx -v a.out | sed 's/ //g' > dump.txt
wc -l dump.txt
*/