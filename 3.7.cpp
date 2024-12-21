#include <iostream>
#include <cmath>

void funcVal();

int main(){
    funcVal();
    return 0;
}

void funcVal(){
    float sum{0};
    float x{0.5};
    while (x<=2){
        sum=0;
        for(int n{1};n<1000;n++){
            sum+=pow((x-1),n)/(n*pow(x,n));
        }
        std::cout<<"x="<<x<<"   "<<" res="<<sum/logl(10)<<std::endl;
        x+=0.05;

    }    
}
