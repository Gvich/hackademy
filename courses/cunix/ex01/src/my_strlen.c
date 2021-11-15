/*
 * =====================================================================================
 *
 *       Filename:  my_strlen.c
 *
 *    Description: ex01 
 *
 *        Version:  1.0
 *        Created:  09/11/21 12:54:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
*/
/*
#include<stdio.h>
unsigned int my_strlen(char *p); // function declaration

int main()
{
    int a;

    char arr[30];

    printf("Enter your line:  ");
    fgets(arr, sizeof(arr), stdin);
    
    a  = my_strlen(arr);

    printf("Your line  %s has %d characters in it", arr, a);

    // signal to operating system program ran fine
    return 0;
}
*/
// definition of my_strlen() function

unsigned int my_strlen(char *str)
{
    unsigned int count = 0;

    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
