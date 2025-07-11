//q2
#include <iostream>
using namespace std;
int main() {
int a=2;
int b=3;
a=a^b;
b=b^a;
a=a^b;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
    return 0;
}