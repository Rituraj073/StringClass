#include "mString.h"
using namespace std;

int main()
{
    String fname, lname;
    cout << "Enter Name: " << endl;
    cin >> fname >> lname;

    fname += lname;
    cout << fname << endl << endl;

    return 0;
}