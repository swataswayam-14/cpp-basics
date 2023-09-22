//classes provide a method of binding together datas and functions which operate on them
//like structures in c++ , classes are user-defined data types
//this program shows the use of classes in c++

#include <iostream>
using namespace std;
class person {
    char name[20];
    int age;

    public:
        void getdata(void);
        void display(void);
};
void person :: getdata(void){
    cout<< "Enter name ";
    cin>> name;
    cout<<"Enter age";
    cin>> age;
}
void person :: display(void){
    cout<< "\nName: "<<name;
    cout << "\nAge: "<<age;
}
int main(){
    person p;
    p.getdata();
    p.display();
    return 0;
}