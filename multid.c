#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,z,s,schiff[10][10];
    for (z=0;z<10;z++)
    {
        for (s=0;s<10;s++)
        {
            schiff[z][s]=0;
        }
    i=10;    
    }    
    //i=0;
    do
    {
        z=rand()%10;
        s=rand()%10;
        if (schiff[z][s]==0)
        {
            schiff[z][s]=1;
            i++;
        }
            
    } 
    while (i<10);
    i=10;
    while(i)
    {
        printf("Zeile   (0-9) = ");
        scanf("%i", &z);
        printf("Spalte  (0-9) = ");
        scanf("%i",&s);
        if (schiff[z][s]==0)
        {
            printf("Wasser !\n");
        }
        else
        {
            printf("Treffer !\n");
            i++;
        }
        
    }
    
}