#include <iostream>
#include<vector>
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
int main() 
{
	vector<int> v(5);
	setelemnts(v);
	printelements(v);
	rotate(v);
	cout<<"\nRotated Vector : \n";
	printelements(v);
	return 0;	
}
