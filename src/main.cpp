#include <iosteram>
using namespace std;

int main() {
	cout << "hI GIT_TEST" << endl;
	
	int a, b, res;
	char ch;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cin >> ch;
	cout << "������� ��� ������������� ��������: ";
	switch (ch)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default:
		cout << "� ��� �� �������"; break;
	}
	
	


	
	return 0;
}