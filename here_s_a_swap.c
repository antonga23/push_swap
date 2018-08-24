/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   here_s_a_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 13:26:07 by antonga           #+#    #+#             */
/*   Updated: 2018/08/24 13:26:10 by antonga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

node* swap(node *head)
{
    node *cursor;
    int tmp;

    if(head == NULL)
        return NULL;
 
    /* find the prev node, starting from the first node*/
    cursor = head;
    while(cursor->next->next != NULL)
        cursor = cursor->next;
    tmp = cursor->data;
    cursor->data = cursor->next->data;
    cursor->next->data = tmp;
    return (head);
}
