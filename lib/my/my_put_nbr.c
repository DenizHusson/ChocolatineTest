/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** afficher un nombre
*/

#include "libmy.h"

int my_put_nbr(int nb)
{
    int index = 1;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while ( nb / index > 9 )
        index = index * 10;
    while ( index >= 1 ) {
        my_putchar((nb / index) % 10 + 48 );
        index = index / 10;
    }
}
