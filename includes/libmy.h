/*
** EPITECH PROJECT, 2022
** lib
** File description:
** proto.h
*/

#ifndef LIBMY
    #define LIBMY
    #include <stdlib.h>
    #include <stddef.h>
    #include <stdio.h>

    int my_compute_power_rec(int nb, int p);
    int my_compute_square_root(int nb);
    int my_find_prime_sup(int nb);
    int my_is_prime(int nb);
    int my_getnbr(char const *str);
    int my_is_prime(int nb);
    int my_isneg(int n);
    void my_putchar(char c);
    int my_put_nbr(int nb);
    char *my_revstr(char *str);
    int my_strlen(char const *str);
    int my_showmem(char const *str, int size);
    int my_showstr(char const *str);
    void my_sort_int_array(int *array, int size);
    void echange(int *a, int *b);
    void my_swap(int *a, int *b);
    int my_str_isalpha(char const *str);
    int my_str_islower(char const *str);
    int my_str_isnum(char const *str);
    int my_str_isprintable(char const *str);
    int my_str_isupper(char const *str);
    char *my_strcapitalize(char *str);
    int my_strcmp(char const *s1, char const *s2);
    char *my_strcpy(char *dest, char const *src);
    char *my_strlowcase(char *str);
    int my_strncmp(char const *s1,char const *s2, int n);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strupcase(char *str);
    int my_numlen(int c);
    int my_strlen(char const *str);
    int **str_to_int(char *str);
    int nb_word(char *str);
    int skip_space(int nb, char *str);
    int nb_mots(char *str, int i);
    int my_putstr(char const *str);

#endif /* PROTO */
