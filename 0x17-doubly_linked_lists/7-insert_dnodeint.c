#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: A double pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int i;

    if (!h)
        return NULL;

    if (idx == 0)
        return add_dnodeint(h, n);

    temp = *h;
    for (i = 0; temp && i < idx - 1; i++)
        temp = temp->next;

    if (!temp)
        return NULL;

    if (!temp->next)
        return add_dnodeint_end(h, n);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return NULL;

    new_node->n = n;
    new_node->prev = temp;
    new_node->next = temp->next;
    temp->next->prev = new_node;
    temp->next = new_node;

    return new_node;
}
