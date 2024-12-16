#include <stdio.h>
int main(){
    int N;
    printf("Mời bạn nhập vào 1 số nguyên: ");
    scanf("%d", &N);
    if (N<0)
    {
        printf("Số bạn vừa nhập là số âm: %d", N);
    }
    else
    {
        printf("Số bạn vừa nhập là số dương: %d", N);
    }
    return 0;
    
    
}