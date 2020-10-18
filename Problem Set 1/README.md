 # Problem Set 1
 
 ## Value insertion in Array.
1. Scanning value from user and inserting value in the array
 
 ```
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
```
 
 ## Value insertion in array it the end of the array.
 2. Scaning values from user into the array until the end of file
 
 ```
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
 ```
 
 ## Value insertion in array till the user enters a specified value in the array.
 3. Scanning value from user intp an array until user input Zero
 ```
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
 ```
 
 ## Printing element in the array in seperate line.
 4. Printing all the value in the array in seperate line.
 ```
 int arr[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int size = 10, k;

    for(k = 0; k<size; k++){

        printf("%d\n", arr[k]);

    }
    return 0;
 ```
 
 ## Printing all element in array with spaces.
 5. Printing all the element in the array in a single line seperated by spaces.
 
 ```
    int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int size = 10, i;

    for(i = 0; i<size; i++){

        printf("%d ", array[i]);

    }
    return 0;
 ```
 
 ## Printing all element in array with comma.
 6. Printing all the element in the array in a single line seperated by spaces.
 
```
    int array[100] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int s = 10, i;

    for(i = 0; i<s; i++){

        printf("%d", array[i]);
        if(i<=s-2){
            printf(", ");
        }
    }
    return 0;
 ```
 
 ## Printing array in Reverse Order
 7. Printing all the element in the array in reverse order
 ```
    int array[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    int size = 10, i;

    for(i = 0; i<size; i++){

        printf("%d ", array[i]);

    }

    printf("\n");

    for(i = size-1; i>=0; i--){

        printf("%d ", array[i]);

    }

    printf("\n");
    return 0;
 ```
 
