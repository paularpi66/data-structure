/*Scan N (take input N from user) values from user into an array
Name: Kona Paul
Id: 1834902566*/

#include<stdio.h>
int main()
{

    int array[100];
    int i,s;

    while(scanf("%d",&array[i])==1){
        if(i>100){

            printf("OverFlow");
            break;
        }
        i++;

    }
    i=s;
    for(i=0;i<s;i++){

      scanf("%d",array[i]);
    }
    return 0;
}
