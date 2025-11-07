#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;

/*
// Задание 1
int main() {
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "Введите длины трёх сторон треугольника (через пробел): ";
    cin >> a >> b >> c;

    if (cin.fail()) {
        cout << "Ошибка: введены не числа!\n";
        return 1;
    }

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Ошибка: длина стороны должна быть больше 0.\n";
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: сумма двух сторон должна быть больше третьей.\n";
        return 1;
    }

    string type;
    if (a == b && b == c) {
        type = "Равносторонний";
    }
    else if (a == b || b == c || a == c) {
        type = "Равнобедренный";
    }
    else {
        type = "Разносторонний";
    }

    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "\n--- Результат ---\n";
    cout << "Тип треугольника: " << type << endl;
    cout << "Площадь: " << fixed << setprecision(2) << area << endl;

    return 0;
}
*/
// Задание 3
int main() {
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "Введите длины трёх сторон треугольника: ";
    cin >> a >> b >> c;

    if (cin.fail()) {
        cout << "Ошибка: введены не числа!\n";
        return 1;
    }
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Ошибка: длина стороны должна быть больше 0.\n";
        return 1;
    }
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Ошибка: сумма двух сторон должна быть больше третьей.\n";
        return 1;
    }

    double sides[3] = { a, b, c };
    sort(sides, sides + 3);
    double x = sides[0], y = sides[1], z = sides[2];

    string angle_type;
    double sum_squares = x * x + y * y;
    double z_square = z * z;

    if (abs(sum_squares - z_square) < 1e-9) {
        angle_type = "Прямоугольный";
    }
    else if (sum_squares > z_square) {
        angle_type = "Остроугольный";
    }
    else {
        angle_type = "Тупоугольный";
    }

    double p = (a + b + c) / 2.0;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "\n--- Результат ---\n";
    cout << "Тип по углам: " << angle_type << endl;
    cout << "Площадь: " << fixed << setprecision(2) << area << endl;

    return 0;
}
