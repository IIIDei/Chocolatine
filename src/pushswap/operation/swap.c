/*
** EPITECH PROJECT, 2022
** swap
** File description:
** swap
*/

#include "../../../include/push_swap.h"

void swap(list **root)
{
    list *curr = *root;
    if (curr == NULL || !curr->next)
        return;
    int temp = curr->value;
    curr->value = curr->next->value;
    curr->next->value = temp;
}

void duo_swap(list **l_a, list **l_b)
{
    swap(l_a);
    swap(l_b);
}
