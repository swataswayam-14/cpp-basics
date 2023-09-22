//enumeration is used to define symbolic constants for a switch statement
#include<iostream>
using namespace std;
enum shape{
    circle,
    rectangle,
    triangle
};

int main(){
    cout<<"Enter shape code: ";
    int code;
    cin >> code;
    while(code >= circle && code <= triangle){
        switch(code){
            case circle:
                cout<<"Its circle\n";
            break;
            case rectangle:
                cout<<"Its rectangle\n";
            break;
            case triangle:
                cout<<"its triangle\n";
            break;
        } 
        break;
    }
    cout<<"BYE\n";
    return 0; 
}

//ANSI C permits an enum to be defined within a structure or a class and the enum is globally visible . In C++, an enum defined within a class (or structure) is local to that class (or structure) only