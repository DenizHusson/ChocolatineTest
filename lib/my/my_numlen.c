/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_numlen.c
*/

#include "libmy.h"

int my_numlen(int c)
{
    if ( c < 0) {
        return 1 + my_numlen(-c);
    }
    if ( c >= 0 && c < 10) {
        return 1;
    }
    if ( c >= 10 ) {
        return 1 + my_numlen(c / 10);
    }
    return 0;
}
