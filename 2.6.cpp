#include <iostream> 
#include <cmath>

float entVal(std::string s);
unsigned int entAc();
float line_calc(float a, float b, float x, double euler_const, unsigned int e);
unsigned int fact_calc(int x);
const double euler_const=0.57721566;
float hypergeometric_line{0};

int main() {
    float res{0};
    float a{entVal("a")};
    float b(entVal("b"));
    float x(entVal("x"));
    unsigned int e{entAc()};
    res=line_calc(a, b, x, euler_const, e);
    std::cout<<"Hypergeometric line value = "<<res<<std::endl;
    return 0; 
}

float entVal(std::string s){
    float n{0};
    std::cout<<"Enter value "<<s<<": ";
    std::cin>>n;
    return n;
}

unsigned int entAc(){
    float n{0};
    do{
        std::cout<<"Enter accuracy (>0)";
        std::cin>>n;
    }while (n<=0);
    return n;
}

unsigned int fact_calc(int x){
    int res{1};
    for (int i=1;i<=x;i++){
        res*=i;
    }
    return res;
}

float line_calc(float a, float b, float x, double euler_const, unsigned int e){
    float res{1};
    float p{1};
    for (int i=1; i<=e; i++){
        for(int j=0; j<e; j++){
            if(j>=1){
                p*=(a+j)*(b+j)/(euler_const+j);}
        }
        
    }
    return res;
}