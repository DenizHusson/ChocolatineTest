/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_strcpy.c
*/

#include "libmy.h"

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i + 1] = '\0';
    return dest;
}
