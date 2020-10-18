/* Search a value X (take input X from user) in the array and
    print "Found" if X is found in the array otherwise print "Not Found"
    Name: Kona Paul
    Id: 1834902566 */

#include <stdio.h>
int main()
{
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int search = 0;

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n");
    printf("\nPlease enter the value for searching in the array: ");
//Insert Value
    scanf("%d", &X);

    for (i=0; i<size; i++)
    {
        if(array[i]==X)
            search++;
    }

    if(search==1)
        printf("Found");
    else
        printf("Not Found");

    return 0;
}

