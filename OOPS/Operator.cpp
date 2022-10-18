#include <iostream>
using namespace std;

class A
{
    private:
    int a;
    public:
    int getData();
    int setData();
    friend A operator -(A b);
};

int A :: getData()
{
    cout << "Enter value of x ";
    cin >> a;
} 
int A :: setData()
{
    return a;
}
A operator -(A b)
{
    b.a = -(b.a);
    return b;

}

int main()
{
    /**
     * 
     * 
     * Operator overloading
     * 
     * 
     * 
     * 
     * 
    */
    A obj1;
    obj1.getData();
    //cout << "Value of a before operator overloading is " << obj1.setData() << endl;
    obj1 = -obj1;
    cout << "Value of a after operator overloading is " << obj1.setData() << endl;
    return 0;
}