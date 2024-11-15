// virtual Function example

#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float ratings;

public:
    CWH(string s, float r)
    {
        title = s;
        ratings = r;
    }

    virtual void display() {
        cout<<"banana shake"<<endl;
    }
};

class CWHvideo : public CWH
{
    float vlen;

public:
    CWHvideo(string s, float r, float vl) : CWH(s, r)
    {
        vlen = vl;
    }

    void display()
    {
        cout << "This is a osm video with title " << title << endl;
        cout << "Rating: " << ratings << "out of 5 stars" << endl;
        cout << "The video length " << vlen << " minutes" << endl;
    }
};

class CWHtext : public CWH
{
    int word_count;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        word_count = wc;
    }

    void display()
    {
        cout << "This is a osm text tutorail with title " << title << endl;
        cout << "Rating of this text tutorail is: " << ratings << "out of 5 stars" << endl;
        cout << "No of words in this text tutorial is " << word_count << " words" << endl;
    }
};

int main()
{
    string title;
    float vl, r;
    int words;

    // video
    title = "C++_video_turorails";
    vl = 5.27;
    r = 4.99;
    CWHvideo cppvideo(title, r, vl);
    // cppvideo.display();

    // text
    title = "C++_text_turorails";
    words = 527;
    r = 4.94;
    CWHtext cpptext(title, r, words);
    // cpptext.display();

    CWH *opps[2];
    opps[0] = &cppvideo;
    opps[1] = &cpptext;

    opps[0]->display();
    opps[1]->display();

    return 0;
}

// Rules for virtual functions

/*
    1.  They cannot be static
    2.  They are accessed by object pointers
    3.  Virtual function can be a friend of another class
    4.  A virtual function in base class might not be used
    5.  If a virtual function is defined in a base class, there is no neccesity of redfining it in the derived class
*/