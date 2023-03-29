/*
** EPITECH PROJECT, 2022
** repo_template
** File description:
** main.c
*/

#include "../includes/my.h"

int main(void)
{
    char *str;
    list_dialog_t dialog;
    dialog = dialog_parsing();
    str = dialog_value(dialog, 2);
    printf("%s\n", str);
    str = dialog_value(dialog, 4);
    printf("%s\n", str);
    return 0;
}
