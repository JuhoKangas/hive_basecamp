/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 13:45:25 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/10 08:14:43 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

struct node
{
	int value;
	struct node* next;
};
typedef struct node t_list;


void printlist(t_list *head)
{
	t_list *temporary = head;
	while (temporary != NULL)
	{
		printf("%i - ", temporary->value);
		temporary = temporary->next;
	}
	printf("\n");
}

t_list *create_new(int value)
{
	t_list *result = malloc(sizeof(t_list));
	result->value = value;
	result->next = NULL;
	return result;
}

int main()
{
	t_list *head;
	t_list *temp;
	int i = 0;
	head = NULL;

	while (i < 10)
	{
		temp = create_new(i);
		temp->next = head;
		head = temp;
		i++;	
	}

	printlist(head);

	head = head->next;

	printlist(head);

	
	return 0;
}


node_t *insert_at_head(node_t **head, node_t node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

int main()
{
	node_t *head = NULL;
	
	insert_at_head(&head, tmp);

	do something with the node
}