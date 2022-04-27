#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    //Logic Implement
    if ((a == b && b != c) || (b == c && c != a) || (c == a && a != b))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
