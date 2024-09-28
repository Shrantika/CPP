#include<bits/stdc++.h>
using namespace std;
void InsertSorted(stack<int> &stack,int element)
{
	if(stack.empty() || stack.top() <= element)
	{
		stack.push(element);
	}
	else
	{
		int top_element = stack.top();
		stack.pop();
		InsertSorted(stack,element);
		stack.push(top_element);
	}
}
void SortStack(stack<int> &stack)
{
	if(stack.empty())
	{
		return;
	}
	int top_element = stack.top();
	stack.pop();
	SortStack(stack);
	InsertSorted(stack,top_element);
}
void PrintStack(stack<int> stack)
{
	while(!stack.empty())
	{
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;
}
int main()
{
	int n,i;
	cout << "Enter the no.of elements in stack  :  ";
	cin >> n;
	stack<int> s;
	cout<<"Enter the elements of the stack  :  ";
	for(i=0;i<n;i++)
	{
		int val;
		cin>>val;
		s.push(val);
	}
	cout<<"Original stack : ";
	PrintStack(s);
	
	SortStack(s);
	
	cout<<"Sorted stack : ";
	PrintStack(s);
	
	return 0;
}
