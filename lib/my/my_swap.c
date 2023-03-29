/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** change 2 variable
*/

#include "libmy.h"

void my_swap(int *a, int *b)
{
    int change = *a;
    *a = *b;
    *b = change;
}
