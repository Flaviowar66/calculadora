#include <stdio.h>

int soma(int n1, int n2) {
    return n1+n2;
   
}

int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int resultado= soma(num1, num2);
    printf("%d", resultado);




}

