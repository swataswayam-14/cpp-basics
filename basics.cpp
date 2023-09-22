#include<iostream>
using namespace std;

int main(){
    float num1 , num2 , avg , sum;
    cout << "enter two numbers ";//prompt
    cin >> num1;
    cin >> num2;
    sum = num1 + num2;
    avg = sum/2;

    cout << "Sum = "<<sum <<"\n";
    cout << "average = "<<avg <<"\n";
    return 0;
}
//multiple use of << in one statement is cascading
//cascading input operator cin>>num1>>num2