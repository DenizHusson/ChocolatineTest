/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_strncmp.c
*/

#include "libmy.h"

int my_strncmp(char const *s1,char const *s2, int n)
{
    int i;
    int rep = 0;

    for (i = 0; s1[i] == s2[i] && i < n; i++) {
        if (i == my_strlen(s1)) {
            return 0;
        }
    }
    rep = s1[i] - s2[i];
    return rep;
}
