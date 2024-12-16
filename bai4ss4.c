#include <stdio.h>
int main(){
    int month;
    printf("Mời bạn nhập tháng: ");
    scanf("%d",  &month);
    if (month < 1 || month >12)
    {
        
        printf("Tháng bạn vừa nhập ko hợp lệ.");
    }
    else if (0< month && month < 8)
    {
        if (month % 2==0)
        {
            printf("Tháng %d có 30 ngày.", month);
        }
        else
        {
            printf("Tháng %d có 31 ngày.", month);
        }
        
    }
    else if (month >=8)
    {
        if (month %2==0){
            printf("Tháng %d có 31 ngày.", month);
        }
        else{
            printf("Tháng %d có 30 ngày.", month);
        }
    }
    return 0;
    
}