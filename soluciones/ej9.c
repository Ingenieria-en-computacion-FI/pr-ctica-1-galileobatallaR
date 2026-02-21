#include <stdio.h>
int main(){
    // Resolver ejercicio 9
    int a[5] = {10, 20, 30, 40, 50};
    printf("Direccion &a[-1]: %p\n", (void*)&a[-1]);
    printf("Direccion &a[5]: %p\n", (void*)&a[5]);
        
    return 0;
}
