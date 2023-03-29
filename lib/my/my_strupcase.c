/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_strupcase.c
*/

#include "libmy.h"

char *my_strupcase(char *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if ( str[nb] >= 'a' && str[nb] <= 'z' ) {
            str[nb] = str[nb] - 32;
        }
    }
    return str;
}
