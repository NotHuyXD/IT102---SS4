#include <stdio.h>
int main(){
    int elec;
    float money;
    printf("Nhập số điện: ");
    scanf("%d", &elec);
    if (0 <= elec && elec < 50)
    {
        money = elec * 10000;
    } 
    else if (50 <= elec && elec < 100)
    {
        money = 49* 10000 + (elec-50) * 15000;
    }
    else if (100 <= elec && elec < 150)
    {
        money = 49 * 10000 + 50 * 15000 + (elec-100) * 20000;
    }
    else if (150 <= elec && elec <200)
    {
        money = 49 * 10000 + 50 * 15000 + 50 * 20000+ (elec-150) * 25000;
    }
    else if (200 <= elec)
    {
        money = 49 * 10000 + 50 * 15000 + 50* 20000+ 50 * 25000 + (elec-199) * 30000;
    }
    printf("Số tiền điện là: %f", money);
    return 0;
}