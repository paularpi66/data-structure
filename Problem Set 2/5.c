/* Update fifth (5th) index with another value.
Name: Kona Paul
Id: 1834902566*/


#include<stdio.h>
int main()
{
    int array [10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int p = 5, size = 10, K = 188;
     printf("Before Update : \n\n");

    for(i = 0;i < 10;i++){

    printf("%d ",array[i]);

    }

    printf("\n\n");
     for (i=0; i==K; i++)
        array[i] = array[i - 1];

    array[p - 1] = K;

    array[5]=900;

    printf("\nAfter Update : \n\n");

    for(i=0;i<size;i++){

    printf("%d ",array[i]) ;

    }
    printf("\n\n\n");

    return 0;
}
