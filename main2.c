#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100 // Max. Anzahl Zeilen
#define N 256 // Max. Anzahl der Bytes für eine Zeile

int backup();
int lesen();
void replace_char(char *string, char replace, char new);

typedef struct datensatz
{
    char chips_ID[37];
    char chipID[37];
    int sollbit[296];
    int bitresult[296];
    int datavalidist[37];
    int datavalidresult[37];

}data1;

int main()

{

backup();
lesen();
void replace_char(char *string, char replace, char new);




return 0;

}

void replace_char(char *string, char replace, char new)

{
    int slen = strlen(string);
    for (int i = 0; i < slen; i++)
    {
        if (string[i] == replace)
        {
            string[i] = new;
        }
        
    }
    
}

int backup()

{
    FILE *quelle, *ziel;
    char dateiname[FILENAME_MAX];
    char c;
    
    //printf("Name der Quelldatei:");
    //fgets(dateiname,FILENAME_MAX,stdin);
    //dateiname[strlen(dateiname)-1] = '\0';
    quelle = fopen("LS3-3.csv","r");

        if (quelle == NULL)
            {
                printf("Fehler beim oeffnen der Datei\n");
            }
        else
            {
                
                //printf("Name der Zieldatei:");
                //fgets(dateiname,FILENAME_MAX,stdin);
                //dateiname[strlen(dateiname)-1] = '\0';
                ziel = fopen("test.csv","w");
                while ((c = fgetc(quelle))!=EOF)
                    {
                    //printf("%c",c);
                        fputc(c,ziel);
                    }
                
            } 

        fclose(quelle);
        fclose(ziel);
        return 0;    
}

int lesen()
{
    FILE *datei;
    char Chips_ID[FILENAME_MAX];
    int c,i;
    char a = ';';
    char b = ':';
    char zeile[100];
    char wort[50];
     
    datei = fopen("Protokoll01.csv","r");
          
    if (datei == NULL)
    {
        printf("Fehler");
            
    }

    else         
    {
        struct datensatz wafer, chips[37];
        
            
        
        

        /*
        fseek(datei, 0, SEEK_SET);
        fgets(Chips_ID,9,datei);
        printf("%s: ", Chips_ID);

        fgets(Chips_ID,8,datei);
        printf("%s: \n", Chips_ID);
        
        fseek(datei,206,SEEK_SET);
        fgets(Chips_ID,1,datei);
        printf("%s",Chips_ID);
            
        
        printf("%s\n",Chips_ID);
        */
        while ((c = fgetc(datei))!=EOF)
        {                   
            fgets(Chips_ID,sizeof("False %s"),datei);
            printf("%s",Chips_ID);
            if (strcmp(Chips_ID,"False") )
            {
                printf("=");
                
            }
            
            //fputc(a,datei);
            //printf("%c",c);
                       
        }    
        //printf("%c\n",c);
        
        
        
        
     return 0;
    }
    while (!feof(datei));
        

        
        
       
    fclose(datei);
    return 0;

}



