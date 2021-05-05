#include "lists.h"
/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: pointer to firts node.
 * @number: number to insert in node.
 * Return: pointer to new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node;
    listint_t *aux = *head;

    if (!head)
    {
        return (NULL);
    }
    new_node = malloc(sizeof(listint_t));
    if (!new_node)
    {
        return (NULL);
    }
    new_node->n = number;
    if (!(*head) || (*head)->n >= number)
    {
        new_node->next = aux;
        *head = new_node;
        return (new_node);
    }
    while (aux && aux->next && aux->next->n < number)
    {
        aux = aux->next;
    }
    new_node->next = aux->next;
    aux->next = new_node;

    return (new_node);
}
