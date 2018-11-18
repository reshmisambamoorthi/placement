#include <iostream>
#include<stdlib.h>
using namespace std;
 
int main() 
{
	int r, c;
	cout << "no.of rows: ";
	cin >> r;
	cout << "no.of columns ";
	cin >> c;
	
	int** a=new int*[r];
		for (int i=0; i<r; i++)
		{
    		a[i]= new int[c];
		}
 
		for (int i=0; i<r; i++)
		{
    		for(int j=0; j<c; j++)
    		{
        		cout <<"("<<i <<","<< j<<"):";
        		cin>> a[i][j];
        		//cout << endl;
    		}
		}
 
		for (int i=0; i<r; i++)
		{
 
    		for(int j=0; j<c; j++)
    		{
       			 cout <<a[i][j];
    		}
    		cout<<"\n";
    		cout<<endl;
		}
	return 0;
}
