#include <iostream>
#include <Moduless.h>

using namespace std;
string copyright()
{
    return "(c)Shchychenko Oleksiy ";
}
bool prim(char a, char b)
{
    double result;
    if(a + 3 <= b)
    {
     result = 1;
    }
    else
    {
        result = 0;
    }
   return result;
}
string DecHexFunction(double x,double y,double z)
{
    cout << "����� � ���������" << endl;
    cout<<"'x'->" << dec <<x << endl;
    cout<<"'y'->" << dec <<y << endl;
    cout<<"'z'->" << dec <<z << endl;
    cout << "����� � ��������������" << endl;
    cout<<"'x'->" << hex <<x << endl;
    cout<<"'y'->" << hex <<y << endl;
    cout<<"'z'->" << hex <<z << endl;
    cout << "S = " << s_calculator(x,y,z) << endl;
    return "";
}

int main()
{
    setlocale(LC_ALL, "ukr");
    cout << copyright() <<endl;

    double x, y, z;
    double a, b;
    cout <<"������ x"<< endl;
    cin >> x;
    cout <<"������ y"<< endl;
    cin >> y;
    cout <<"������ z"<< endl;
    cin >> z;

    cout <<"������ a"<< endl;
    cin >> a;
    cout <<"������ b"<< endl;
    cin >> b;


    cout << "��������� ������: a+3<=b -> " << prim(a,b) << endl;
    cout << DecHexFunction(x, y, z);
    return 0;
}
