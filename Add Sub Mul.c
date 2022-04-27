#include<stdio.h>

int main() {
    int a,b;
    int jog,biyog,gun;
    scanf("%d %d",&a,&b);
    jog=a+b;
    biyog=a-b;
    gun=a*b;
//Logic Implement
    if(jog>biyog&&jog>gun)
    {
        printf("%d", jog);
    }
    else if(biyog>jog&&biyog>gun)
    {
        printf("%d", biyog);
    }
    else if(gun>jog&&gun>biyog)
    {
        printf("%d", gun);
    }
    else{
        printf("%d", jog);
    }
        return 0;
}
