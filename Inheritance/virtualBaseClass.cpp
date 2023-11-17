#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void get_number(int a){
            roll_number = a;
        }
        void put_number(void){
            cout<<"Roll no: "<<roll_number<<"\n";

        }
};

class test: virtual public student{
    protected: 
        float part1, part2;
    public:
        void get_marks(float x, float y){
            part1 = x;
            part2 = y;
        }
        void put_marks(void){
            cout<<"Marks obained : "<<"\n"
                <<"Part1 = "<<part1<<"\n"
                <<"Part2 = "<<part2<<"\n";
        }
};

class sports : public virtual student{
    protected:
        float score;
    public:
        void get_score(float s){
            score = s;

        }
        void put_score(void){
            cout<<"Sports wt: "<<score<<"\n";
        }
};

class result : public test , public sports{
    float total;
    public:
        void display(void);
};

void result :: display(void){
    total = part1+part2;
    put_number();
    put_marks();
    put_score();

    cout<<"Total score: "<<total<<"\n";

}

int main(){

    result student1;
    student1.get_number(678);
    student1.get_marks(30.5,25.5);
    student1.get_score(7.0);
    student1.display();

    return 0;
}