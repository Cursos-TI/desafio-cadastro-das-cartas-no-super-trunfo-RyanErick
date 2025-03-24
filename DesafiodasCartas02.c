#include  <stdio.h>

int main () {
char estado [20] = "A";
char estado_02[20]= "B";
char Codigo [10]= "A01";
char codigo_02[10]= "B02";
char cidade[10]= "Manaus" ; 
char cidade_02[10]= "Salvador";
float populacao= 2063689 ; 
float populacao_02 = 2568928 ;
float area  =  11401092; 
float area_02 = 693442 ;
float pib =  103.281436; 
float pib_02= 63.526092;
int PontosTuristicos = 35; 
int PontosTuristicos_02 = 55;
float densidade_populacional = populacao / area;
float densidade_populacional_02 = populacao_02 / area_02;
float PIBperCapita = populacao / pib;
float PIBperCapita_02 = populacao / pib_02;

printf ("Desafio das cartas \n");
printf ("Escolha a sua!  \n ");
printf ("A01 ou A02 \n");
scanf ("%s", &Codigo ) ;
printf("Sua carta é a %s\n ", Codigo); 
printf("Carta A01\n");
printf("Estado: Amazonas\n");
printf("Codigo: %s\n", Codigo);
printf("Cidade: %s\n", cidade);
printf("População: %.1f milhões \n", populacao);
printf("Area: %.3f km²\n", area);
printf("Pib: %.1f bilhões \n",pib);
printf("Pontos turisticos: %d\n ", PontosTuristicos);
printf("Densidade Populacional: %.3f hab/km\n",densidade_populacional);
printf("PIB per Capita: %.2f reais\n\n", PIBperCapita);

printf("Carta A02\n");
printf("Estado: Bahia\n");
printf("Codigo: %s\n", codigo_02);
printf("Cidade: %s\n", cidade_02);
printf("População: %3.f milhões \n", populacao_02);
printf("Area: %.3f km²\n", area_02);
printf("Pib: %.1f bilhões \n",pib_02);
printf("Pontos turisticos: %d\n ", PontosTuristicos_02);
printf("Densidade Populaciona: %.3f hab/km\n ",densidade_populacional_02);
printf("PIB per Capita: %.2f reais\n\n", PIBperCapita_02);


}
