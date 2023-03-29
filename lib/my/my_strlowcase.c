/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_strlowcase.c
*/

#include "libmy.h"

char *my_strlowcase(char *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if ( str[nb] >= 'A' && str[nb] <= 'Z' ) {
            str[nb] = str[nb] + 32;
        }
    }
    return str;
}
