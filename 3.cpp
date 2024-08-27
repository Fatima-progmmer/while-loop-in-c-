#include<iostream>
using namespace std;
int main()
{
	int x=1,fact=1, n;
	cout << "Enter number :" ;
	cin >> n;
	while(n>=x){
		fact*=x;
		x++;
	}
	cout << "factorial :" << fact;
	return 0;
}

