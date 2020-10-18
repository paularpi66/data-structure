/*Print entire array each element separated by comma
Name: Kona Paul
Id: 1834902566*/



#include <stdio.h>
int main(){

    int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int s = 10, i;

    for(i = 0; i<s; i++){

        printf("%d", array[i]);
        if(i<=s-2){
            printf(", ");
        }
    }
    return 0;
}
