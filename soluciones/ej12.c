
#include <stdio.h>
int main(){
    // Resolver ejercicio 12
    int filas = 3;
    int columnas = 5; 
    int tamano_int = sizeof(int); 
    int base = 4000; 

    printf("--Ejercicio 12--\n"); 
    printf("Configuracion: m[%d][%d], Base: %d, tamano int: %d bytes\n",filas, columnas, base, tamano_int);

    int dir1 = base + (2 * columnas + 4) * tamano_int; 
    int dir2 = base + (1 * columnas + 3) * tamano_int; 
    int diferencia = dir1 - dir2;

    printf("Diferencia de m[2][4]: %d\n", dir1); 
    printf("Diferencia de m[1][3]: %d\n", dir2); 
    printf("Diferencia entre ambas: %d bytes\n", diferencia);  
    
    return 0;
}
