#include<iostream>
#include<conio.h>
#include<cstdio>
#include<stdio.h>
using namespace std;

int main()
{
	float arraysize,a[1000],mean,div,b;
	int i,sum;
	sum=0;
	cout<<" \n Calculating the arithmetic mean of a given data";
	cout<<" \n Enter the number of elements : ";
	cin>>arraysize;
	for(i=0;i<=arraysize-1;++i)
	{
		cin>>a[i];
	}
	for(i=0;i<=arraysize-1;++i)
	{
		cout<<" \n Elements : "<<a[i];
	}
	for(i=0;i<=arraysize-1;++i)
	{
		sum=sum+a[i];
	}
	cout<<" \n Sum of the elements : "<<sum;
	div=arraysize;
	mean=sum/div;
	cout<<" \n Arithmetic Mean of the elements is : "<<mean<<"\n";
	system("pause");
	return 0;
}
