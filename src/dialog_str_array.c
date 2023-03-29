/*
** EPITECH PROJECT, 2022
** myRPG
** File description:
** dialog_str_array.c
*/

#include "../includes/my.h"

list_dialog_t dialog_str_to_array(list_dialog_t dialog, char *str)
{
    char **array;
    int i = 0, j = 0, k = 0, nb_char = 0;
    int nb_words = dialog_nb_word(str);
    array = malloc(sizeof(char *) * (nb_words + 1));
    for (i = 0; i < nb_words; i++) {
        nb_char = dialog_nb_mots(str, k);
        array[i] = malloc(sizeof(char) * (nb_char + 1));
        for (; str[k] != ' '; k++);
        k += 1;
        for (j = 0; j < (nb_char - 2); j++) {
            array[i][j] = str[k];
            k++;
        }
        array[i][j] = '\0';
        k++;
        dialog = add_end_list(dialog, i, array[i]);
        free(array[i]);
    }
    free(array);
    return dialog;
}

int dialog_nb_word(char *str)
{
    int nb_word = 0;
    for (int i = 0; i <= my_strlen(str); i++){
        if (i == 0) {
            i = dialog_skip_space(i, str);
        }
        if (str[i] == '\0' || str[i] == '\t' || str[i] == '\n') {
            nb_word++;
            i = dialog_skip_space(i, str);
        }
    }
    return nb_word;
}

int dialog_nb_mots(char *str, int i)
{
    int j = 0;
    for (;str[i] != '\0' && str[i] != '\n' && str[i] != '\t'; j++) {
        i++;
    }
    return j;
}

int dialog_skip_space(int nb, char *str)
{
    int index = nb;
    for (;str[index] == '\n' ||
    str[index] == '\t'; index++) {
    }
    return index;
}
