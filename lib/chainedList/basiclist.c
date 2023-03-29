/*
** EPITECH PROJECT, 2022
** currentDelivery
** File description:
** main.c
*/

#include "libchainedlist.h"

list_dialog_t empty_list(void)
{
    return NULL;
}

bool_e is_empty_list(list_dialog_t lst)
{
    if (lst == NULL) {
        return true;
    }
    return false;
}

int list_len(list_dialog_t lst)
{
    if (is_empty_list(lst)) {
        return 0;
    }
    return lst->len;
}

void display_list(list_dialog_t lst)
{
    list_node_dialog_t *temp = lst->begin;
    if (is_empty_list(lst)) {
        return;
    }
    for (; temp != NULL;) {
        printf("%d > %s\n", temp->id, temp->value);
        temp = temp->after;
    }
    free(temp);
}
