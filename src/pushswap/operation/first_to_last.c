/*
** EPITECH PROJECT, 2022
** operation
** File description:
** operation
*/

#include "../../../include/push_swap.h"

void first_to_last(list **root)
{
    list *head = *root;
    if (head == NULL || !head->next)
        return;
    list *curr = head->next;

    curr->previous = NULL;
    *root = curr;
    for (; curr->next != NULL; curr = curr->next);
    head->next = NULL;
    head->previous = curr;
    curr->next = head;
    write(1, "ra ", 3);
}

void duo_first_to_last(list **l_a, list **l_b)
{
    first_to_last(l_a);
    first_to_last(l_b);
}
