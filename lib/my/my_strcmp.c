/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_strcmp.c
*/

#include "libmy.h"

int my_strcmp(char const *s1, char const *s2)
{
    int rep = 0;
    int i;

    for (i = 0; s1[i] == s2[i]; i++) {
        if (i == my_strlen(s1)) {
            return 0;
        }
    }
    rep = s1[i] - s2[i];
    return rep;
}
