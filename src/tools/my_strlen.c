/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** len string
*/

#include "../../include/push_swap.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
