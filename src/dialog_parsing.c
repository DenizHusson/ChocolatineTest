/*
** EPITECH PROJECT, 2022
** myRPG
** File description:
** dialog_parsing.c
*/

#include "../includes/my.h"

list_dialog_t dialog_parsing(void)
{
    list_dialog_t dialog;
    dialog = empty_list();
    dialog = dialog_str_to_array(dialog, open_dialog_file());
    return dialog;
}

char *open_dialog_file(void)
{
    int fd = open("./file/dialog", O_RDONLY);
    char *str;
    struct stat sb;
    stat("./file/dialog", &sb);
    str = malloc(sizeof(char) * (sb.st_size + 1));
    read(fd, str, sb.st_size);
    str[sb.st_size] = '\0';
    return str;
}

char *dialog_value(list_dialog_t dialog, int id)
{
    char *str;
    list_node_dialog_t *temp = dialog->begin;
    while (temp != NULL) {
        if (temp->id == id) {
            free(temp);
            str = temp->value;
            return str;
        }
        temp = temp->after;
    }
    str = NULL;
    free(temp);
    return str;
}
