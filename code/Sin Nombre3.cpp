#include <stdio.h>

int numero;

  void insertar_numero(int num){
	numero=num;
}
 
  void mostrar(){
  	printf("El numero que ingreso es:%d",numero);
  }
  
int main()
{
            int Numero=0;
            printf("Introduzca el numero entero:");
    scanf("%d",&Numero);
    
	if (Numero>0){
       printf("Es positivo \n",Numero);
    }
    else 
       printf("Es negativo %d \n",Numero);
    
    insertar_numero(Numero);
    mostrar();
    return 0;
}
