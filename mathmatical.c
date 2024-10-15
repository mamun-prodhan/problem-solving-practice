#include<stdio.h>

int main(){

    int a, b, c;
    char sign, equal;
    scanf("%d %c %d %c %d", &a, &sign, &b, &equal, &c);

    if(sign == '+'){
        if((a + b) == c){
            printf("Yes");
        }
        else {
            printf("%d", (a + b));
        }
    }
    else if(sign == '-'){
        if((a - b) == c){
            printf("Yes");
        }
        else {
            printf("%d", (a - b));
        }
    }
    else{
        if((a * b) == c){
            printf("Yes");
        }
        else {
            printf("%d", (a * b));
        }
    }

    return 0;
}