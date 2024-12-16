#include <stdio.h>
int main(){
    int year;
    printf("Mời nhập vào năm:");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 !=0) || (year %400 == 0)){
        printf("Năm %d Là năm nhuận", year);
    }
    else{
        printf("Năm %d không phải là năm nhuận", year);
    }
return 0;
}