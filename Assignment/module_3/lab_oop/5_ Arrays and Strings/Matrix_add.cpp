#include<iostream>
using namespace std;

class matrix
{
	int i,j;
	
	public:
		
		void getdata(int a[2][2])
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					cout << "Enter a[" << i << "][" << j << "]: ";
					cin>>a[i][j];
				}
			}
		}
		
		void printarray(int a[2][2])
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					 cout << "\t" << a[i][j];
				}
				cout<<"\n";
			}
		}
		
		void addarray(int a[2][2], int b[2][2], int c[2][2])
		{
			for(i=0;i<2;i++)
			{
				for(j=0;j<2;j++)
				{
					c[i][j] = a[i][j] + b[i][j];
				}
			}
		}
};

main()
{
	int a[2][2], b[2][2], c[2][2];
	
	matrix m;
	cout<<"Enter the data of the firtst matrix"<<"\n";
	m.getdata(a);
	cout<<"First matrix is:"<<"\n";
	m.printarray(a);
	
	cout<<"Enter the data of the second matrix"<<"\n";
	m.getdata(b);
	cout<<"Second matrix is:"<<"\n";
	m.printarray(b);
	
	
	m.addarray(a,b,c);
	cout<<"Addition of two matrix (A+B):"<<"\n";
	m.printarray(c);
}
