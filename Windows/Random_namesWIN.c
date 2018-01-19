#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
time_t t;
/* české znaky */
int aa=160;int cz=159;int ii=161;int uu=163;int ee=130;int ie=216;int rz=253;int uk=133;int oo=162;int sz=231;int tj=156;int zs=167 ;int yy= 236;int nj =229;int NJ = 213;
int II = 214; int AA=181;int EE=144;int TJ=155;int ZS=166;int IE=183;int SZ=230;int RZ=252;int CZ=428;


int pocetradku(FILE *fp){
char znak[2]; znak[1]= '\0';
int radky;
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






printf("Tento program generuje n%chodn%c jm%cna za pomoc%c\n", aa, aa, ee, ii);
printf("slu%cov%cn%c dvou ji%c existuj%cc%cch jmen. Jm%cna generovan%c\n", cz, aa, ii, zs, ii, ii, ee, aa);
printf("t%cmto programem jsou podle autorova skromn%cho n%czoru\n", ii, ee, aa);
printf("vcelku pou%citeln%c, av%cak ne v%cdy se to povede. Pro\n", zs, aa, sz, zs);
printf("generov%cn%c n%chodn%cch jmen zadejte po%cet jmen, kter%c\n", aa, ii, aa, yy, cz, yy);
printf("chcete vygenerovat a stiskn%cte enter. (Kdy%c nezad%cte nic,\n", ie, zs, aa);
printf("vygeneruje se jen jedno. Pou%cit%c jm%cna jsou uchovan%c\n", zs, aa, ee, aa);
printf("v souboru seznam.txt, kter%c mus%c b%ct ve stejn%c slo%cce jako\n", yy, ii, yy, ee, zs);
printf("program, ale jde editovat. Kdy%c nap%c%cete 'konec', ukon%c%cte\n", zs, ii, sz, cz, ii);
printf("program. Hodn%c z%cbavy!\n", ie, aa);

/*Dostávání inputu od uživatele */
char input[20];
LOOP: scanf("%s", input);    int g;
while ( (g = getchar()) != EOF && g != '\n') { }
int pocet;
pocet = atoi(input);
if (pocet < 0){ 
printf("Toto nejde, po%cet zv%c%cen na 1.\n", cz, yy, sz);
pocet = 1;}
if (pocet == 0){
  pocet=1;
if (strcmp(input,"0") == 0){
printf("Toto nejde, po%cet zv%c%cen na 1.\n", cz, yy, sz);
}
else { 
printf("Nezadali jste %c%cslo, generuji jedno jm%cno.\n", cz, ii, ee);
}
}

printf("Seznam n%chodn%cch jmen d%clky %d:\n", pocet, aa, yy, ee);



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


