// ConsoleApplication1.16.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 13. Задача 1. 

#include <iostream>
#include <vector>
#include <locale.h>
using namespace std;
vector<int>removal(vector<int>vect, int t) {
vector<int>newvec(t);
int i, count = 0;
for (i = 0; i < vect.size(); i++) {
	if (vect[i] != vect[vect.size() - 1]) {
		newvec[i - count] = vect[i];
	}
	else if (i == (vect.size() - 1)) {
		newvec[i - count] = vect[vect.size() - 1];
	}
	else {
		count++;
	}

} t -= count; cout << "(" << t << ")";
for (i = 0; i < t; i++) {
	vect[i] = newvec[i];
	cout << vect[i] << " ";
}
return vect;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, i, additionalNumber;
cout << "\n Укажите количество элементов в векторе ";
	cin >> n;
	vector<int>vec(n);
	
	cout << "\n Введите элементы вектора ";
	for (i = 0; i < n; i++) {
		cout << "\n vec[" << i << "]=";
		cin >>vec[i];
	}
	cout << "\n ВВедите дополнительное значение ";
	cin >> additionalNumber;
	vec.push_back(additionalNumber);	
	vec = removal(vec, vec.size());
//	for (i = 0; i < vec.size(); i++) {
	//	cout << vec[i] << " ";
//	}cout << "\n" << vec.size() << " ";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
