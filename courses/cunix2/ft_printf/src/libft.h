/*
 * =====================================================================================
 *
 *       Filename:  libft.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  25/11/21 21:34:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
 

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "utils.h"

int ft_printf(char *format, ...);
int my_atoi(const char *str);
unsigned int my_strlen(char *str);
char *my_itoa(int val, int base);
