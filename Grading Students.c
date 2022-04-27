#include <math.h>
#include <stdio.h>
#include <stdbool.h>
int main(){
int n;
scanf("%d",&n);
// Logic Implement
for(int a0 = 0; a0 < n; a0++){
int grade;
scanf("%d",&grade);
int x = (grade+4)/5;
x *= 5;
if(x>=40 && x-grade<3)grade=x;
printf("%d\n",grade);
}
return 0;
}
