#include <stdio.h>

  int main(){

//Aqui se declaran las variables, se instancia el vector y se llenan

      int posicion, *contador;

          printf("Introduzca el tamanio del vector--> ");
          scanf("%d", &posicion);

      int A[posicion];

              for(int i=0;i<posicion;i++){
                    printf("Escribe el valor del vector (%d):  ",i+1);
                    scanf("%d", &A[i]);
                 }


//Aqui se le asigna el espacio en memoria del vector en su ultima posicion al puntero

           contador=&A[posicion-1];

//Finalmente se muestra al usuario

                 printf("\n\n\t Este es el vector con los valores invertidos");

                  printf("\n\n\t Vector Invertido: ");
                    for(int i=0;i<posicion;i++){
                        printf(" %i\t", *contador);
                        contador--;
                    }

                        printf("\n\n");

                         return 0;

  }
