#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n, i, arr[50], search, f, l, m;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" number :";
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter a number to find :";
	cin>>search;
	f = 0;
	l = n-1;
	m = (first+last)/2;
	while (f <= l)
	{
		if(arr[m] < search)
		{
			f = m + 1;

		}
		else if(arr[m] == search)
		{
			cout<<search<<" found at location "<<m+1<<"\n";
			break;
		}
		else
		{
			 l = m - 1;
		}
		m = (f + l)/2;
	}
	if(f > l)
	{
		cout<<"Not found! "<<search<<" is not present in the list.";
	}
	getch();
}
