/*
** EPITECH PROJECT, 2022
** my_str_isnum
** File description:
** my_str_isnum
*/

#include "../../include/push_swap.h"

bool my_str_isnum(char *str)
{
    int i = 0;
    if (!(str[i] >= '0' && str[i] <= '9') && (str[i] != '-'))
        return false;
    i++;
    while (str[i] != '\0') {
        if (!(str[i] >= '0' && str[i] <= '9')) {
            return false;
        }
        i++;
    }
    return true;
}
