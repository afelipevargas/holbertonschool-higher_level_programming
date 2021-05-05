#include "lists.h"
/**
 * check_cycle - Checks if there is a loop in a linked list.
 * @list: pointer to linked list.
 * Return: returns 1 if there is a loop and 0 if there isn't.
 */
int check_cycle(listint_t *list)
{
    if (list != NULL)
    {
        listint_t *slow = NULL;
        listint_t *fast = NULL;
        slow = list;
        fast = slow;
        while (fast && slow && fast->next)
        {
            fast = fast->next;
            if (fast->next == NULL)
            {
                return (0);
            }
            if (fast == slow)
            {
                return (1);
            }
        }
    }
    return (0);
}
