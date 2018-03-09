/*
#include <vector>
#include <string>
#include <iostream>



void staircase(int n) {
    // Complete this function
    int row=1,num_spc=1,i=1;
    for (row=1;row<=n;row++){
        num_spc=n-row;
        for(i=1;i<=num_spc;i++){
            std::cout<<" ";
        }
        for(i=1;i<=row;i++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    staircase(n);
    return 0;
}
*/
