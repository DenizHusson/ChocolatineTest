/*
** EPITECH PROJECT, 2022
** lib
** File description:
** my_str_to_int_array.c
*/

#include "libmy.h"

int **str_to_int(char *str)
{
    int **array;
    int i = 0, j = 0, k = 0, nb_char = 0;
    int nb_words = nb_word(str);
    array = malloc(sizeof(int *) * (nb_words + 1));
    for (i = 0; i < nb_words; i++) {
        k = skip_space(k, str);
        array[i] = malloc(sizeof(int) * (nb_mots(str, k) + 1));
        nb_char = nb_mots(str, k);
        for (j = 0; j < nb_char; j++) {
            array[i][j] = str[k] == '*' ? 1 : -1;
            k++;
        }
        array[i][j] = '\0';
        k++;
    }
    array[i] = NULL;
    return array;
}

int nb_word(char *str)
{
    int nb_word = 0;
    for (int i = 0; str[i]; i++){
        if (i == 0) {
            i = skip_space(i, str);
        }
        if (str[i] == ' ' || str[i] == '\0' ||
        str[i] == '\t' || str[i] == '\n') {
            nb_word++;
            i = skip_space(i, str);
        }
    }
    return nb_word + 1;
}

int nb_mots(char *str, int i)
{
    int j = 0;
    for (; str[i] != ' ' && str[i] != '\0' &&
    str[i] != '\n' && str[i] != '\t'; j++) {
        i++;
    }
    return j;
}

int skip_space(int nb, char *str)
{
    int index = nb;
    for (; str[index] == ' ' || str[index] == '\n' ||
    str[index] == '\t' || str[index] == '\0'; index++) {
    }
    return index;
}
