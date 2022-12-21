#include <iostream>
#include <cmath>
using namespace std;

double f(double y){
    return pow(y, 2)* cos(y)+1;
}

int main() {
    double a=0, b=0, c=0, x=0, err=0;
    do{
        cout<<"inserire estremi"<<endl;
        cin>>a>>b;
    }while(f(a)*f(b)>=0);
    if(f(a)<f(b)){
        c=a;
        a=b;
        b=c;
    }
    do{
        x=(a+b)/2;
        if(f(x)==0){
            break;
        }else if(f(x)<0){
            b=x;
        }else{
            a=x;
        }
        err=abs((b-a)/2);
    }while(err>=0.000001);
    int r=x*10000;
    double l=(float)r/10000;
    cout<<l<<endl;
    return 0;
}
