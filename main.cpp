#include <iostream>
using namespace std;
int main()
{
	int a,b,i;
	int c =1;
	cin >>a;
	for (i=1;i<=a;i++)
	{
		c = c*i;
	}
	cout<<"factorial = "<<c<<endl;
	system("pause");
	return 0;
}

