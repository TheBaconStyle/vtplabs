#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N = 5;
int STRLEN = 20;

void bubble_sort(int *arr, int size){
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

void str_bubble_sort(char strings[N][STRLEN], int size, int len){
    for(int i = 0; i<size - 1; i++){
        for(int j = size - 1; j > i; j--){
            int res = strcmp(strings[j-1],strings[j]);
            char tmp[len];
            if(res>0){
                strcpy(tmp, strings[j-1]);
                strcpy(strings[j-1],strings[j]);
                strcpy(strings[j],tmp);
                continue;
            }
        }
    }
}

int main(){
    char strings[N][STRLEN];
    strcpy(strings[0],"Tristan");
    strcpy(strings[1],"Irina");
    strcpy(strings[2],"Mariya");
    strcpy(strings[3],"Pavel");
    strcpy(strings[4],"Anatoliy");
    int qwe[N];
    qwe[0] = 2;
    qwe[1] = 4;
    qwe[2] = 1;
    qwe[3] = 5;
    qwe[4] = 3;
    for(int index = 0; index < N; index++){
        printf("%d ",qwe[index]);
        printf("%s\n",strings[index]);
    }
    printf("\n");
    bubble_sort(qwe, N);
    str_bubble_sort(strings, N, STRLEN);
    for(int index = 0; index < N; index++){
        printf("%d ",qwe[index]);
        printf("%s\n",strings[index]);
    }
    printf("\n");
    system("pause");
    return 0;
}