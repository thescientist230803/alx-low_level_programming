#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: pointer to the first node in the linked list
 * @index: index where the new node is deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i,n;
    listint_t *temp=*head;
    listint_t *prev=*head;

    if (!head)
        return (-1);

    i=index;

    if (i == 0)
	{
		*head=temp->next;
        free(temp);
        return(1);
	}
    if (i > 0)
    {
        for(n = 1; temp && n < i ; i++ )
        {
            prev=temp;
            temp=temp->next;
            if (n == i-1)
            {
                prev->next = temp->next;
                free(temp);
                temp=NULL;
                return(1);
            }
        }
    }
}
