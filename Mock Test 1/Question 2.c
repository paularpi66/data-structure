/* Insert a value “X” (take input X from user) in the array at Kth (take input K from user)
    index and shift all other value to right. And print the whole array.
    After completing the above operation reverse the array within the same array.
    And print the whole array.
    Name: Kona Paul
    Id: 1834902566*/

#include <stdio.h>
int main()
{
    system("color f0");
    int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11};
    int n,i, X, K;
    int size = 10;
    printf("Please Enter Elements of this array : ");

    for(i=0; i<size; i++){
             printf("%d ", a[i]);

    }
    printf("\n\n");
//Insert Value
    printf("Input Value be inserted : ");
    scanf("%d", &X);
    size = size+1;

//Insert Position
    printf("Input the index position where the value to be inserted : ");

    scanf("%d", &K);

    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;
    a[K] = X;
    size = size-1;
     printf("\n\n");
     printf("After inserting value in the %d index \n", K);
        for (i=0;i<=size;i++)
        {
            printf("%d ",a[i]);
        }
    //reversing the array
    printf("\n\n");
    printf("Output after reversing the array: ");
        for(i = size; i>=0; i--){

            printf("%d ", a[i]);

        }
   printf("\n");
   return 0;
}
