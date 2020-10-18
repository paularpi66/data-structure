/* Insert a value “X” (take input X from user) in
   the array at the end of currently stored elements
   Name: Kona Paul
   Id: 1834902566*/

#include<stdio.h>
int main()
{
    int a[100];
    int n,k,i,x;

    printf("Please Enter the SIZE of array : \n");
    scanf("%d",&n);
    printf("Please Enter Elements of this array : \n");
    for(i=0;i<n;i++)
    {
        printf("Element : %d:",i);
        scanf("%d",&a[i]);
    }

        printf("Please Input Value be inserted : \n");
        scanf("%d",x);

        printf("Please Input the position ,where the value to be inserted : \n");
        scanf("%d",&k);

        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);

        }
        a[k]=x;
        printf("\n\n");
        for (i=0;i<=n;i++)
        {
            printf("%d ",a[i]);
        }


    return 0;
}
