/*
#include <iostream>
#include <vector>
#include <string>

int main(){
    long vec[5];
    long long max=0,min=0,sum=0,temp=0;
    int len=5,i=1;
//    long long test=1000000000;
    for(i=0;i<len;i++){
        std::cin>> vec[i];
    }
    for (auto& n : vec){
        sum += n;}
    min=sum;
    for (i=0;i<len;i++){
        temp=sum-vec[i];
//        std::cout<<temp<<" "<<sum<<" "<<min<<" "<<max<<std::endl;
        if(temp>=max){max=temp;}
        if(temp<=min){min=temp;}
    }

//    1000000000 1000000000 1000000000 1000000000 1
    std::cout<<min<<" "<<max;

}
*/
