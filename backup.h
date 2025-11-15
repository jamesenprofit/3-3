#include <stdio.h>
#include <string.h>
#include <backup.h>

int test()

{
    FILE *quelle, *ziel;
    char dateiname[FILENAME_MAX];
    char c;
    printf("Name der Quelldatei:");
    fegts(dateiname,FILENAME_MAX,stdin);
    dateiname[strlen(dateiname)-1] = '\0';
    quelle = fopen(dateiname,"r");

        if (quelle == NULL)
            {
                printf("Fehler beim Öffnen der Datei\n");
            }
        else
            {
                printf("Name der Zieldatei:");
                fgets(dateiname,FILENAME_MAX,stdin);
                dateiname[strlen(dateiname)-1] = '\0';
                ziel = fopen(dateiname,"w");
                while ((c = fgetc(quelle))!=EOF)
                    {
                    printf("%c",c);
                        fputc(c,ziel);
                    }
                
            } 

        fclose(quelle);
        fclose(ziel);
        return 0;    
}



