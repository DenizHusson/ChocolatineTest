/*
** EPITECH PROJECT, 2022
** currentDelivery
** File description:
** addnremove.c
*/

#include "libchainedlist.h"

list_dialog_t add_end_list(list_dialog_t lst, int id, char *value)
{
    list_node_dialog_t *ele;
    ele = malloc(sizeof(*ele));
    ele->id = id;
    ele->value = value;
    ele->after = NULL;
    ele->before = NULL;
    if (is_empty_list(lst)) {
        lst = malloc(sizeof(*lst));
        lst->len = 0;
        lst->begin = ele;
        lst->end = ele;
    } else {
        lst->end->after = ele;
        ele->before = lst->end;
        lst->end = ele;
    }
    lst->len += 1;
    return lst;
}

list_dialog_t add_begin_list(list_dialog_t lst, int id, char *value)
{
    list_node_dialog_t *ele;
    ele = malloc(sizeof(*ele));
    ele->id = id;
    ele->value = value;
    ele->after = NULL;
    ele->before = NULL;
    if (is_empty_list(lst)) {
        lst = malloc(sizeof(*lst));
        lst->len = 0;
        lst->begin = ele;
        lst->end = ele;
    } else {
        lst->begin->before = ele;
        ele->after = lst->begin;
        lst->begin = ele;
    }
    lst->len += 1;
    free(ele);
    return lst;
}

list_dialog_t retire_back_list(list_dialog_t lst)
{
    if (is_empty_list(lst)) {
        return empty_list();
    }
    if (lst->begin == lst->end) {
        free(lst);
        lst = NULL;
        return empty_list();
    }
    list_node_dialog_t *temp = lst->end;
    lst->end = lst->end->before;
    lst->end->after = NULL;
    temp->after = NULL;
    temp->before = NULL;
    free(temp);
    temp = NULL;
    lst->len -= 1;
    return lst;
}

list_dialog_t retire_front_list(list_dialog_t lst)
{
    if (is_empty_list(lst)) {
        return empty_list();
    }
    if (lst->begin == lst->end) {
        free(lst);
        lst = NULL;
        return empty_list();
    }
    list_node_dialog_t *temp = lst->begin;
    lst->begin = lst->begin->after;
    lst->begin->before = NULL;
    temp->after = NULL;
    temp->before = NULL;
    free(temp);
    temp = NULL;
    lst->len -= 1;
    return lst;
}
