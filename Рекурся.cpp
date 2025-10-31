#include <iostream>
#include <chrono>
#include <vector>
#include <iomanip>

using namespace std;
using namespace std::chrono;

// Задание 1
// Функция для рекурсивного фаткориала
/*
long long RecursFact(int a) {
	if (a <= 1) {
		return 1;
	}
	return a * RecursFact(a - 1);
}

int main() {
	setlocale(LC_ALL, "ru");
	vector<int> arr = { 10, 20, 30 };
	const int runs = 5;

	cout << "Задание 1: Профилирование рекурсивного факториала\n\n";
	cout << "| Вход | Время выполнения |\n";
	cout << "|------|------------------|\n";
	for (int i : arr) {
		double time = 0.0;

		for (int j = 0; j < runs; j++) {
			auto start = high_resolution_clock::now();

			long long res = RecursFact(i);

			auto end = high_resolution_clock::now();
			auto duration = duration_cast<microseconds>(end - start);

			time += duration.count() / 1000000; 
		}

		double avrg_time = time / runs;

		cout << "|" << setw(6) << i << "|";
		cout << setw(14) << fixed << setprecision(3) << avrg_time << "сек |" << endl;
	}
	return 0;
}
*/

// Задание 2
/*
long long factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

// Итерационный факториал
long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    vector<int> test_values = { 10, 20, 30 };
    const int runs = 5;

    cout << "Задание №2: Сравнение рекурсивного и итерационного факториала\n";
    cout << "| Метод      | Вход | Время выполнения |\n";
    cout << "|------------|------|------------------|\n";

    for (int n : test_values) {
        // Рекурсивный
        double total_time_rec = 0.0;
        for (int run = 0; run < runs; ++run) {
            auto start = high_resolution_clock::now();
            long long res = factorial_recursive(n);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(stop - start);
            total_time_rec += duration.count() / 1000000.0;
        }
        double avg_rec = total_time_rec / runs;

        // Итерационный
        double total_time_iter = 0.0;
        for (int run = 0; run < runs; ++run) {
            auto start = high_resolution_clock::now();
            long long res = factorial_iterative(n);
            auto stop = high_resolution_clock::now();
            auto duration = duration_cast<microseconds>(stop - start);
            total_time_iter += duration.count() / 1000000.0;
        }
        double avg_iter = total_time_iter / runs;

        cout << "| Рекурсия   | " << setw(4) << n << " | " << setw(12) << fixed << setprecision(3) << avg_rec << " сек |\n";
        cout << "| Итерация   | " << setw(4) << n << " | " << setw(12) << fixed << setprecision(3) << avg_iter << " сек |\n";
    }
    return 0;
}
*/

// Задание 3

long long factorial_recursive(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}

long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    int n = 30; // для профилирования — фиксированное значение

    // Вызываем обе функции, чтобы они попали в профиль
    long long r = factorial_recursive(n);
    long long i = factorial_iterative(n);

    cout << "Результаты: " << r << " и " << i << endl;

    return 0;
}