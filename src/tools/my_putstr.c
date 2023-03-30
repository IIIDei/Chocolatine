/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** disp characters of a string
*/

#include "../../include/push_swap.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar (str[i]);
        i++;
    }
    return my_strlen(str);
}
