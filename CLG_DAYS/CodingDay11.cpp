#include <iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void SetData(int x,int y){
        a=x,b=y;
    }


    
    void SetData(){
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    complex add(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main() {
complex c1,c2,c3;
c1.SetData(3,9);
c2.SetData(5,6);
c3=c1.add(c2);
c3.SetData();
return 0;
}