/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** my_compute_power_rec.c
*/

#include "libmy.h"

int my_compute_power_rec(int nb, int p)
{
    int rep;

    if (p == 0 || nb == 1) {
        return 1;
    }
    if (p < 0 || nb == 0) {
        return 0;
    }
    if (p > 1) {
        rep = my_compute_power_rec(nb, p - 1) * nb;
        return (rep);
    }
}
