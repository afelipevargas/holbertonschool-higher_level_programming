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
        listint_t *slow = NULL;
        listint_t *fast = NULL;
        slow = list->next;
        fast = list->next->next;

        while (slow && fast && slow->next)
        {
            if (slow == fast)
            {
                return (1);
            }
            fast = fast->next;

            slow = slow->next;
            fast = fast->next->next;
        }
    }
    return (0);
}
