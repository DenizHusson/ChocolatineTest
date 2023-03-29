/*
** EPITECH PROJECT, 2022
** repo_template
** File description:
** my_putstr.c
*/

#include "libmy.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
