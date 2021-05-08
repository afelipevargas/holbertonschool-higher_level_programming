#include "lists.h"
/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: pointer to firts node.
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome.
 */
int is_palindrome(listint_t **head)
{
listint_t *aux = *head;
int nodes = 0;

if (!head && !*head)
{
return (0);
}
while (aux)
{
aux = aux->next;
nodes++;
}

int array[nodes], i = 0;

aux = *head;
while (aux)
{
array[i] = aux->n;
aux = aux->next;
i++;
}
aux = *head;
i -= 1;
while (aux)
{
if (array[i] != aux->n)
{
return (0);
}
aux = aux->next;
i--;
}
return (1);
}
