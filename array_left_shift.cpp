#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int n;
	cout<<" enter elements to be inserted ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<" elements are ";
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
		
		for(int i=0;i<2;i++)
		{
			int temp;
		    temp=a[0];
	
	          for(int i=0;i<n-1;i++)
	         {
	                
	              	a[i]=a[i+1];
	             	
         	}
         	a[n-1]=temp;
       }
	cout<<endl<<" Array after left shift ";
	
	for(int i=0;i<n;i++)
	{
	
		cout<<a[i];
	
	}

	
}
