#include <bits/stdc++.h>
using namespace std;

class Test
{
public:
    void function(int x)
    {
        cout << "value of x is : " << x << endl;
    }
    void function(double x)
    {
        cout << "value of x is : " << x << endl;
    }
    void function(int x, int y)
    {
        cout << "value of x is : " << x << endl;
        cout << "value of y is : " << y << endl;
    }
};

int main()
{
    Test t;
    t.function(10);
    t.function(10.3);
    t.function(10, 20);
    return 0;
}