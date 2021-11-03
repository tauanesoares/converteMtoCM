/* implemente um sistema que o usuario
digite um valor em metros(m) e converta 
para centimetros (cm)
-- Digite o valor em (m)
-- O valor convertido de X (m) é Y(cm)
*/ 

#include <stdio.h>

int main ()
{
int cm;

 float metros;

//entrada de valores - start
printf("digite um valor em metros: \n");
scanf("%f", &metros);
//entrada de valores - end

//processamento - start
cm= (metros*100);
//processamento - end

//saida - start
printf("o valor convertido de %f é %d cm", cm);





















return 0;
}
