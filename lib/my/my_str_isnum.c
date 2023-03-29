/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_str_isnum.c
*/

#include "libmy.h"

int my_str_isnum(char const *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if ( str[nb] < '0' || str[nb] > '9' ) {
            return 0;
        }
    }
    return 1;
}
