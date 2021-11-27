/*
 * =====================================================================================
 *
 *       Filename:  ft_strjoin.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  20/11/21 12:03:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
//#define NULL __DARWIN_NULL
//#define NULL 0;
//#define NULL 0
#define NULL 0L
#include <stdlib.h>

char *my_strcpy(char *destination, const char *source)
{
    if (destination == NULL) 
    {
        return NULL;
    }
    char *ptr = destination;
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return ptr;
}

char *my_strcat(char *s1, const char *s2)
{
    if ((s1 == NULL) && (s2 == NULL))
    {
        return NULL;
    }
    char *start = s1;
    while (*start != '\0')
    {
        start++;
    }
    while (*s2 != '\0')
    {
        *start++ = *s2++;
    }
    *start = '\0';
    return s1;
}
int unsigned my_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    return i; 
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *result = malloc(my_strlen(s1) + my_strlen(s2) + 1);

    if (result) // thanks @pmg
    {
        my_strcpy(result, s1);
        my_strcat(result, s2);
        
    }

    return result;

}
