#include <stdio.h>
int main(){
    int N;
    printf("Mời bạn nhập vào 1 số nguyên: ");
    scanf("%d", &N);
    if (N%2==0)
    {
        printf("N là số chẵn: %d", N);
    }
    else
    {
        printf("N là số lẻ: %d", N);
    }
    return 0;
}
    