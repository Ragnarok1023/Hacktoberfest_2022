#include<iostream>
using namespace std;
int beta(){
        cout<<"This is function beta"<<endl;

}
int main(){
    const int i=0;
    i=5;

    if(i){
        cout<<i;
        i++;
    }
}