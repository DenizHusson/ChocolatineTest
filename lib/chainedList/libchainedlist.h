/*
** EPITECH PROJECT, 2022
** myRPG
** File description:
** chainedlist.h
*/
#ifndef CHAINED_LIST
    #define CHAINED_LIST

    #include <stddef.h>
    #include <stdlib.h>
    #include <stdio.h>

typedef struct list_node_dialog_s {
    int id;
    char *value;
    struct list_node_dialog_s *before;
    struct list_node_dialog_s *after;
}list_node_dialog_t;

typedef struct list_dialog_s {
    int len;
    struct list_node_dialog_s *begin;
    struct list_node_dialog_s *end;
}*list_dialog_t;

typedef enum {
    false,
    true
}bool_e;

list_dialog_t empty_list(void);
bool_e is_empty_list(list_dialog_t lst);
int list_len(list_dialog_t lst);
list_dialog_t add_end_list(list_dialog_t lst, int id, char *value);
list_dialog_t add_begin_list(list_dialog_t lst, int id, char *value);
list_dialog_t retire_front_list(list_dialog_t lst);
void display_list(list_dialog_t lst);
list_dialog_t retire_back_list(list_dialog_t lst);

#endif /* CHAINED_LIST */
