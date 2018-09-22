#include <stdio.h>


  int main (){
    
//Aqui se crean todas las variables que utilizaremos, incluidos los punteros

    float numero1, numero2, resta, suma;
    float *p_numero1, *p_numero2;

      printf("Ingrese el primer numero--->  ");
      scanf("%f", &numero1);
      printf("Ingrese el segundo numero--->  ");
      scanf("%f", &numero2);

        p_numero1=&numero1;
        p_numero2=&numero2;


//Aqui se efectuara la suma de ambos punteros

       suma=(*p_numero1)+(*p_numero2);
        printf("\n\n\t");
         printf("La suma de ambos numeros es---> %f",suma);

//Aqui se efectuara la resta de ambos punteros

       resta=(*p_numero1)-(*p_numero2);
       printf("\n\n\t");
        printf("La suma de ambos numeros es---> %f",resta);

//Aqui se mostrara las posiciones de ambos punteros

          printf("\n\n\t");
          printf("La posicion del primer digito es---> %p", p_numero1);
          printf("\n\n\t");
          printf("La posicion del primer digito es---> %p", p_numero2);
          printf("\n\n");

 return 0;
  }
