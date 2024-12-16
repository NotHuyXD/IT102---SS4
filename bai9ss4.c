#include <stdio.h>
int main(){
    int day, month, year;
    printf ("Mời nhập vào tháng: ");
    scanf("%d", &month);
    if (month < 0 || month >12){
        printf("Tháng bạn vừa nhập không hợp lệ\n");}
    printf("Mời nhập vào ngày: ");
    scanf("%d", &day);
    if ((0 < month && month <12) && (month <8)){
        if (month % 2 == 0){
            if (day<0 || day >30){
                printf("Ngày bạn vừa nhập không hợp lệ\n");

            }
        }
        else if (month % 2 !=0){
            if (day<0 || day >31){
                printf("Ngày bạn vừa nhập không hợp lệ\n");
            }
        }

    }
    else if ((0 < month && month <12) && (month >= 8)){
        if (month % 2 == 0){
            if (day<0 || day >31){
                printf("Ngày bạn vừa nhập không hợp lệ\n");

            }
        }
        else if (month % 2 !=0){
            if (day<0 || day >30){
                printf("Ngày bạn vừa nhập không hợp lệ\n");
            }
        }
        else {
            
        }

    }
    printf("Mời nhập vào năm: ");
    scanf("%d", &year);
    if (year<0 || year > 2024){
        printf("Năm bạn vừa nhập không hợp lệ\n");
    }
    if (month ==2 ){
        if ((year % 4 == 0 && year % 100 !=0) || (year %400 == 0)){
            if (day != 29){
                printf("Số ngày không hợp lệ vì đây là năm nhuận");
            }
        }
    }
    if ((0< month && month < 13) && (day>0 && day <32) && (0< year && year <2025)){
        printf("Ngày %d tháng %d Năm %d", day, month, year);
    }
    return 0;
    


}