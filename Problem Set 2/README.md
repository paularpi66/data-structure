# Problem Set 2
## Value insertion in array in a specified index.
1. Inserting value in at 10th index of the array.
```
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
```

## Value insertion in array taking value from user.
2. Inserting value in the array taking the value from the user and storing the value in the specified index in the array.
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
    
    
 ## Value insertion in array in a specific index.
 3. Inserting value in the array taking the value from the user and inserting the value in the 3rd index.
 
 ```
  int a[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int K = 3;
    int size = 10;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    printf("\n");
    scanf("%d", &X);

    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;

    for(i=0; i<size; i++)
        printf("%d ", a[i]);

    return 0;
```
 
## Value insertion in array in a specific index.
 4. Inserting value in the array taking the value from the user and inserting the value in the index whose value will also be taken from the user.
```
 int a[100] ;
    int n,i, X, K;
    int size = 10;

    printf("Please Enter the SIZE of array : ");
    scanf("%d",&n);
    printf("Please Enter Elements of this array : ");

    for(i=0; i<size; i++){
             printf("%d ", a[i]);

    }


    printf("\n\n");

    printf("Input Value be inserted : ");
    scanf("%d", &X);

    printf("Input the position ,where the value to be inserted : ");

    scanf("%d", &K);
    for(i=0; i<size; i++){


        printf("%d ", a[i]);
    }


    for (i=size; i>=K; i--)
        a[i] = a[i - 1];

    size++;

    a[K - 1] = X;

     printf("\n\n");
        for (i=0;i<=n;i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
 ```
    
## Updating existing value in a specific index
5. Updating the element in 5th index taking the value from the user.
```
    int array [10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int p = 5, size = 10, K = 188;
     printf("Before Update : \n\n");

    for(i = 0;i < 10;i++){

    printf("%d ",array[i]);

    }

    printf("\n\n");
     for (i=0; i==K; i++)
        array[i] = array[i - 1];

    array[p - 1] = K;

    array[5]=900;

    printf("\nAfter Update : \n\n");

    for(i=0;i<size;i++){

    printf("%d ",array[i]) ;

    }
    printf("\n\n\n");

    return 0;
```
    
## Updating existing value in a specific index
6. Updating the element in the specified index taking the index number and the updating value both from the user.
    
```
    int array[100] = {1,2,3,4,5,6,7,8,9,10};

    printf("Before update : \n");

    int i, X, p;
    int size = 10;

    for(i = 0; i < size; i++)
    {
        printf("%d ",array[i]);

    }

    printf("\n\n");

    printf("\nplease Enter the position ,where you update(0-4) :\n");
    scanf("%d",&p); //Insert Position
    printf("\nplease Enter your new value :\n");
    scanf("%d",&X);//Insert value

    array[p]=X;

    printf("\nAfter Update:\n \n");

    array[p - 1] = X;
    for(i=0;i<size;i++){
        printf("%d ",array[i]);
    }
    return 0;
```
    
 ## Searching value in the array.
 7. Searching value in the array after taking the value which needs to be searched from the user. 
 ```
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, X;
    int size = 10;
    int search = 0;

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n");
    printf("\nPlease enter the value for searching in the array: ");
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
 ```
    
## Searching value in the array and finding its index.
8. Searching value in the array and showing its index number after taking the value which needs to be searched from the user. 
```
    int array[100]= {1,4,3,4,7,9,8,7,5,7,6,4,8,7,10,20,10,15,20,25};
    int i, k, X;
    int tag=0;
    int size=20;

    printf("Before deleting value : \n");

    for(i=0; i<size; i++)

        printf("%d ",array[i]);
        printf("\n");

    printf("Please insert the value: ");

    scanf("%d",&X);

    for( i=0; i<=size; i++)
    {
        if(X==array[i])
        {
            for(k=i; k<=size; k++)
            {
                array[k] = array[k+1];
            }
            size--;
            tag++;
            i--;
        }
    }

    if(tag==0)
    {
        printf("\nValue Not Found\n");
    }
    else
    {
        printf("\nAfter deleting all occurrence: \n");
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
 ```
    
## Deleting a value from a specied index.
9. Deleting a value from the specific index which needs to be taken from the users and after deleting the value from the specific index all the  value need to be shift to the left.
```
   int array[100]= {1,4,3,4,7,9,8,5,5,7,6,4,8,9,10,20,10,15,20,25};
    int i, k, X;
    int tag=0;
    int size=20;

    printf("Before deleting value : \n");

    for(i=0; i<size; i++)

        printf("%d ",array[i]);
        printf("\n");

    printf("Please insert the value: ");
    scanf("%d",&X);
    X = X+1;

    for(i=0; i<size; i++)
    {
        if(X==array[i])
        {
            for(k=i; k<=size; k++)
            {
                array[k] = array[k+1];
            }
            tag++;
            break;
        }
    }

    size--;

    if(tag!=1)
    {
        printf("Value Not Found");
    }
    else
    {
        printf("\nAfter deleting first occurrence: \n");
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
```
   
