#include <iostream>
#include <ModulessShchychenko.h>

using namespace std;

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
