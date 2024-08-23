#include<iostream>
#include<algorithm>
using namespace std; 
int calc_GCD(int m,int n)
{
	int i;
	int min_num = (n < m) ? n : m;
	int gcd=1;
	for(i=1;i<=min_num;i++)
	{
		if(n%i==0 && m%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}
int main()
{
	int m,n;
	cout<<"Enter 2 numbers :";
	cin>>m>>n;
	int result = calc_GCD(m,n);
	cout<<"GCD of " << m << " and " << n << " is " << result << endl;
	return 0;
}
