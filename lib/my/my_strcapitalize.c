/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_strcapitalize.c
*/

#include "libmy.h"

char *my_strcapitalize(char *str)
{
    int	indice = -1;
    int	nb = -1;

    while (str[(indice = indice + 1)] != '\0') {
        if (str[indice] < 123 && str[indice] > 96 && nb) {
        nb = 0;
        str[indice] = str[indice] - 32;
        }
        if (str[indice] == ' ' || str[indice] == '+' || str[indice] == '-')
        nb = 1;
    }
    return (str);
}
