/*
#include <iostream>
#include <vector>
#include <string>

void plusMinus(std::vector<int> arr) {
    // Complete this function
    int arr_p=0, arr_n=0,arr_0=0;
    double count=0;
    for (int arr_i = 0; arr_i < arr.size(); arr_i++){
        if (arr[arr_i]>0){arr_p=arr_p+1;}
        else if(arr[arr_i]<0){arr_n=arr_n+1;}
        else {arr_0=arr_0+1;}
    }
    count=arr_p+arr_n+arr_0;

    std::cout<<"fraction of positive number:"<<double(arr_p/count)<<std::endl;
    std::cout<<"fraction of negative number:"<<double(arr_n/count)<<std::endl;
    std::cout<<"fraction of 0:"<<float(arr_0/count)<<std::endl;
}

int main() {
    int n=1;
    std::cout<<"input n:"<<std::endl;
    std::cin >> n;
    std::vector<int> arr(n);

    std::cout<<"input the values:"<<std::endl;
    for(int arr_i = 0; arr_i < n; arr_i++){
        //std::cout<<"input the "<<arr_i<< "th value:"<<std::endl;
        std::cin >> arr[arr_i];
    }

    plusMinus(arr);
    return 0;
}*/
