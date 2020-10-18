/* Insert any value at tenth (10th) index of the array.
Name: Kona Paul
Id: 1834902566*/

#include <stdio.h>
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    int size = 10;
    int p = 1834902566;
    printf(" Original Array : \n\n");


    for(i=0; i<size; i++)
        printf("%d ", array[i]);
        {
            printf("\n");
        }

    array[9] = p;


    printf("\nAfter INSERT value: \n\n");

    for(i=0; i<size; i++){
            printf("%d ", array[i]);

    }


    return 0;
}
