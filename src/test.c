/*
** EPITECH PROJECT, 2022
** Chocolatine
** File description:
** test.c
*/

#include "../includes/my.h"

int yup(int a)
{
    if (a > 5) {
        return a;
    }
    if (a <= 0) {
        return 0;
    }
    if (a == 42) {
        return -1;
    }
    return 1;
}
