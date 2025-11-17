#include "mString.h"
using namespace std;

int main()
{
    String fname = "Rituraj";
    String lname(" Prasad");

    fname += lname;
    cout << fname << endl << endl;

    return 0;
}