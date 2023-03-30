/*
** EPITECH PROJECT, 2022
** error
** File description:
** error
*/

#include "../../include/push_swap.h"

void print_list(list **root)
{
    for (list *curr = *root; curr != NULL; curr = curr->next) {
        my_put_nbr(curr->value);
        write(1, " ", 1);

    }
    write(1, "\n", 1);
}
