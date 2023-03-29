/*
** EPITECH PROJECT, 2022
** my_sort_int_array
** File description:
** return an integer array
*/

#include "libmy.h"

void echange(int *a, int *b)
{
    if ( *a > *b) {
        my_swap(a,b);
    }
}

void my_sort_int_array(int *array, int size)
{
    int index;
    int nb;

    for ( index = 0 ; index < size ; index++ ) {
        for ( nb = 0 ; nb < size ; index++) {
            echange(&array[nb], &array[nb + 1]);
        }
    }
}
