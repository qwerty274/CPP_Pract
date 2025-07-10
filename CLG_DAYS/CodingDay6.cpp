#include <iostream>
using namespace std;
struct book{
    string t[20];
    float p;
    int e;
};
int main() {
   struct book details;
   cin>>details.t;
   cin>>details.p;
   cin>>details.e;
    cout<<"title : "<<details.t<<endl<<"Price: "<<details.p<<endl<<"Edition: "<<details.e;
    return 0;
}