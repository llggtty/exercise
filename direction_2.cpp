/*
#include <cstdio>
#include <array>
#include <iostream>



void func2(){
    std::int8_t v2=8;
    printf("func2: %p\n", &v2);
}

void func1(){
    std::int8_t v1=5;
    printf("func1: %p\n", &v1);
    func2();
}

int main() {
    func1();
}
*/
/*output:
 * func1: 0x7ffee1a1cadf
 * func2: 0x7ffee1a1cabf
 * func2 is called later, the variable is put in front
*/

