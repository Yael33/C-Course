#include <iostream>
#include <math.h>

int main()
{
    double a, b, c, x1 = 0, x2 = 0;

    cout << "Digite la constante a: ";
    cin >> a;
    cout << "Digite la constante b: ";
    cin >> b;
    cout << "Digite la constante c: ";
    cin >> c;

    x1 = (-b + sqrt(pow(b, 2) - 4(a * c))) / (2 * a);
    x2 = (-b - sqrt(pow(b, 2) - 4(a * c))) / (2 * a);

    cout<<"El resultado de determinante 1: "<<x1<<" el determinante 2: "<<x2<<endl;

    return 0;
}