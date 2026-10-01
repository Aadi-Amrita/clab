#include <stdio.h>
// Function to be pointed to
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*func_ptr)(int,int);
    func_ptr=&add;
}