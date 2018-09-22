#include <stdio.h>

    int main (){

     int posicion, *contador, *contador2;

//Aqui se introduce el tamanio de los dos vectores

       printf("Introduzca el tamanio de ambos vectores--> ");
       scanf("%d", &posicion);

          int A[posicion], B[posicion];

//Aqui se llenan ambos vectores

          for(int i=0;i<posicion;i++){

                  printf("Escribe el valor del vector A (%d):    ",i+1);
                  scanf("%d", &A[i]);
          }

          for(int i=0;i<posicion;i++){

                  printf("Escribe el valor del vector B (%d):    ",i+1);
                  scanf("%d", &B[i]);
          }

//Aqui se muestra al usuario la composicion original de los dos vectores

        printf("\n\n\t Estos son los vectores originales");

         printf("\n\n\t VectorA: ");
           for(int i=0;i<posicion;i++){
               printf("  %6d  ", A[i]);
           }

        printf("\n\n\t VectorB: ");
           for(int i=0;i<posicion;i++){
               printf("  %6d  ", B[i]);
           }

//Aqui es donde se intercambian los valores de un vector con el otro utilizando punteros (la variable contador y contador2 son punteros)

         contador=B;

            for(int i=0;i<posicion;i++){
               A[i]=*contador;
               contador++;

            }

         contador2=A;

         for(int i=0;i<posicion;i++){
            B[i]=*contador2;
            contador2++;

         }

//Y finalmente se muestran las nuevas posiciones al usuario

         printf("\n\n\t Estos son los vectores invertidos con punteros");

          printf("\n\n\t VectorA: ");
            for(int i=0;i<posicion;i++){
                printf("  %6d  ", A[i]);
            }

          printf("\n\n\t VectorB: ");
            for(int i=0;i<posicion;i++){
                printf("  %6d  ", B[i]);
            }
           printf("\n\n");
                return 0;
    }
