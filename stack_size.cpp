#include <cstdio>
#include <array>
#include <iostream>

int print_top_stack(){
    char c='t';
    printf("%p, ", &c);
    return(1);
}

void grow_stack(){
    std::array<char, 1000> chars;
    print_top_stack();
    grow_stack();
}

int main() {
    grow_stack();
//    int end = 0x7ffee97a6eef,start=0x7ffee9f856cf;
//    std::cout<<start-end<<std::endl;
}
/*output
 * 0x7ffee9f856cf......0x7ffee97a6eef
 * so size is 8251360
 */
