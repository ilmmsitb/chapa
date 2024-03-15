#include <iostream>
#include <fstream>
int main()
{
    setlocale(LC_ALL, "RUS");
    using namespace std;
    float r;
    float result;
    cout << "¬ведите радиус: ";
    cin >> r;
    float p = 3.14;
    result = r * r * p;
    cout << "ѕлощадь круга = " << result;

	return 0;
}