#include <iostream>
#include <clocale>
#include <string>
#include <stack>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	stack<float> st;

	if(st.empty())
		cout << "Стек пуст" << endl;

	int i = 0;
	cout << "Заполняем стек" << endl;
	while(i != 5) {
		int a;
		cout << "Введите элемент под номером - " << i + 1 << ": ";
		cin >> a;
		st.push(a);
		i++;
	}

	/*cout << "Первый элемент: " << st.top() << endl;
	st.pop();
	cout << "Первый элемент: " << st.top() << endl;*/

	while (!st.empty()) {
		cout << "Первый элемент: " << st.top() << endl;
		st.pop();
	}

	return 0;
}