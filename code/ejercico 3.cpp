#include <stdio.h>

int numero1,numero2,numero3;

  void insertar(int num1,int num2, int num3){
	numero1=num1;
	numero2=num2;
	numero3=num3;
}
 
  void mostrar(){
  	printf("\nEl primer numero que ingreso es:%d",numero1);
  	printf("\nEl segundo numero numero que ingreso es:%d",numero2);
  	printf("\nEl tercer numero que ingreso es:%d",numero3);
  }
  
int main()
{
            
	int a,b,c,max,min;
	
	printf("Ingrese tres numeros:");
	scanf("%d" "%d" "%d",&a,&b,&c);

	if(a>b)
	{
		if(a>c)
		{
			max=a;
		}
		else 
		{
			max=c;
		}
	}
	
	else 
		{
			if(b>c)
			{
				max=b;
			}
				else
				{
					max=c;
				}
		}
		
		printf("El mayor de los 3 numeros es %i\n",max);

    
   insertar(a,b,c);
   mostrar();
    return 0;
}
