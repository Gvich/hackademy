/*
 * =====================================================================================
 *
 *       Filename:  ft_isalpha.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  16/11/21 15:23:06
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */


int ft_isalpha(int c)
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                      "abcdefghijklmnopqrstuvwxyz";
    char *letter = alphabet;

    while (*letter != '\0' && *letter != c)
    {
        ++letter;
    }


    if (*letter)
    {
        return 1;
    }

    return 0;
}




