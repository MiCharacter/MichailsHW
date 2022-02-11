#include <stdio.h>

int main()
{
    int count=2;
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    while((a%count!=0)||(b%count!=0)){
            count++;
            if(count>a){
                break;
            }
    }
    if(a%count==0&&b%count==0){
        printf("%d\n", count);
        printf("Yes");
    }
    else{
        printf("No");
    }
}
