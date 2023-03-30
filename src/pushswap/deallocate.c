/*
** EPITECH PROJECT, 2022
** free
** File description:
** free
*/

#include "../../include/push_swap.h"

void deallocate(list **root)
{
    list *curr = *root;
    while (curr != NULL) {
        list *aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}

void deallocate_all(list **l_a, list **l_b)
{
    deallocate(l_b);
    deallocate(l_a);
}
