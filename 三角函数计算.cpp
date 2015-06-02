#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x, y;
	cout << "please enter x :" << endl;
	cin >> x;
	if (x == 0)
		cout << "Error: the x can not be 0." << endl;
	else{
		y = sin(x) + cos(x) + 1 / tan(x);
		cout << "the question is :" << y << endl;
	}
	return 0;
}

