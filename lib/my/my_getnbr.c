/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_getnbr.c
*/

#include "libmy.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int index = 0;

    if (str[0] == '-' && str[1] != '\0') {
        index++;
    }
    while (str[index] != '\0') {
        if ((str[index] < '0' || str[index] > '9'))
            return 0;
        nb = nb + str[index] - 48;
        nb *= 10;
        index++;
    }
    nb /= 10;
    if (str[0] == '-')
        return (-1 * nb);
    else {
        return nb;
    }
}
