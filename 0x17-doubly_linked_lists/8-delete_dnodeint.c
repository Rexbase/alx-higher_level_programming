#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t list.
 * @head: A double pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp, *prev;
    unsigned int i;

    if (!head || !*head)
        return -1;

    temp = *head;
    prev = NULL;

    for (i = 0; temp && i < index; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (!temp)
        return -1;

    if (prev)
        prev->next = temp->next;
    else
        *head = temp->next;

    if (temp->next)
        temp->next->prev = prev;

    free(temp);

    return 1;
}
