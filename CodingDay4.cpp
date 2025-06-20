//pointers
#include <iostream>
using namespace std;
int main() {
int marks;
 cin>>marks;
        if(marks>=90){
            cout<<"Grade A";
        }
        if(marks>=70){
            cout<<"Grade B";
        }if(marks>=50){
            cout<<"Grade C";
        }if(
            marks>=35){
            cout<<"Grade D";
        }
        else{
            cout<<"Fail";
        }
    return 0;
}