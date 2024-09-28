#include <bits/stdc++.h> 
using namespace std;
void rotate(vector<int> &v)
{
    int n=v.size();
    int temp=v[n-1];
    for(int i=n;i>0;i--)
    {
        v[i]=v[i-1];
    }
    v[0]=temp;
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
int median(vector<int> &v)
{
    int n=v.size();
    if(n%2==0)
    {
        return ((v[n]/2 + (v[n]/2+1))/2);
    }
    else
    {
        return v[(n-1)/2];
    }
}
int mean(vector<int> &v)
{
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum=sum+v[i];
    }
    return sum/v.size();
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
	cout<<"\nMean of Vector : "<<mean(v)<<"\n";
	sort(v.begin(),v.end());
	cout<<"\nMedian  of Vector : "<<median(v)<<"\n";
	reverse(v);
	cout<<"\nReverse  of Vector : \n";
	printelements(v);
	rotate(v);
	cout<<"\nRotated Vector : \n";
	printelements(v);
	return 0;	
}
