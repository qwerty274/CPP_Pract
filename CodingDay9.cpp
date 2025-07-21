//functions practice
#include <iostream>
using namespace std;
void printDetails(int id, string name="NA",string address="na"){
    cout<<"Id is"<<id<<"\n";
    cout<<"Name is"<<name<<"\n";
    cout<<"Address is"<<address<<"\n";
}
int main() {
printDetails(101,"Sandeep","Noida");
cout<<"\n";
printDetails(201,"Shivam","ludhiana");
cout<<"\n";
printDetails(301);

    return 0;
}