/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_putchar.c
*/

#include "libmy.h"
#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}
