#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Mời nhập vào các số nguyên: \n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 < num3 < num2 || num2 < num3 < num1){
        printf("Số %d nằm giữa số %d và số %d", num3, num1, num2);
    }
    else {
        printf("Số %d không nằm giữa số %d và số %d", num3, num1, num2);
    }
    return 0;
}