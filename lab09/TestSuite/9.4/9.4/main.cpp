#include <iostream>
#include <math.h>
#include <ModulessShchychenko.h>

using namespace std;

int main()
{
    char functions;
    cout << "FUNCTION" << endl;
    cout << "e = S_calculation" << endl;
    cout << "r = 9.1" << endl;
    cout <<"f = 9.2" << endl;
    cout <<"t = 9.3" << endl;
    cin >> functions;

if(functions == 'e' || functions == 'r' || functions == 'f' || functions == 't' )
{

    switch(functions)
{
    case 'e':
{


         double pi = 3.14;

    double x,y,z, S;

    S = (0.5*pow((abs(2*z-pow(x,2)))/sin(x),3))/(sqrt(1 + abs(cos(x)))+2*pi);



    cout << "Input x" <<endl;

    cin >> x;

    cout << "Input y" <<endl;

    cin >> y;

    cout << "Input z" <<endl;

    cin >> z;

    cout << "S = " << S << endl;

    break;
}
    case 'r':
{
    int FUNC1()
{
     int b = 0;

    int x = 0;

    int y = 0;

    cout << "Enter your zarplata" << endl;

    cin >> x;

    cout << "Enter your staj" << endl;

    cin >> y;

    cout << x << endl;

    cout << b << endl;
}
    break;
    }
    case 'f':
    {
     int FUNC2()
{
    int a = 0;
    int vib = 0;
    cout << "Enter your head girth" << endl;
    cin >> a;
    if(vib = 10)
    {
     cout << "ERROR" << endl;
    }
    if( vib = 20)
    {
        cout << "helmet size: XS" << endl;
    }
    if( if vib = 30)
    {
        cout << "helmet size: S" << endl;
    }
    if( vib = 40)
    {
        cout << "helmet size: M" << endl;
    }
    if( vib = 50)
    {
        cout << "helmet size: L" << endl;
    }
    if( vib = 60)
    {
        cout << "helmet size: XL" << endl;
    }
}
   break;
    }
    case 't':
        {


        int FUNC3()
{
    int k = 0;
    int one = 0;
    int zero = 0;
    cout << "Enter your number" << endl;
    cin >> k;

    bool is_d15_set = (k >> 15) & 1;

    if (is_d15_set)
    {
      cout << "zero " << zero << endl;
    } else
    {
      cout << "one "<< one << endl;
    }
        }
     break;
    }
    }
}
    else
    {
        cout << "\a" << endl;
    }
    }




