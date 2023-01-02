// C++ Templates: Class Templates with Default Parameters
#include <iostream>
using namespace std;
template<class t1= int, class t2= char >
class name_class{
    t1 a;
    t2 b;
    public:
       name_class(t1 x, t2 y){
        a=x;
        b=y;
       }
      void display(){
        cout<<"the name of student is: "<<b<<endl;
        cout<<"the class of student is: "<<a<<endl;
      }  
};
int main() {
    name_class<char, float >s1('D',5.534);
    s1.display();
    return 0;
}