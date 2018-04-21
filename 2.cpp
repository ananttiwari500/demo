#include<iostream>
using namespace std;

int main()
{
	int n,fact=1,sum=0;
	cout << "Enter a number(1-10)\n";
	cin >> n;
	if(n%2==1)
	{
		for(int i = 1; i <=n; ++i)
        fact *= i;
    
    cout << "\nFactorial of " << n << " = " << fact;
	}
	
	else
	{
		for(int i = 1; i <=n; ++i)
		sum=+i;
		    cout << "\nSum of " << n << " = " << sum;
	}
return 0;
}
