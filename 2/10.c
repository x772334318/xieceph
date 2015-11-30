/*
 * Author: YuQian Xie <772334318@qq.com>
 * Date:   Nov 30, 2015
 * File:   10.c
 *
 * Rewrite the function lower, which converts upper case letters to lower case,
 * with a conditional expression instead of if-else.
 */

#include <stdio.h>

int lower(int c);

int main() {
  int c;
  
  while ((c = getchar()) != EOF) {
    putchar(lower(c));
  }
  return 0;
}

int lower(int c) {
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}