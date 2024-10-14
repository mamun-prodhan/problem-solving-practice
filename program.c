#include<stdio.h>

int main(){

    int n;
    scanf("%d ", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int num;
    scanf("%d", &num);
    int result = -1;

    for(int i = 0; i<n; i++){
        if(arr[i] == num){
            result = i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}