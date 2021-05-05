#include "lists.h"
/**
 * check_cycle - Checks if there is a loop in a linked list.
 * @list: pointer to linked list.
 * Return: returns 1 if there is a loop and 0 if there isn't.
 */
int check_cycle(listint_t *list)
{
    if (list != NULL || list->next != NULL)
    {
        listint_t *head = NULL;
        listint_t *aux = NULL;
        head = list;
        aux = head;
        while (aux)
        {
            if (aux->next == NULL)
            {
                return (0);
            }
            aux = aux->next;
            if (aux == head)
            {
                return (1);
            }
        }
    }
    return (0);
}
