#include <iostream>
using namespace std;
class employee{
    int salary=120000;
};
class total: public employee{
    public:
    int bonus=20000;
};
int main() {
    total obj;
    cout<<"salary: "<<obj.salary<<endl;
      
    return 0;
}