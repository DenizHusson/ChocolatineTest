/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_strncpy.c
*/

#include "libmy.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i;

    for (i = 0; src[i] != '\0' && i < n; i++) {
        dest[i] = src[i];
    }
    if (n > my_strlen(src)) {
        dest[i] = '\0';
    }
    return dest;
}
