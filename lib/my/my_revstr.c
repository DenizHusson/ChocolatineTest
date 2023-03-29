/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_revstr.c
*/

#include "libmy.h"

char *my_revstr(char *str)
{
    char dest[my_strlen(str)];
    int i;
    int n;

    for (i = 0; str[i] != '\0'; i++) {
        dest[i] = str[my_strlen(str) - i - 1];
    }
    dest[i + 1] = '\0';
    for (n = 0; str[n] != '\0';n++) {
        str[n] = dest[n];
    }
    return str;
}
