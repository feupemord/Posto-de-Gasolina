#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){ 

float gasg,gasa,gasd;
int litro;
int resul, ded;
int i, opc;
resul = 0;
litro = 0;
gasg = 3.99;
gasa = 2.99;
gasd = 4.67;
opc = 0;


  for (i=0;i<2; i++);{
    do{
     system("cls");
      printf("\t\nPOSTO DE GASOLINA\n\n");
      printf("\nUtilize a qualquer momento [4] para voltar ao comeco\n");
      printf("\nGASOLINA[1]\nALCOOL[2]\nDISEL[3]\n Resposta: ");
      scanf("%i",&opc);
      
       if (opc == 1){
         printf("\n Preco por litro: %2.f", gasg);
         printf("\nQuantos litros vai abastecer: ");
         scanf("%i", &litro);
         resul = (gasg * litro);
         printf("\nPreco: %i\n", resul);
         printf("\nPagar [1]\nCancelar [2]: ");
         scanf("%i",&ded);
         
            if(ded == 1){
             printf("\n Pago com sucesso\n"); 
             printf("\n...");
             exit(1);

}
if(ded == 2){

do{
	system("cls");
printf("\ncancelando...\n");
	system("cls");
 
}while(i);
}
}
  if (opc == 2){
         printf("\n Preco por litro: %2.f", gasa);
         printf("\nQuantos litros vai abastecer: ");
         scanf("%i", &litro);
         resul = (gasa * litro);
         printf("\nPreco: %i\n", resul);
         printf("\nPagar [1]\nCancelar [2]: ");
         scanf("%i",&ded);
         
            if(ded == 1){
             printf("\n Pago com sucesso\n"); 
             printf("\n...");
             exit(1);

}
if(ded == 2){

do{
	system("cls");
printf("\ncancelando...\n");
	system("cls");
 
}while(i);
}
}
  if (opc == 3){
         printf("\n Preco por litro: %2.f", gasd);
         printf("\nQuantos litros vai abastecer: ");
         scanf("%i", &litro);
         resul = (gasd * litro);
         printf("\nPreco: %i\n", resul);
         printf("\nPagar [1]\nCancelar [2]: ");
         scanf("%i",&ded);
         
            if(ded == 1){
             printf("\n Pago com sucesso\n"); 
             printf("\n...");
             exit(1);

}
}
if(ded == 2){
do{
	system("cls");
printf("\ncancelando...\n");
	system("cls");
 
}while(i);
	
}




}while(i);



return 0;
}
}


