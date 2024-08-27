#include<iostream>
using namespace std;
int main()
{
	int n,x=1,sum=0;
	cout << "Enter a number :";
	cin >> n;
	while(n>x){
		sum+=x*x;
		x++;
	}
	cout << "sum :" << sum << endl;
	return 0;
}

