#include <iostream>
using namespace std;
class Ashish
{
    public:

    int a ;
    int b ;

    Ashish operator+(Ashish& ac )
    {

        Ashish a1;

        a1.a = ac.a + a;
        a1.b = ac.b + b;

        return a1;

    }

    void print()
    {
         cout << endl << " a :" << a <<endl;
         cout << " b : " << b << endl;
    }
};


int main()
{
    Ashish BKL,BKL1,BKL2;
    BKL.a =10;
    BKL.b =9;

    BKL.print();

    BKL1.a = 20;
    BKL1.b = 10;

    BKL1.print();

    BKL2 = BKL1 + BKL;

    BKL2.print();

    



    return 0;
}
