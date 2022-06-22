//算雞,兔子,螃蟹個幾隻
#include <iostream>
using namespace std;

int main()
{
    float total, leg, tail;
    float x, y, z; //雞:x, 兔子:y, 螃蟹:z
    cin >> total >> leg >> tail;
    /*
    x+y+z=total;
    2*x+4*y+8*z=leg;
    x+y=tail;
    */
    z = total - tail;
    leg -= 8 * z;
    y = (leg - 2 * tail) / 2;
    x = total - y - z;
    if (x < 0 || y < 0 || z < 0)
        cout << "No solution\n";
    else if (x - (int)x != 0 || y - (int)y != 0 || z - (int)z != 0)
        cout << "No solution\n";
    else
        cout << x << ' ' << y << ' ' << z << "\n";
    //printf("%1.0f %1.0f %1.0f\n", x, y, z);

    return 0;
}