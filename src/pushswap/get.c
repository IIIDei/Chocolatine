/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** pushswap
*/

#include "../../include/push_swap.h"

int get_min(list **root)
{
    list *curr = *root;
    int min = curr->value;
    for (; curr != NULL; curr = curr->next) {
        if (curr->value < min)
            min = curr->value;
    }
    return min;
}
