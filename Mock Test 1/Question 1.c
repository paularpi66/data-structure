/* Write a C program that declare an integer array length of one hundred(100)(do not initialize the array).
scan values from user into an array until end of file or user input is 0(zero).
Print entry arry,each element should be separated by comma(,).Print entire array in reverse order also.
check overflow,use Function and pointer for each task.

Name: kona Paul
id#1834902566
*/

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