## Deleting value from the array from the specified index.
10. Deleting value from the previous index of the specified index given by the user.
```
int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, index;
    int size = 10;
    int tag = 0;

     printf("\n Before deleting value : \n");

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n Please Enter Index which you Want To Delete:\n ");

    scanf("%d", &index);

    for (i=index-1; i<size; i++)
        array[i] = array[i+1];

    size--;

     printf("\nAfter deleting  value:\n ");

    for (i=0; i<size; i++){

        printf("%d ",array[i]);
      }
    return 0;
```

## Deleting value from the array from the specified index.
11. Deleting value from the next index of the specified index given by the user.
```
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, index;
    int size = 10;
    int tag = 0;

    printf("\n Before deleting value : \n");

    for(i=0; i<size; i++)
        printf("%d ", array[i]);

    printf("\n Please Enter Index which you Want To Delete:\n ");

    scanf("%d", &index);

    for (i=index+1; i<size; i++)
        array[i] = array[i+1];

    size--;

     printf("\nAfter deleting  value:\n ");

    for (i=0; i<size; i++){

        printf("%d ",array[i]);
      }
    return 0;
```

## Deleting value from the array searching the specified value.
12. Deleting value from the array taking the specified value and deleting only the first occurance.
```
int array[100]= {1,4,3,4,7,9,8,5,5,7,6,4,8,9,10,20,10,15,20,25};
    int i, k, X;
    int tag=0;
    int size=20;

    printf("Before deleting value : \n");

    for(i=0; i<size; i++)

        printf("%d ",array[i]);
        printf("\n");

    printf("Please insert the value: ");
    scanf("%d",&X);

    for(i=0; i<size; i++)
    {
        if(X==array[i])
        {
            for(k=i; k<=size; k++)
            {
                array[k] = array[k+1];
            }
            tag++;
            break;
        }
    }

    size--;

    if(tag!=1)
    {
        printf("Value Not Found");
    }
    else
    {
        printf("\nAfter deleting first occurrence: \n");
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
```


## Deleting value from the array searching the specified value.
13. Deleting value from the array taking the specified value and deleting only the previous value of the specified value taken from the user and deleting only the first occurance.
```
int array[100]= {1,4,3,4,7,9,8,5,5,7,6,4,8,9,10,20,10,15,20,25};
    int i, k, X;
    int tag=0;
    int size=20;

    printf("Before deleting value : \n");

    for(i=0; i<size; i++)

        printf("%d ",array[i]);
        printf("\n");

//Insert Value
    printf("Please insert the value: ");
    scanf("%d",&X);
    X = X-1;

    for(i=0; i<size; i++)
    {
        if(X==array[i])
        {
            for(k=i; k<=size; k++)
            {
                array[k] = array[k+1];
            }
            tag++;
            break;
        }
    }

    size--;

    if(tag!=1)
    {
        printf("Value Not Found");
    }
    else
    {
        printf("\nAfter deleting first occurrence: \n");
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
```


## Deleting value from the array searching the specified value.
14. Deleting value from the array taking the specified value and deleting only the next value of the specified value taken from the user and deleting only the first occurance.
```
int array[100]= {1,4,3,4,7,9,8,5,5,7,6,4,8,9,10,20,10,15,20,25};
    int i, k, X;
    int tag=0;
    int size=20;

    printf("Before deleting value : \n");

    for(i=0; i<size; i++)

        printf("%d ",array[i]);
        printf("\n");

//Insert Value
    printf("Please insert the value: ");
    scanf("%d",&X);
    X = X+1;

    for(i=0; i<size; i++)
    {
        if(X==array[i])
        {
            for(k=i; k<=size; k++)
            {
                array[k] = array[k+1];
            }
            tag++;
            break;
        }
    }

    size--;

    if(tag!=1)
    {
        printf("Value Not Found");
    }
    else
    {
        printf("\nAfter deleting first occurrence: \n");
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
```


## Deleting value from the array searching the specified value.
15. Deleting value from the array taking the specified value delete all the occurance.
```
int array[100]= {1,4,3,4,7,9,8,7,5,7,6,4,8,7,10,20,10,15,20,25};
    int i, k, X;
    int tag=0;
    int size=20;

    printf("Before deleting value : \n");

    for(i=0; i<size; i++)

        printf("%d ",array[i]);
        printf("\n");

//Value Insertion
    printf("Please insert the value: ");

    scanf("%d",&X);

    for( i=0; i<=size; i++)
    {
        if(X==array[i])
        {
            for(k=i; k<=size; k++)
            {
                array[k] = array[k+1];
            }
            size--;
            tag++;
            i--;
        }
    }

    if(tag==0)
    {
        printf("\nValue Not Found\n");
    }
    else
    {
        printf("\nAfter deleting all occurrence: \n");
        for(i=0; i<size; i++)
            printf("%d ",array[i]);
    }

    return 0;
```

 
 
  
    
    
    
