#include<stdio.h>

int main()
{
    int arr_size, counter;
    //int* loc;
    printf("Enter the size of array ");
    scanf("%d",&arr_size);
    int arr[arr_size];
     int* loc = &arr[0];
    for(counter = 0 ; counter<arr_size ; counter++)
    {
        arr[counter] = rand();
        printf("The array is , as accessed through pointer  %d and by call is  %d \n",*loc,arr[counter]);
        *loc = *loc +1;

    }
    printf("\n");
    
}
