/*
 * =====================================================================================
 *
 *       Filename:  ft_striter.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/11/21 18:21:41
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
 int unsigned my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    return i; 
}

void ft_striter(char *s, void(*f)(char *))
{
    int size = my_strlen(s);
    for (int i = 0; i < size; i++)
    {
        f(s);
        s++;
    }

}

