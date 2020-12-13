/*  Define a function to display (only value for each node) the complete Linked List
    and do the same as problem 1. (Don’t use DMA) */

    #include<stdio.h>
typedef struct node Node;

struct node {

    int data;
    Node* next;

};
void print_List(Node* head);
int main ()
{

    Node a,b,c;

    Node *head;
    head = &a;
    a.data = 10;
    a.next = &b;
    b.data = 20;
    b.next = &c;
    c.data = 30;
    c.next = NULL;
    print_List(head);



}
void print_List(Node* head)
{
       Node* temp = head;
    while(temp)
    {
         printf("%d\t",temp->data);

         temp=temp->next;
    }
}
