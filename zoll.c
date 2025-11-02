#include <stdio.h>

int main()
{

double cm;
printf("\t  Zentimeter  -  Zoll\n");
printf("\t=======================\n");
for (cm=0.5; cm<=10; cm+=0.5)
{
    printf("\t%4.1lf cm = %5.2lf Zoll\n",cm,cm/2.54);
}
return 0;





}