//Virtual base class (To resolve Ambiguity--> that the derived classes
    //  gets only one copy of   variables of base class   )
 

#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int roll_no;
    string name;

public:
    void set_number(int a, string n)
    {
        roll_no = a;
        cin>>n;
        name = n;
    }
    void print_num()
    {
        
        cout << "your roll no is: " << roll_no << endl
             << "the name of the student is: " << name << endl;
    }
};

class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks()
    {
        cout << "Your test marks are: " << endl
             << "maths: " << maths << endl
             << "physics: " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(int s)
    {
        score = s;
    }

    void print_score()
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class result : public Test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print_num();
        print_marks();
        print_score();
        cout << "Your total score of this year is: " << total << endl;
    }
};

int main()
{
    string n;
    result a1;
    a1.set_number(54,n);
    a1.set_marks(90.5,95.8);
    a1.set_score(8);
    a1.display();

    return 0;
}