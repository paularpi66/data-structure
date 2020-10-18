
/* Update Kth (take input K from user) index with the value
    “X” (take input X from user).
    Name: Kona Paul
    Id: 1834902566*/


#include<stdio.h>
int main()

{
    int array[100] = {1,2,3,4,5,6,7,8,9,10};

    printf("Before update : \n");

    int i, X, p;
    int size = 10;

    for(i = 0; i < size; i++)
    {
        printf("%d ",array[i]);

    }

    printf("\n\n");

    printf("\nplease Enter the position ,where you update(0-4) :\n");
    scanf("%d",&p); //Insert Position
    printf("\nplease Enter your new value :\n");
    scanf("%d",&X);//Insert value

    array[p]=X;

    printf("\nAfter Update:\n \n");

    array[p - 1] = X;
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }




    return 0;
}
