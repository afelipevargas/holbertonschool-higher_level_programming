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
        slow = list->next;
        fast = list->next->next;
        while (fast)
        {
            if (fast->next == NULL)
            {
                return (0);
            }
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                printf("yes\n");
                return (1);
            }
        }
    }
    return (0);
}
