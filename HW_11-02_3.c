#include <stdio.h>

int main()
{
    int count=0;
    int even;
    int odd;
    while(count!=100){
            if(count%2==0){
                even=even+count;
            }
            else{
                odd=odd+count;
            }
            count++;
    }
    printf("%d\n", even);
    printf("%d\n", odd);
    return 0;
}
