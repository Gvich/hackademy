/*
 * =====================================================================================
 *
 *       Filename:  my_strcmp.c
 *
 *    Description: ex02 
 *
 *        Version:  1.0
 *        Created:  09/11/21 16:38:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
int my_strcmp(char *str1, char *str2)
{
    while( ( *str1 != '\0' && *str2 != '\0' ) && *str1 == *str2 )
    {
        str1++;
        str2++;
    }

    if(*str1 == *str2)
    {
        return 0; // strings are identical
    }

    else
    {
        return *str1 - *str2;
    }
}
