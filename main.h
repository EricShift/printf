#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
void _strprintf(const char *str);
void _count(int *ptr, char *str);
char *_itoa(int num);

#endif
