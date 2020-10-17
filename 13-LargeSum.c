#include <stdio.h>
#include <stdlib.h>
#define NUMBERS_TO_ADD 100
#define DIGITS_IN_NUM 50

void addNums(int*, int*, int*);

void main() {
    // int* numbers[NUMBERS_TO_ADD];
    int *num1, *num2;
    int* sum;
    int i, j;

    num1 = (int*) calloc(10, sizeof(int));
    num2 = (int*) calloc(10, sizeof(int));

    for(i = 1; i < 10; i++) {
        num1[i] = 9;
        num2[i] = 9;
    }

    sum = (int*) calloc(10,sizeof(int));

    addNums(num1, num2, sum);

    for (i = 0; i < 10; i++)
    {
        printf("%d", sum[i]);
    }
    
    printf("\n");

    // sum = calloc(DIGITS_IN_NUM, sizeof(int));

    // for(i = 0;i < NUMBERS_TO_ADD; i++) {
    //     numbers[i] = (int*) calloc(DIGITS_IN_NUM, sizeof(int));
    // }

    // for(i = 0; i < NUMBERS_TO_ADD; i++) {
    //     printf(numbers[i], sum, sum);
    // }


}

void addNums(int* num1, int* num2, int* result) {
    int i;
    int temp;

    for(i = DIGITS_IN_NUM - 1; i >= 0; i--) {

        result[i] = num1[i] + num2[i];

        // if(result[i] + temp < 10) {
        //     result[i] += temp;
        // }
        // else if (i > 0) {
        //     result[i - 1] = result[i] + temp - 10;
        // }
        // else {
        //     printf("Overflow!!!");
        //     break;
        // }
    }
    
    for(i = DIGITS_IN_NUM - 1; i >= 0; i--) {
        if (result[i] < 10)
        {
            continue;
        }
        else if (i > 0) {
            result[i - 1] += result[i] //
        }
        
    }

}