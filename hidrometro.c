/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
// Declaração de Variáveis
float leituraAN,leituraAT,numeroR,consumo,diasM;
// Captação de dados do morador
printf ("Por favor digite o número da sua residência: ");
scanf ("%f", &numeroR);
printf ("Por favor digite o numero de dias que o mês que voce está tem: ");
scanf ("%f", &diasM);
printf ("Por favor digite o valor da leitura anterior do hidrômetro: ");
scanf ("%f", &leituraAN);
printf ("Por favor digite o valor da leitura atual do hidrômetro: ");
scanf ("%f", &leituraAT);
// Formula para calcular o consumo do morador
consumo = leituraAT - leituraAN;
// Mostra o número da residencia, o consumo (caso tenha sido menor ou igual que 20), o valor da conta para esse consumo, a classificação do consumo, a média de consumo por dia.
if (consumo<=20) {
 printf ("Residencia: %.0f. \n", numeroR);
 printf ("Consumo: %.2f. \n", consumo);
 printf ("Valor da conta: %.2f reais. \n", consumo*2.50);
 printf ("O seu consumo é classificado como Moderado. \n");
 printf ("O consumo diário no mês que você está é de: %.5f. \n", consumo/diasM);
}
// Mostra o número da residencia, o consumo (caso tenha sido maior que 20), o valor da conta para esse consumo, a classificação do consumo, a média de consumo por dia.
else if (consumo <=30) {
 printf ("Residencia: %.0f. \n", numeroR);
 printf ("Consumo: %.2f. \n", consumo);
 printf ("Valor da conta: %.2f reais. \n", consumo*3.50);
 printf ("O seu consumo é classificado como Elevado. \n");
 printf ("O consumo diário no mês que você está é de: %.5f. \n", consumo/diasM);
}
// Mostra o número da residencia, o consumo (caso tenha sido maior que 30), o valor da conta para esse consumo, a classificação do consumo, a média de consumo por dia e se está havendo desperdício.
else if (consumo>30) {
 printf ("Residencia: %.0f. \n", numeroR);
 printf ("Consumo: %.2f. \n", consumo);
 printf ("Valor da conta: %.2f reais. \n", consumo*3.50);
 printf ("O seu consumo é classificado como Elevado. \n");
 printf ("O consumo diário no mês que você está é de: %.5f. \n", consumo/diasM);
 printf ("Atente-se se há desperdícios em sua residencia, seu consumo está acima de 30 metros cúbicos.");
}
}
