/*
 * =====================================================================================
 *
 *       Filename:  my_strcpy.c
 *
 *    Description: ex03 
 *
 *        Version:  1.0
 *        Created:  09/11/21 17:09:15
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
char *my_strcpy(char *dest, char *src)
{
    char *start = dest;

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0'; // add '\0' at the end
    return start;
}
