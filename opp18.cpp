#include <iostream>
#include <string>
using namespace std;
// MULTILEVEL INHERITANCE (deriving a class from already derived class)

class student
{
protected:
    int roll_number;
    string name;

public:
    void set_roll_number(int, string);
    void get_roll_number(void);
};

void student ::set_roll_number(int r, string n)
{
    cout << "Enter the roll no" << endl;
    cin >> r;
    roll_number = r;
    cout<<"enter your name"<<endl;
    cin >> n;
    name = n;
}

void student ::get_roll_number()
{
    cout << "The roll number is " << roll_number << endl;
    cout << "The name of the student is " << name << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;
    float chemistry;

public:
    void set_marks(float, float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2, float m3)
{
    cout<<"Enter the marks"<<endl;
    cin >> m1 >> m2 >> m3;
    maths = m1;
    physics = m2;
    chemistry = m3;
}

void exam ::get_marks()
{
    cout << "The marks of math are " << maths << endl;
    cout << "The marks of physics are " << physics << endl;
    cout << "The marks of  chemistry are " << chemistry << endl;
}

class result : public exam
{
    float percenatage;

public:
    void sum()
    {
        float per;
        per = (maths + physics + chemistry)*(100);
        percenatage = per/300;
    }

    void display()
    {
        get_roll_number();
        get_marks();
        sum();
        cout << "Your percentage is " << percenatage << "%" << endl;
    }
};

int main()
{
    string s;
    result d[3];

    for(int i=0;i<3;i++){
        d[i].set_roll_number(0,s);
        d[i].set_marks(0.0,0.0,0.0);
        d[i].display();
    }
    return 0;
}

/*
Notes:
    If we are inheriting B from A and C from B: [A--->b--->c]
    1. A is the base class for B and B is the base class for C
    2. A-->B-->C ois  called Inheritance path

*/