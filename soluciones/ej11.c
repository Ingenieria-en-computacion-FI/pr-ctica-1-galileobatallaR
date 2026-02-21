#include <stdio.h>
int main(){
    // Resolver ejercicio 11
double a[3]; 

printf("--Ejercicio 11--\n");
printf("tamaño del tipo: %zu bytes\n", sizeof(double));  
for (int i=0; i < 3; i++){ 
    printf("&a[%d] = %p (distancia desde el inicio: %ld bytes)\n", i, (void*)&a[i], (char*)&a[i] - (char*)&a[0]); 
}
    printf("Interpretacion: la diferencia entre &a[0] y &a[1] es 8,\n"); 
    printf("entonces el tipo de dato es de 8 bytes, como un double o un long.\n"); 
    
        return 0;
}
