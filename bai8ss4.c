#include <stdio.h>
int main(){
    float a, b, c;
    printf("Mời nhập vào 3 cạnh của tam giác: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a+b>c && a+c>b && b+c>c){
        printf("3 cạnh a,b,c là 3 cạnh của 1 tam giác");
    }
    else {
        printf("3 cạnh a,b,c không là 3 cạnh của 1 tam giác");
    }
    return 0;
}