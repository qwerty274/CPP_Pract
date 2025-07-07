//swap numbers
#include <iostream>
using namespace std;
int main() {
    int a=1,b=2;
    //bit wise xor methods
    a = a ^ b;//3
    b = a ^ b;//1
    a = a ^ b;//2
    cout<<"value of a: "<<a<<"value of b "<<b;
    //simple additon subs method 
// a=a+b;//3
// b=a-b;//1
// a=a-b;//2
// cout<<"value of a: "<<a<<"value of b "<<b;
    //with variable
// cout<<"values before a is: "<<a<<endl;
// cout<<"values before b is: "<<b<<endl;
// int temp;
// temp=a;
// a=b;
// b=temp;
// cout<<"value after swaping of a: "<<a<<endl<<"value after swaping of  b: "<<b<<endl;
    return 0;
}