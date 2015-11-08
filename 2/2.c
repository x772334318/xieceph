/*
 *Author: YuQian Xie <772334318@qq.com>
 *Date: Nov 8.2015
 *File: 2.c
 *
 *Write a loop equivalent to the for loop above without using && or || . 
 */
#include <stdio.h>

#define MAXLINE 1000

main() {
  int c, i;
  char s[MAXLINE];

  i = 0;
  while ((c = getchar()) != EOF)
  {
	  if (i >= MAXLINE - 1)
		  break;
	  else if (c == '\n')
		  break;
	  s[i] = c;
	  ++i;
  }
  if (c == '\n')
  {
	  s[i++] = c;
  }
  s[i] = '\0';
  printf("%s", s);
  return 0;
}