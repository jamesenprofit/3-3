#include <stdio.h>

int main()

{
int a , b , z , y , x , t;
printf("Erste Eingabe:");
scanf("%i",&a);
printf("Zweite Eingabe:");
scanf("%i",&b);
z = a + b;
y = a - b;
x = a * b;
t = a / b;
printf("%i + %i = %i\n",a,b,z);
printf("%i - %i = %i\n",a,b,y);
printf("%i * %i = %i\n",a,b,x);
printf("%i / %i = %i\n",a,b,t);

return 0;

}