#include <iostream>

using namespace std;
#define PI 3.142
class CCircle{
int r;
public:
    void set_values (int);

    float area (void){return(PI*r*r);}

    float circumference(void){return(PI*(r*2));}
    };
    void CCircle::set_values(int x){
        r=x;
    }
    int main(){
    CCircle cir;
    cir.set_values(7);
    cout<<"area:"<<cir.area()<<endl;
    cout<<"circumference:"<<cir.circumference();
    }

