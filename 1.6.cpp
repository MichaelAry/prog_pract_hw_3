#include <iostream>
#include <cmath>

int enterValue();
float power(float a, int p);

int main(){
    float a{0};
    int p{0};

    std::cout<<"Enter any number: ";
    std::cin>>a;
    std::cout<<std::endl;

    p=enterValue();
    std::cout <<a<<" in power "<<p<<" = "<<power(a,p);
    return 0;
}

int enterValue(){
    float t{0};
    while (1){
        std::cout<<"Enter the natural power: ";
        std::cin>>t; 
        std::cout<<std::endl;
        if ((t>=0)&&(t==round(t))){
            break;
        }
        else{
            continue; 
        }
    }
    return t;
}

float power(float a, int p){
    float res{1};
    if(p>=1){
        res=power(a,p-1)*a;
    }
    return res;
}