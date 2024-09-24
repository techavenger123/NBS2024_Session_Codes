#include <iostream>
#include<vector>
using namespace std;
int max_element(vector<int>v)
{
	int max=INT_MIN;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>=max)
		{
			max=v[i];
		}
		else
		{
			continue;
		}
	}
	
	return max;
}
void setelemnts(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cin>>v[i];
	}
}
void printelements(vector<int> &v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";	
	}
}
int main() 
{
	vector<int> v(5);
	setelemnts(v);
	printelements(v);
	cout<<"\nmax element : "<<max_element(v);  
	return 0;	
}
