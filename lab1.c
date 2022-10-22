#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

void bubbleSort(int *arr, int size){
    for(int i = 0; i<size - 1; i++){
        for(int j = size - 1; j > i; j--){
            if(arr[j-1]>arr[j]){
                int tmp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main(){
    int N = 5;
    int *qwe = malloc( N * sizeof(int));
    qwe[0] = 2;
    qwe[1] = 4;
    qwe[2] = 1;
    qwe[3] = 5;
    qwe[4] = 3;
    for(int index = 0; index < N; index++){
        printf("%d ",qwe[index]);
    }
    printf("\n");
    bubbleSort(qwe,N);
    for(int index = 0; index < N; index++){
        printf("%d ",qwe[index]);
    }
    printf("\n");
    system("pause");
    return 0;
}