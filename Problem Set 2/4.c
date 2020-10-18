/* Insert a value “X” (take input X from user) in the array at Kth (take input K from user)
    index and shift all other value to right. And print the whole array
    Name: Kona Paul
    Id: 1834902566*/

#include <stdio.h>
int main()
{
    int a[100] ;
    int n,i, X, K;
    int size = 10;

    printf("Please Enter the SIZE of array : ");
    scanf("%d",&n);
    printf("Please Enter Elements of this array : ");

    for(i=0; i<size; i++){
             printf("%d ", a[i]);

    }


    printf("\n\n");
//Insert Value

    printf("Input Value be inserted : ");
    scanf("%d", &X);

//Insert Position
    printf("Input the position ,where the value to be inserted : ");

    scanf("%d", &K);
    for(i=0; i<size; i++){


        printf("%d ", a[i]);
    }


    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;

     printf("\n\n");
        for (i=0;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}
