/*
#include <iostream>
#include <vector>
#include <string>

std::vector<int> get_line(std::vector<int> V){
    int row=V[0]-1;
    std::vector<int> line;

    for(int i=row*4+1;i<=row*4+4;i++){
        line.push_back(V[i]);}

    return line;
}

std::vector<int> read_vec(){
    int input;
    std::vector<int> V;
    for(int i=0;i<=16;i++){
        std::cin>>input;
        V.push_back(input);
    }
    return V;
}
void compare(std::vector<int> V,std::vector<int> V2,int count_case){
    int count=0,res=0,temp=0;
    for(int i=0;i<4;i++){
        temp=V[i];
        for(int j=0;j<4;j++){
            if(V2[j]==temp){
                count++;
                res=temp;
            }
        }
    }

    if(count==1){
        std::cout<<std::endl<<"Case #"<<count_case<<": "<<res<<std::endl;
    }
    else if(count==0){
        std::cout<<"Case #"<<count_case<<": "<<"Volunteer cheated!"<<std::endl;
    }
    else{
        std::cout<<"Case #"<<count_case<<": "<<"Bad magician!"<<std::endl;
    }

}
int main(){
    std::vector<int> V,V2;
    std::vector<int> line,line2;
    int num_case;
    std::cin>>num_case;
    for(int j=1;j<=num_case;j++){
        V=read_vec();
        line=get_line(V);
        V2=read_vec();
        line2=get_line(V2);
        compare(line,line2,j) ;
    }

}

/*
1
2
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
3
1 2 5 4
3 11 6 15
9 10 7 12
13 14 8 16
 *

Input

3
2
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
3
1 2 5 4
3 11 6 15
9 10 7 12
13 14 8 16
2
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
2
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
2
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
3
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16


Output

Case #1: 7
Case #2: Bad magician!
Case #3: Volunteer cheated!
*/
