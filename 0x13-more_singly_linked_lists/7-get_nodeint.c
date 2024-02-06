#include "lists.h"
/**
 * get_nodeint_at_index - A function to get specified node
 * @head: the head pointer
 * @index: the node needed
 * Return: the pointer of this node;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	int i;

	if (head == NULL)
		return (NULL);

	ptr = head;
	for (i = 0; i < n; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}