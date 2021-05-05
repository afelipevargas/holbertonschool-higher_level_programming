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
        head = list->next;
        aux = list->next->next;
        while (aux)
        {
            if (head == aux)
            {
                return (1);
            }
            aux = aux->next;

            head = head->next;
            aux = aux->next->next;
        }
    }
    return (0);
}
