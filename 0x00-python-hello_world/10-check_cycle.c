#include "lists.h"
/**
 * check_cycle - Checks if there is a loop in a linked list.
 * @list: pointer to linked list.
 * Return: returns 1 if there is a loop and 0 if there isn't.
 */
int check_cycle(listint_t *list)
{
    if (list != NULL && list->next != NULL)
    {
        listint_t *first = NULL;
        listint_t *latest = NULL;
        first = list;
        latest = first;
        while (latest && first && latest->next)
        {
            if (latest->next == NULL)
            {
                return (0);
            }
            if (latest->next == first)
            {
                return (1);
            }
            latest = latest->next;
        }
    }
    return (0);
}
