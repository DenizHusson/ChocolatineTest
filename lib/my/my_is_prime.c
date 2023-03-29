/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_is_prime.c
*/

#include "libmy.h"

int my_is_prime(int nb)
{
    int index = 3;

    if (nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0)
        return 0;
    while (index * index <= nb) {
        if (nb % index == 0) {
            return 0;
        }
        index += 2;
    }
    return 1;
}
