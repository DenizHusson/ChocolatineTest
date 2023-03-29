/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_strlen.c
*/

#include "libmy.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i += 1;
    }
    return i;
}
