#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define M 100 // Max. Anzahl Zeilen
#define N 256 // Max. Anzahl der Bytes für eine Zeile

int backup();
int lesen();
struct datensatz
{
    char chips_ID[37];
    char chipID[37];
    int DQ7[37];
    int DQ6[37];
    int DQ5[37];
    int DQ4[37];
    int DQ3[37];
    int DQ2[37];
    int DQ1[37];
    int DQ0[37];
    int datavalidist[37];
    int datavalidresult[37];
    char listsID[26]

};

int main()

{

backup();
lesen();

return 0;

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
    int c,i,feld;
    char a = ';';
    char b = ':';
    
    datei = fopen("Protokoll01.csv","r");
          
    if (datei == NULL)
    {
        printf("Fehler");
            
    }

    else         
    {
        struct datensatz wafer[37];
                      
        fseek(datei, 0, SEEK_SET);
        fgets(Chips_ID,9,datei);
        strcpy(wafer[0].listsID, Chips_ID);
        printf("%s  ",wafer[0].listsID);

        fseek(datei,9,SEEK_SET);
        fgets(Chips_ID,7,datei);
        strcpy(wafer[1].listsID,Chips_ID);
        printf("%s  ",wafer[1].listsID);

        fseek(datei,16,SEEK_SET);
        fgets(Chips_ID,7,datei);
        strcpy(wafer[2].listsID,Chips_ID);
        printf("%s  ",wafer[2].listsID);

        fseek(datei,34,SEEK_SET);
        fgets(Chips_ID,13,datei);
        strcpy(wafer[3].listsID,Chips_ID);
        printf("%s  ",wafer[3].listsID);

        fseek(datei,47,SEEK_SET);
        fgets(Chips_ID,14,datei);
        strcpy(wafer[4].listsID,Chips_ID);
        printf("%s  ",wafer[4].listsID);

        fseek(datei,61,SEEK_SET);
        fgets(Chips_ID,7,datei);
        strcpy(wafer[5].listsID,Chips_ID);
        printf("%s  ",wafer[5].listsID);

        strcpy(wafer[6].listsID, "Result:");
        printf("%s  \n\n",wafer[6].listsID);
                
        fseek(datei,208,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[0].chips_ID,Chips_ID);
        printf("%s  \n",wafer[0].chips_ID);

        fseek(datei,369,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[1].chips_ID,Chips_ID);
        printf("%s  \n",wafer[1].chips_ID);

        fseek(datei,530,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[2].chips_ID,Chips_ID);
        printf("%s  \n",wafer[2].chips_ID);
        
        fseek(datei,691,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[3].chips_ID,Chips_ID);
        printf("%s  \n",wafer[3].chips_ID);

        fseek(datei,852,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[4].chips_ID,Chips_ID);
        printf("%s  \n",wafer[4].chips_ID);

        fseek(datei,1013,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[5].chips_ID,Chips_ID);
        printf("%s  \n",wafer[5].chips_ID);

        fseek(datei,1174,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[6].chips_ID,Chips_ID);
        printf("%s  \n",wafer[6].chips_ID);

        fseek(datei,1335,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[7].chips_ID,Chips_ID);
        printf("%s  \n",wafer[7].chips_ID);

        fseek(datei,1496,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[8].chips_ID,Chips_ID);
        printf("%s  \n",wafer[8].chips_ID);

        fseek(datei,1656,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[8].chips_ID,Chips_ID);
        printf("%s  \n",wafer[8].chips_ID);

        fseek(datei,1817,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[9].chips_ID,Chips_ID);
        printf("%s  \n",wafer[9].chips_ID);

        fseek(datei,1978,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[10].chips_ID,Chips_ID);
        printf("%s  \n",wafer[10].chips_ID);

        fseek(datei,2139,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[11].chips_ID,Chips_ID);
        printf("%s  \n",wafer[11].chips_ID);

        fseek(datei,2300,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[12].chips_ID,Chips_ID);
        printf("%s  \n",wafer[12].chips_ID);

        fseek(datei,2461,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[13].chips_ID,Chips_ID);
        printf("%s  \n",wafer[13].chips_ID);

        fseek(datei,2622,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[14].chips_ID,Chips_ID);
        printf("%s  \n",wafer[14].chips_ID);

        fseek(datei,2783,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[15].chips_ID,Chips_ID);
        printf("%s  \n",wafer[15].chips_ID);

        fseek(datei,2944,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[16].chips_ID,Chips_ID);
        printf("%s  \n",wafer[16].chips_ID);

        fseek(datei,3105,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[17].chips_ID,Chips_ID);
        printf("%s  \n",wafer[17].chips_ID);

        fseek(datei,3266,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[18].chips_ID,Chips_ID);
        printf("%s  \n",wafer[18].chips_ID);

        fseek(datei,3427,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[19].chips_ID,Chips_ID);
        printf("%s  \n",wafer[19].chips_ID);

        fseek(datei,3588,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[20].chips_ID,Chips_ID);
        printf("%s  \n",wafer[20].chips_ID);

        fseek(datei,3749,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[21].chips_ID,Chips_ID);
        printf("%s  \n",wafer[21].chips_ID);

        fseek(datei,3909,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[22].chips_ID,Chips_ID);
        printf("%s  \n",wafer[22].chips_ID);

        fseek(datei,4070,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[23].chips_ID,Chips_ID);
        printf("%s  \n",wafer[23].chips_ID);

        fseek(datei,4231,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[24].chips_ID,Chips_ID);
        printf("%s  \n",wafer[24].chips_ID);

        fseek(datei,4393,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[25].chips_ID,Chips_ID);
        printf("%s  \n",wafer[25].chips_ID);

        fseek(datei,4554,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[26].chips_ID,Chips_ID);
        printf("%s  \n",wafer[26].chips_ID);

        fseek(datei,4715,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[27].chips_ID,Chips_ID);
        printf("%s  \n",wafer[27].chips_ID);

        fseek(datei,4877,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[28].chips_ID,Chips_ID);
        printf("%s  \n",wafer[28].chips_ID);

        fseek(datei,5038,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[29].chips_ID,Chips_ID);
        printf("%s  \n",wafer[29].chips_ID);

        fseek(datei,5199,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[30].chips_ID,Chips_ID);
        printf("%s  \n",wafer[30].chips_ID);

        fseek(datei,5360,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[31].chips_ID,Chips_ID);
        printf("%s  \n",wafer[31].chips_ID);

        fseek(datei,5521,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[32].chips_ID,Chips_ID);
        printf("%s  \n",wafer[32].chips_ID);

        fseek(datei,5682,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[33].chips_ID,Chips_ID);
        printf("%s  \n",wafer[33].chips_ID);

        fseek(datei,5843,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[34].chips_ID,Chips_ID);
        printf("%s  \n",wafer[34].chips_ID);

        fseek(datei,6004,SEEK_SET);
        fgets(Chips_ID,3,datei);
        strcpy(wafer[35].chips_ID,Chips_ID);
        printf("%s  \n\n",wafer[35].chips_ID);

        

        strcpy(wafer[24].listsID,"Chips High Qualtity:");
        strcpy(wafer[25].listsID,"Chips Low   Quality:");
        strcpy(wafer[26].listsID,"Chips        Retire:");
        
        printf("%s  \n",wafer[24].listsID);
        printf("%s   \n",wafer[25].listsID);
        printf("%s  \n",wafer[26].listsID);          
        
        
        
     return 0;
    }
    while (!feof(datei));
        

        
        
       
    fclose(datei);
    return 0;

}



