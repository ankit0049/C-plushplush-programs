#include<iostream>
using namespace std;

class math
{
    public:
    void max(){
        cout << "base class" <<endl;
    }

    
} ;

class math1 : public math{
    public:

    void max()
    {
        cout << "derived class" << endl;
    }
};


int main(){

    
    math1 m1;
    m1.max();

    m1.math :: max();



    return 0;
}