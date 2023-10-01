#include <stdio.h>

int global_var = 7; // 3 fun() = 10

int fun() {
    return global_var++;
}
int main() {
    int a = 3; // 3
    a = (fun(), fun(), 4, fun(), 5, global_var); 
    printf("%d", a);
    
    return 0;
}