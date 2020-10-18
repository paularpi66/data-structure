/*Delete a value before X(Take input X from user) from the array shift all other value to left.
If X is not present in the given array print "Element not found." only delete the first occurrence of the value
Name: Kona Paul
Id: 1834902566*/

#include<stdio.h>
int main ()
{
    int array[100]= {1,4,3,4,7,9,8,5,5,7,6,4,8,9,10,20,10,15,20,25};
    int i, k, X;
    int tag=0;
    int size=20;

    printf("Before deleting value : \n");

    for(i=0; i<size; i++)

        printf("%d ",array[i]);
        printf("\n");

//Insert Value
    printf("Please insert the value: ");
    scanf("%d",&X);
    X = X-1;

    for(i=0; i<size; i++)
    {
        if(X==array[i])
        {
            for(k=i; k<=size; k++)
            {
                array[k] = array[k+1];
            }
            tag++;
            break;
        }
    }

    size--;

    if(tag!=1)
    {
        printf("Value Not Found");
    }
    else
    {
        printf("\nAfter deleting first occurrence: \n");
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
}
