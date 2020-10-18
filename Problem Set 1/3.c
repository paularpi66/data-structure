/*Scan values from user into an array until user input is O (Zero)
Name: Kona Paul
Id: 1834902566*/


#include<stdio.h>
int main(){
    int array[100];
    int i = 0;

    while(scanf("%d",&array[i]) != EOF){
        if(0 == array[i])
        {
            break;
        }
        if(i>100)
        {
            printf("Overflow");
            break;
        }
        else{
           i++;
        }
    }
    return 0;
}
