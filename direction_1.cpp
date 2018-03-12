/*
#include <cstdio>
#include <array>
#include <iostream>

void func(){
    std::int8_t v1=5,v2=6;
    printf("%p\t %p\n", &v1,&v2);
}

int main(){
    func();
/* output 0x7ffeec70aadf	 0x7ffeec70aade
 * so the variable comes later is added in front of the stack
 * so stack growing towards zero
 * /
}
*/
