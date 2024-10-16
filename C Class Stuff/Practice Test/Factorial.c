#include <stdio.h>
int compute(int n){
    int total = 1;
    int i = 0;
    
    if(n == 0 || n == 1){
        total = 1;
    }else if(n < 0){
        puts("undefined");
    }else{ 
        for(i = 0; i < n; i++){
            total = (n-i)*total;
        }
    printf("%d factorial is %d\n",n, total);
    }
}

int main(void){
    int n = 0;
    puts("please input a number");
    scanf("%d/n", &n);
    compute(n);
}