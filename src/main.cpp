#include <iosteram>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	cout << "hI GIT_TEST" << endl;
	
	int a, b, res;
	char ch;
	cout << "введите первое число: ";
	cin >> a;
	cout << "вветиде второе число: ";
	cin >> b;
	cin >> ch;
	cout << "введите тип арифмического действия: ";
	switch (ch)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default:
		cout << "я вас не понимаю"; break;
	}
	cout << "результат: " << res;
	
	


	
	return 0;
}