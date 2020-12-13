/*  Define a Structure for Linked List Node, Declare three variable,
    Assign value and next address in those variable. Print the variable address,
    value and next variable address. (Don’t use any Function, ‘typedef’ keyword
    and Dynamic Memory Allocation (DMA)) */




    #include<stdio.h>
struct node {

    int data;
    struct node* next;

};
int main ()
{

    struct node a,b,c;

    a.data = 10;
    a.next = &b;
    b.data = 20;
    b.next = &c;
    c.data = 30;
    c.next = NULL;

    printf("%p\t%d\t%p",&a,a.data,a.next);
    printf("\n%p\t%d\t%p",&b,b.data,b.next);
    printf("\n%p\t%d\t%p",&c,c.data,c.next);
}
