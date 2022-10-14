#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float h,k,r,s,d,cl;
    cout<<"enter coordinates of centre of circle";
    cin>>h>>k;
    cout<<"enter radius of circle";
    cin>>r;
    cout<<"line is x=s enter value of s ";
    cin>>s;
    d=abs(h-s);
    cl=sqrt((r*r)-(d*d));
    cout<<"length of chord is "<<2*cl;
    return 0;
}