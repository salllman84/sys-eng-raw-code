#include<iostream>
#include<vector>

 int add();

 void output(){
    int sum{add()};
    std::cout<<std::endl;
    std::cout<<"sum of given numbers = "<<sum<<std::endl;
 }
