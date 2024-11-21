#include <iostream> 
#include <cmath>

void enterFunc(float af, int nf);
float a{0}; int n{0};

int main() {
    enterFunc(0,0);
    std::cout<<a;std::cout<<n;
    return 0; 
}

void enterFunc(float af, int nf) {
    while(1)/*&&(IsInteger(n))*/{
        std::cout << "Please enter a number: ";
        std::cin>>af; std::cout<<std::endl;
        std::cout << "Please enter a natural power: ";
        std::cin>>nf; std::cout<<std::endl;
        if ((nf>=0)&&(nf==round(nf))){break;}
        else {continue;}
    }
    a=af;
    n=nf;
}