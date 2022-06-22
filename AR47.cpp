// Regular number
#include <iostream>
using namespace std;

int main()
{
    int input;
    cin >> input;
    /*若該數可被2、3、5任意數整除*/
    while (input % 2 == 0 || input % 3 == 0 || input % 5 == 0)
    {
        if (input % 2 == 0)
            input /= 2;

        else if (input % 3 == 0)
            input /= 3;

        else if (input % 5 == 0)
            input /= 5;
    }

    if (input == 1)
        cout << "Regular number!\n";
    else
        cout << "Irregular number!\n";
    return 0;
}