#include <stdio.h>

int main()

{

char test;
FILE*datei;
datei = fopen("waferprotokoll.csv","r");
if (datei==NULL)
{
    printf("Fehler beim Öffnen der Datei\n");
}
else
{
    printf("Datei wurde geöffnet\n");
    printf("Test:");
    fgets(test);
    
}
fclose(datei);

return 0;

}
