#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    int roll;
    float result;
    string name;
    void display()
    {
        cout<<name <<endl;
        cout<<roll <<endl;
        cout<<result <<endl;
    }
};


int main()
{
    student objFist;

    objFist.name ="Ibrahim Khan";
    objFist.roll = 1;
    objFist.result=3.5;
    objFist.display();


    // objFist.name ="Ibrahim Khan";
    
    // objFist.roll_a ="Roll"
    // objFist.roll_b =1;
    // string objFist.roll_c = roll_a + roll_b;
    // objFist.result=3.5;
    // objFist.display();


    student objScond;

    objScond.name ="Owsa";
    objScond.roll =2;
    objScond.result=4.0;
    objScond.display();

    student objThrid;

    objThrid.name="Santo";
    objThrid.roll=3;
    objThrid.result=3.6;
    objThrid.display();

    student objForth;

    objForth.name="Santo";
    objForth.roll=4;
    objForth.result=3.3;
    objForth.display();

    student objFifth;

    objFifth.name="Hasibul Amin Utsho";
    objFifth.roll=5;
    objFifth.result=3.8;
    objFifth.display();


    student objSix;

    objSix.name="Hasibul Amin Utsho";
    objSix.roll=5;
    objSix.result=3.8;
    objSix.display();

}