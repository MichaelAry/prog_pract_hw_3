#include <iostream>
#include <cmath>
float ta{0};
int tn{0}; 

void enterValue(float af, int nf);

int main(){
    float a{0};
    int n{0};
    a=ta;
    n=tn;

    enterValue(0,0);
    a=ta;
    n=tn;

    return 0;
}

void enterValue(float af, int nf){
    while (1){
        std::cout<<"Enter the number: ";
        std::cin>>af; 
        std::cout<<std::endl;
        ta=af;
        
        std::cout<<"Enter the natural power: ";
        std::cin>>nf; 
        std::cout<<std::endl;     
        tn=nf;

        if ((nf>=0)&&(nf==round(nf))){
            break;
        }
        else{
            continue; 
        }
    }
}