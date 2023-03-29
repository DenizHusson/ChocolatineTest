/*
** EPITECH PROJECT, 2022
** currentDelivery
** File description:
** my_str_to_array.c
*/

#include "libmy.h"

char **str_to_array(char *str)
{
    char **array;
    int i = 0;
    int j = 0;
    int k = 0;
    int nb_char = 0;
    int nb_words = nb_word(str);
    array = malloc(sizeof(char *) * (nb_words + 1));
    for (i = 0; i < nb_words; i++) {
        array[i] = malloc(sizeof(char) * (nb_mots(str, k) + 1));
        nb_char = nb_mots(str, k);
        for (j = 0; j < nb_char; j++) {
            array[i][j] = str[k];
            k++;
        }
        array[i][j + 1] = '\0';
        k++;
    }
    array[i + 1] = NULL;
    return array;
}

int nb_word(char *str)
{
    int nb_word = 0;
    for (int i = 0; str[i]; i++){
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\t') {
            nb_word++;
        }
    }
    return nb_word + 1;
}

int nb_mots(char *str, int i)
{
    int a;
    int j = 0;
    for (; str[i] != ' ' && str[i] != '\0' &&
    str[i] != '\n' && str[i] != '\t'; j++) {
        i++;
    }
    return j;
}
