#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    while(count%3==0){
        count=count/3;
    }
    if(count==1){
        printf("Yes");
    }
    else{
        printf("No");
    }
}
