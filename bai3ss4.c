#include <stdio.h>
int main(){
    int N;
    printf("Mời bạn nhập vào 1 số nguyên: ");
    scanf("%d", &N);
    if (N%3==0 && N%5!=0)
    {
        printf("%d chia hết cho 3 và không chia hết cho 5", N);
    }
    else if (N%3!=0 && N%5==0)
    {
        printf("%d chia hết cho 5 và không chia hết cho 3", N);
    }
    else if (N%3==0 && N%5==0)
    {
        printf("%d chia hết cho cả 3 và 5", N);
    }
    else {
        printf("%d không chia hết cho cả 3 và 5", N);
    }
    return 0;
}
    
   
    