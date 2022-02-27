#include <stdio.h>
#include <math.h>

double distance(int x1, int x2, int y1, int y2);

int gcd(int x1,int x2);

int reverse(int x1);
/*
int fact(int x1);*/
// Факториал не компилируется по какой-то причине
int main()
{
    int x1,x2,y1,y2;
    scanf("%d", &x1);
    printf("%d\n", fact(x1));
}

double distance(int x1, int x2, int y1, int y2){
    return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int gcd(int x1,int x2){
    int a = 1;
    int b = 1;
    while(a!=x1+1 && a!=x2+1)
    {
        if(x1%a==0 && x2%a==0){
            b = a;
        }
        a++;
    }
    return b;
}

int reverse(int x1){
    int num = x1;
    int numcount = 1;
    while(num/10!=0){
        num=num/10;
        numcount = numcount+1;
    }
    num = x1;
    int counter = 0;
    int r[numcount];
    while(counter!=numcount){
        r[counter] = num%10;
        num = num/10;
        counter = counter + 1;
    }
    num = 0;
    counter = 0;
    while(counter!=numcount){
        num = num + r[counter];
        num = num*10;
        counter = counter + 1;
    }
    num = num/10;
    return num;

    /*int fact(int x1)
    {
        if (x1 <= 1){
            return 1;
        }
        else{
            return x1*fact(x1 - 1);
        }
    }*/
}

