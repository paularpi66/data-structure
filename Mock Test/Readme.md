# Mock Test
## Mock test quetion No. 1
### Write a C program that declare an integer array length of one hundred(100)(do not initialize the array).
### scan values from user into an array until end of file or user input is 0(zero).
### Print entry arry,each element should be separated by comma(,).Print entire array in reverse order also.
### Check overflow,use Function and pointer for each task.
```
#include<stdio.h>
void reverse_array(int *p, int size);
int main()
{
    system("COLOR F0");
    int *p;
    int i, N;
    int array[10];
    int size = 0;
    p = &array[0];
    for(i=0; scanf("%d",(p+i))!=EOF; i++)
    {
        size++;
        if(size+1>10)
        {
            printf("\n\nOverflow");
            break;
        }
    }
    printf("\n");
    reverse_array(p,size);

    return 0;
}
void reverse_array(int *p, int size)
{
    int i;
    printf("\n\nAfter reversing the array which has been given input in the system are as follows:\n \n");
    for(i=size-1; i>=0; i--)
    {
        printf("%d ",*(p+i));
        if(i<=size)
        {
            printf(", ");

        }
    }
      printf("\n\n");
}

```

## Mock test quetion No. 2
### Insert a value “X” (take input X from user) in the array at Kth (take input K from user) index and shift all other value to right. And print the whole array.
### After completing the above operation reverse the array within the same array.
### And print the whole array.
```
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

```
