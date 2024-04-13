#include <iosteram>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	cout << "hI GIT_TEST" << endl;
	
	int a, b, res;
	char ch;
	cout << "ââåäèòå ïåðâîå ÷èñëî: ";
	cin >> a;
	cout << "ââåòèäå âòîðîå ÷èñëî: ";
	cin >> b;
	cin >> ch;
	cout << "ââåäèòå òèï àðèôìè÷åñêîãî äåéñòâèÿ: ";
	switch (ch)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*': res = a * b; break;
	case '/': res = a / b; break;
	default:
		cout << "ÿ âàñ íå ïîíèìàþ"; break;
	}
	cout << "ðåçóëüòàò: " << "hi" << res;
	
	


	
	return 0;
}
