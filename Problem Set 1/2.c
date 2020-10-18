/*Scan values from user into an array until end of file
Name: Kona Paul
Id: 1834902566*/

#include<stdio.h>
int main()
{
    int array[100];
    int i = 0;

    while(scanf("%d",&array[i]) != EOF){
        i++;
        if(i+1>100)
        {
            printf("Overflow");
            break;
        }
    }
    return 0;
}
