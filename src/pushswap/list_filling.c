/*
** EPITECH PROJECT, 2022
** pushswap
** File description:
** list_filling
*/

#include "../../include/push_swap.h"

bool insert_end(list **root, int value)
{
    list *new_node = malloc(sizeof(list));

    if (new_node == NULL)
        return false;
    new_node->next = NULL;
    new_node->value = value;

    if (*root == NULL) {
        new_node->previous = NULL;
        *root = new_node;
        return true;
    }

    list *curr = *root;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    new_node->previous = curr;
    curr->next = new_node;
    return true;
}

bool list_filling(list **root, int argc, char **argv)
{
    for (int idx_arg = 1; idx_arg < argc; idx_arg++) {
        if (check_arg(idx_arg, argv))
            return false;
        if (!insert_end(root, get_nbr(argv[idx_arg])))
            return false;
    }
    return true;
}
