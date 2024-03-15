#include <iostream>
#include <fstream>
int main()
{
    setlocale(LC_ALL, "RUS");
    using namespace std;
    float r;
    float result;
    cout << "Введите радиус: ";
    cin >> r;
    float p = 3.14;
    result = r * r * p;
    cout << "Площадь круга = " << result;

    return 0;
}