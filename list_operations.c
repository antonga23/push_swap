#include <stdio.h>
#include <stdlib.h>
 
typedef struct node
{
    int data;
    struct node* next;
}       node;
 
//typedef void (*handler)(node* data);
 
/*
    create a new node
    initialize the data and next field
 
    return the newly created node
*/
node* new(int data, node* next)
{
    node* new_node;
    if (!(new_node = (node*)malloc(sizeof(node))))
        return (NULL);
    new_node->data = data;
    new_node->next = next; 
    return (new_node);
}
 
/*
    add a new node at the end of the list
*/
node* append(node* head, int data)
{
    node *cursor;
    node* new_node;

    new_node = NULL;
    if(head == NULL)
        return new(data, head);
    /* go to the last node */
    cursor = head;
    while(cursor->next != NULL)
        cursor = cursor->next;
 
    /* create a new node */
    new_node =  new(data,NULL);
    cursor->next = new_node;
    return head;
}
/*
    add a new node at the beginning of the list
*/
node* prepend(node* head,int data)
{
    node* new_node = new(data,head);
    head = new_node;
    return head;
}
 
/*
    traverse the linked list

    -mj
void traverse(node* head,handler f)
{
    node* cursor = head;
    while(cursor != NULL)
    {
        f(cursor);
        cursor = cursor->next;
    }
}*/
/*
    remove node from the front of list
*/
node* remove_front(node* head)
{
    if(head == NULL)
        return NULL;
    node *front = head;
    head = head->next;
    front->next = NULL;
    /* is this the last node in the list */
    if(front == head)
        head = NULL;
    free(front);
    return head;
}
 
/*
    remove node from the back of the list
*/
node* remove_back(node* head)
{
    if(head == NULL)
        return NULL;
 
    node *cursor = head;
    node *back = NULL;
    while(cursor->next != NULL)
    {
        back = cursor;
        cursor = cursor->next;
    }
 
    if(back != NULL)
        back->next = NULL;
 
    /* if this is the last node in the list*/
    if(cursor == head)
        head = NULL; 
    free(cursor);
 
    return head;
}
 
void    ft_printf(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

/*
    display a node

 - mj
void ft_printf(node* n)
{
    if(n != NULL)
        printf("%d ", n->data);
}
 
*/

/*
    remove all element of the list
*/
void delete(node *head)
{
    node *cursor, *tmp;
 
    if(head != NULL)
    {
        cursor = head->next;
        head->next = NULL;
        while(cursor != NULL)
        {
            tmp = cursor->next;
            free(cursor);
            cursor = tmp;
        }
    }
}
/*
    return the number of elements in the list
*/
int ft_sizeof(node *head)
{
    node *cursor = head;
    int i = 0;
    while(cursor != NULL)
    {
        i++;
        cursor = cursor->next;
    }
    return i;
}

int main()
{
    node *head = NULL;
    int i = 5;
   // handler disp = ft_printf;
    while (i)
    {
        head = append(head,i--);
        //traverse(head,disp);
       // ft_printf(head);
       // printf("\n");
    }
    printf("print");
    ft_printf(head);
    printf("\n");

    printf("size = %d\n",ft_sizeof(head));

    printf("append");
    head = append(head,100);
    printf("\n");

    printf("prepend");
    head = prepend(head,10);
    printf("\n");

    /*
    ft_printf(head);
    node* nd = remove_back(head);
    printf("\n");
    ft_printf(head);
    printf("\n");
    node* nd1 = remove_front(head);
    ft_printf(head);
    printf("\n");*/
    delete(head);
    return (0);
}