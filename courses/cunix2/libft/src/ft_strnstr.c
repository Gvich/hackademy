/*
 * =====================================================================================
 *
 *       Filename:  ft_strnstr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  17/11/21 16:40:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
 
//#include "libft.h"
#include <stdio.h>//FOR NULL

int f_strncmp( const char * s1, const char * s2, int n )
{
    while ( n && *s1 && ( *s1 == *s2 ) )
    {
        ++s1;
        ++s2;
        --n;
    }
    if ( n == 0 )
    {
        return 0;
    }
    else
    {
        return ( *(unsigned char *)s1 - *(unsigned char *)s2 );
    }
}

int ft_strlen(const char *s) {
    const char *p = s;
    while (*s) ++s;
    return s - p;
}
char *ft_strnstr(const char *haystack, const char *needle, int len)
{
  char c, sc;
  int len2=0;
    //int a=0;

  if ((c = *needle++) != '\0') {
    len2 = ft_strlen(needle);
    do {
      do {
        if (len-- < 1 || (sc = *haystack++) == '\0')
          return (NULL);
      } while (sc != c);
      if (len2 > len)
        return (NULL);
            //a=strncmp(haystack, needle, len2);
    } while (f_strncmp(haystack, needle, len2) != 0);
    haystack--;
  }
  return ((char *)haystack);
}


