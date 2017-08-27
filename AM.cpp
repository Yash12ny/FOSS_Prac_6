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
	cout<<" \n While entering the elements, enter an element and press #Enter key to type the next one "<<"\n";
	for(i=0;i<=arraysize-1;++i)			//taking values for the no. of elements
	{
		cin>>a[i];
	}
	for(i=0;i<=arraysize-1;++i)			//printing values entered by user
	{
		cout<<" \n Elements : "<<a[i];
	}
	for(i=0;i<=arraysize-1;++i)			//calculating the sum of given elements	
	{
		sum=sum+a[i];
	}
	cout<<" \n Sum of the elements : "<<sum;
	div=arraysize;
	mean=sum/div;					//calculating the Arithmetic Mean for the given elements
	cout<<" \n Arithmetic Mean of the elements is : "<<mean<<"\n";		//Printing AM
	system("pause");
	return 0;
}
