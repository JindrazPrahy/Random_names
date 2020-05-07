#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
time_t t;

int pocetradku(FILE *fp){
char znak[2]; znak[1]= '\0';
int radky;
radky = 0;
while (1) {
znak[0] = getc(fp);
if (znak[0] == '\n'){radky =radky +1;}
if (znak[0] == EOF){break;}
}
return radky;
}



int main () {
char znak[2]; znak[1]= '\0';
char slovo[100];
int p;
FILE *fa;FILE *fp;

fp = fopen("seznam.txt", "r");
p = pocetradku(fp);
fclose(fp);
fa = fopen("seznam.txt", "r");


int i; int z;
for (i=0;i != p+1;i++ ){
  z = i;
}p = z;
char seznam[p][100]; /*  tvorba seznamu stringů délky délky souboru */


for (i=0;i != p;i++ ){
fgets(slovo,80,fa);
strcpy(seznam[i], slovo);
} /*přiřazování slov do seznam*/

fclose(fa);


printf("Tento program generuje náhodná jména za pomocí\n");
printf("slučování dvou již existujících jmen. Jména generovaná\n");
printf("tímto programem jsou podle autorova skromného názoru\n");
printf("vcelku použitelná, avšak ne vždy se to povede. Pro\n");
printf("generování náhodných jmen zadejte počet jmen, který\n");
printf("chcete vygenerovat a stiskněte enter. (Když nezadáte nic,\n");
printf("vygeneruje se jen jedno. Použitá jména na generování jsou uchovaná\n");
printf("v souboru seznam.txt, který musí být ve stejné složce jako\n");
printf("program, ale jde editovat. Když napíšete 'konec', ukončíte\n");
printf("program. Hodně zábavy!\n");

/*Dostávání inputu od uživatele */
char input[20];
LOOP: scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
int pocet;
if ( !strcmp(input,"konec") ){
	return 0;
}
pocet = atoi(input);
if (pocet < 0){
	printf("Toto nejde, počet zvýšen na 1.\n");
	pocet = 1;}
if (pocet == 0){
	pocet=1;
if (strcmp(input,"0") == 0){
	printf("Toto nejde, počet zvýšen na 1.\n");
}
else {
printf("Nezadali jste číslo, generuji jedno jméno.\n");
}
}

printf("Seznam náhodných jmen délky %d:\n", pocet);



srand((unsigned) time(&t)); /* Aby náhodný generátor fungoval náhodně  */
 /*  Mergování slov */


int a;
int r1,r2;

for (a=0; a <pocet; a++){
r1 = rand() % p;
r2 = rand() % p;
while (r2==r1){
 r2 = rand() % p;
}
int len;
char prvni[100]; char druhy[100]; char vysledek[100];
strcpy(prvni,seznam[r1]);
strcpy(druhy,seznam[r2]);
/* proměna prvního */
len = strlen(prvni)-1;	
len =1+ (len / (rand() % 2 + 2));
prvni[len] = '\0';
strcat(vysledek, prvni);

/*  Proměna druhého  */
len = strlen(druhy)-1;	
len =1+ (len / (rand() % 2 + 2));
len = strlen(druhy)-len;
char *dru; dru = druhy + len;
strcat(vysledek, dru);
printf("%s",vysledek);
vysledek[0] = '\0'; 

}

goto LOOP;
return 0;
}


