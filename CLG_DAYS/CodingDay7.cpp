// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class volume{
    public:
    float length;
    float breadth;
    float height;
    float v;
    void setData(int x ,int y, int z){
        x=length, y=breadth, z=height;
    }
    int cubiod(){
        return length*breadth*height;
    }
};
int main() {
 volume obj;
 obj.setData(4,5,6);
 cout<<"Volume of cuboid is "<<obj.cubiod()<<endl;
    return 0;
}