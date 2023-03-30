/*
** EPITECH PROJECT, 2022
** operation
** File description:
** operation
*/

#include "../../../include/push_swap.h"

void last_to_first(list **root)
{
    list *head = *root;
    list *curr = head;
    if (curr == NULL || !curr->next)
        return;
    for (; head->next != NULL; head = head->next);

    head->previous->next = NULL;

    head->next = curr;
    head->previous = NULL;
    curr->previous = head;
    *root = head;
}

void duo_last_to_first(list **l_a, list **l_b)
{
    last_to_first(l_a);
    last_to_first(l_b);
}
