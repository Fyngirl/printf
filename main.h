#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* Flag Modifier Macros */
#define PLUS 1
#define SPACE 2
#define HASH 4
#define ZERO 8
#define MINUS 16

/*SIZES*/
#define LONG 1
#define SHORT 2

int _printf(const char *format, ...);

#endif
