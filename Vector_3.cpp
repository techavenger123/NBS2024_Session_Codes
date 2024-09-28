#include <bits/stdc++.h> 
using namespace std;
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
void reverse(vector<int> &v)
{
    int temp;
    for(int i=0,j=v.size()-1;i!=j && j>i;i++,j--)
    {
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
}
int main() 
{   
	vector<int> v(5);
	setelemnts(v);
	//printelements(v);
	reverse(v);
	cout<<"\nreversed vector : \n";
	printelements(v);
	return 0;	
}
