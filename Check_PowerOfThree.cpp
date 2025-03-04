#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

class Solution
{
	public:
		bool Power(int n,vector<int >& power)
		{
			int powerIndex = 0;
			while(n>0)
			{
				if(n%3 == 2) return false;
				if(n%3 == 1)
				power.push_back(pow(3,powerIndex));
				n = n/3;
				powerIndex++;
			}
		return true;
		}
};
int main()
{
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	
	Solution sol;
	vector<int> powers;
	if(sol.Power(num,powers)){
	
	   cout<<num<<" can be represented in the sum of power of 3.\n";
	   cout<<"Sequence : ";
	   int i;
	   for(i = 0;i < powers.size();i++)
	   {
	   	   cout<<powers[i];
	   	   if(i != powers.size() - 1)
	   	   cout<<"+";
	   }
	   cout<<endl;
}
	else{
	
	   cout<<num<<" cannot be represented in the sum of power of 3.\n";
}
	return 0;
}
