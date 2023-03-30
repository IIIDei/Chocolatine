/*
** EPITECH PROJECT, 2022
** push_swap.h
** File description:
** prototypes
*/

#include <sys/types.h>
#include <sys/times.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdint.h>
#include <dirent.h>
#include <stdarg.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <time.h>
#include <pwd.h>
#include <string.h>
#include <stdlib.h>
#include <curses.h>
#include <stdbool.h>

#ifndef PUSH_SWAP_H_
    #define PUSH_SWAP_H_

    //tools
    int my_putchar(char c);
    int my_putstr(char const *str);
    int my_put_nbr(int nb);
    int my_strlen(char const *str);
    bool my_str_isnum(char *str);
    int get_nbr(char *charact);
    //my_printf
    int int_conv(unsigned int nbr, int base, char *tab);
    int dec_to_octal(unsigned int nbr);
    int dec_to_dec(unsigned int nbr);
    int dec_to_hexa(unsigned int nbr);
    int dec_to_majhexa(unsigned int nbr);
    int dec_to_binary(unsigned int nbr);
    int sp_charact(const char *format, int i, va_list lst);
    int my_printf(const char *format, ...);
    //push_swap
    typedef struct list {
        int value;
        struct list *next;
        struct list *previous;
    } list;

    bool check_arg(int idx_arg, char **argv);
    void deallocate(list **root);
    bool list_filling(list **root, int argc, char **argv);
    bool insert_end(list **root, int value);
    void print_list(list **root);
    void deallocate_all(list **l_a, list **l_b);
    // operations
    void swap(list **root);
    void duo_swap(list **l_a, list **l_b);
    void first_to_last(list **root);
    void duo_first_to_last(list **l_a, list **l_b);
    void last_to_first(list **root);
    void duo_last_to_first(list **l_a, list **l_b);
    void move_to_l_a(list **l_a, list **l_b);
    void move_to_l_b(list **l_a, list **l_b);
    bool check_mv_la(list **l_a, list **l_b, list *curr_a, list *curr_b);
    bool check_mv_lb(list **l_a, list **l_b, list *curr_a, list *curr_b);
    // algo
    void algo(list **l_a, list **l_b, int argc);
    bool good_order(list **root);
    void just_two(list **l_a);
    void insert_all_to_la(list **l_a, list **l_b, list *curr_b);
    int get_min(list **root);

#endif
