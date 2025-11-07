#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
using namespace std;

/*
// НОД
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    setlocale(LC_ALL, "ru");
    int x , y;
    cin >> x >> y;
    cout << "НОД(" << x << ", " << y << ") = " << gcd(x, y) << endl;
    return 0;
}
*/

/*
//Фибаначчи
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}
*/

/*
//Переворачивает число
int reverseNumber(int n, int reversed = 0) {
    if (n == 0) {
        return reversed;
    }
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main() {
    setlocale(LC_ALL, "ru");
    int num;
    cin >> num;
    cout << "Число " << num << " перевёрнуто: " << reverseNumber(num) << endl;
    return 0;
}
*/
/*
// Нахождение суммы
void findSums(int n, int m, int start = 1, vector<int> current = {}) {
    if (m == 0) {
        if (n == 0) {
            for (int i = 0; i < current.size(); i++) {
                if (i > 0) cout << " + ";
                cout << current[i];
            }
            cout << endl;
        }
        return;
    }

    for (int i = start; i <= n; i++) {
        current.push_back(i);
        findSums(n - i, m - 1, i, current);
        current.pop_back();
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int n, m;
    cin >> n >> m;
    cout << "Представления числа " << n << " как суммы " << m << " слагаемых:\n";
    findSums(n, m);
    return 0;
}
*/

/*
// Определяет количество единиц 
int countOnes(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 2) + countOnes(n / 2);
}

int main() {
    setlocale(LC_ALL, "ru");
    int num;
    cin >> num;
    cout << "Количество единиц в двоичном представлении " << num << ": " << countOnes(num) << endl;
    return 0;
}
*/

/*
// Вычисляет суммы через единицы
int add(int a, int b) {
    if (b == 0) {
        return a;
    }
    return add(a + 1, b - 1);
}

int main() {
    int x = 5, y = 3;
    cout << x << " + " << y << " = " << add(x, y) << endl;
    return 0;
}
*/
/*
// Вычисляет произведение через сумму
int multiply(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiply(a, b - 1);
}

int main() {
    int x = 4, y = 5;
    cout << x << " * " << y << " = " << multiply(x, y) << endl;
    return 0;
}
*/


bool isPalindrome(const string& s, int i, int j) {
    if (i >= j) {
        return true;
    }
    if (s[i] != s[j]) {
        return false;
    }
    return isPalindrome(s, i + 1, j - 1);
}

int main() {
    setlocale(LC_ALL, "ru");
    string str = "abcba";
    int i = 1, j = 3;
    if (isPalindrome(str, i, j)) {
        cout << "Фрагмент " << str.substr(i, j - i + 1)
            << " — палиндром!" << endl;
    }
    else {
        cout << "Не палиндром." << endl;
    }
    return 0;
}