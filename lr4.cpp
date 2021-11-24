/*#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << a / 10 + (a % 10) * 10 << endl;
    return 0;
}
*/
#include <iostream>
#include <windows.h>
#define _USE_MATH_DEFINES   
#include <math.h>  

using namespace std;

int main()
{
    double a, x, y, z;

    printf("input x:");
    scanf_s("%lf", &x);
    printf("input y:");
    scanf_s("%lf", &y);
    printf("input z:");
    scanf_s("%lf", &z);
    a = pow(sin(pow((pow(x, 2) + z), 2)), 3) - pow(x / y, 1 / 2.) - tan(132 * M_PI / 180);
    cout << a;
    

}
