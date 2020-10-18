/* Delete a value from Kth index (take input K from user) from
    the array shift all other value to left.
    Name: Kona Paul
    Id: 1834902566*/


#include<stdio.h>
#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, index;
    int size = 10;
    int tag = 0;

     printf("\n Before deleting value : \n");

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n Please Enter Index which you Want To Delete:\n ");

    scanf("%d", &index);

    for (i=index-1; i<size; i++)
        array[i] = array[i+1];

    size--;

     printf("\nAfter deleting  value:\n ");

    for (i=0; i<size; i++){

        printf("%d ",array[i]);
      }
    return 0;
}

