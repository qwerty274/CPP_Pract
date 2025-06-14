//print weekday by entering numbers (switch case)
//practicing pointers

#include <iostream>
using namespace std;
int main(){
    int a=34;
    int* ptr=&a;
    cout<<a<<" is value of integer "<<endl;
    cout<<ptr<<" is value of pointer of int a "<<endl;
}
//     int day=4;
//     switch (day%7){
//         case 1: {
//         cout << "Monday" << endl;
//         break;
//         }
//         case 2: {
//             cout << "Tuesday"<< endl;
//             break;
//         }
//         case 3: {
//             cout << "Wednesday "<< endl;
//             break;
//         }
//         case 4: {
//         cout << "Thursday" << endl;
//         break;
//         }
//         case 5: {
//         cout << "Friday" << endl;
//         break;
//         }
//         case 6: {
//         cout << "Saturday" << endl;
//         break;
//         }
//         case 7: {
//         cout << "Sunday" << endl;
//         break;
//         }
    
//         default: {
//         cout << "NO DAY" << endl;
//     }
// }
// }