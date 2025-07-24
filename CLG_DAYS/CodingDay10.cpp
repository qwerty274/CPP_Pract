#include <iostream>
using namespace std;
int  area(int r){
    return 3.14*r*r;
}
int area(int l,int b){
    return l*b;
}
int main() {
int a=area(4);
cout<<"area: "<<a<<endl;
    return 0;
}