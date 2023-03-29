/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_str_islower.c
*/

#include "libmy.h"

int my_str_islower(char const *str)
{
    int nb;

    for ( nb = 0 ; str[nb] ; nb++) {
        if ( str[nb] < 'a' || str[nb] > 'z' ) {
            return 0;
        }
    }
    return 1;
}
