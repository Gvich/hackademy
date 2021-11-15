/*
 * =====================================================================================
 *
 *       Filename:  my_atoi.c
 *
 *    Description: ex04.1
 *
 *        Version:  1.0
 *        Created:  09/11/21 21:58:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Eugene Karashevich (https://github.com/Gvich), wert130202@gmail.com
 *        Company:  ---
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <assert.h>
#include "test.h"

int my_atoi(const char *nptr){

    int i = 0;
    int minus = 1;
    int val = 0;
    while (nptr[i] == '-') {
        minus = -minus;
        i++;
    }
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        int nbr = (int) (nptr[i] - '0');

        val = (val * 10) + nbr;
        i++;
    }
    return val*minus;

}
