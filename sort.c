#include<stdio.h>

int main(){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min, max;

    if(a > b){
        if(a >= c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b >= c){
            max = b;
        }
        else{
            max = c;
        }
    }

    if(a <= b){
        if(a <= c){
            min = a;
        }
        else{
            min = c;
        }
    }
    else{
        if(b <= c){
            min = b;
        }
        else{
            min = c;
        }
    }

    printf("%d\n", min);
    if(a >= min && a <= max){
        printf("%d\n", a);
    }
    else if(b >= min && b <= max){
        printf("%d\n", b);
    }
    else if(c >= min && c <= max){
        printf("%d\n", c);
    }
    printf("%d\n", max);

    printf("\n");

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);


    return 0;
}