#include <iostream> 
using namespace std;
 
long factorial(int);
long combination(int m, int r); 

 
int main()
{
	int i;
	cout << "please enter a positive interger :";
	cin >> i;
	cout << i << "! = " << factorial(i) << endl;


	int m,r;
	cout << "please enter m and r :";
	cin >> m >> r;
	cout << "C(" << m << "," << r << ")=" << combination(m,r) << endl;
	return 0;


}
 
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

long combination(int m, int r)
{
	return factorial(m)/factorial(r)/factorial(m - r);
}
