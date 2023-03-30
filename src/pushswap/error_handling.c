/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "../../include/push_swap.h"

bool check_arg(int idx_arg, char **argv)
{
    if (my_str_isnum(argv[idx_arg]) == false)
        return true;
    return false;
}
