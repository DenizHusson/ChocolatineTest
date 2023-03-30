/*
** EPITECH PROJECT, 2022
** repo_template
** File description:
** proto.h
*/

#ifndef PROTO
    #define PROTO

list_dialog_t dialog_parsing(void);
char *open_dialog_file(void);
list_dialog_t dialog_str_to_array(list_dialog_t dialog, char *str);
int dialog_nb_word(char *str);
int dialog_nb_mots(char *str, int i);
int dialog_skip_space(int nb, char *str);
char *dialog_value(list_dialog_t dialog, int id);
int yup(int a);

#endif /* PROTO */
