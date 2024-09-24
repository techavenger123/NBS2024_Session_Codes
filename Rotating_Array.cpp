#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,5,6,7,8,9,10,8,9,58};
 	for(int i=0;i<10;i++)
 	{
 		cout<<arr[i]<<" ,";
	}
	int temp=arr[9];
	for(int j=9;j>0;j--)
	{
		arr[j]=arr[j-1];
	}
	arr[0]=temp;
	cout<<"\n updated array...\n";
	for(int k=0;k<10;k++)
	{
		cout<<arr[k]<<" ,";
	}
 	return 0;
}
