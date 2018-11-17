#include<iostream>
using namespace std;
int main()
{
	int a[]={1,3,4,1};
	int b[]={0,0,0,0};
	int i=0,flag=0;
	while(b[i]!=1)
	{
		b[i]=1;
    	if(a[i]!='\0')
    	{
			i=a[i];	
   		}
	    else
	    {
	    	
	    	flag=1;
	    	break;
		}
  }
  if(flag==1)
  	cout<<"yes";
  else
  	cout<<"no";
  
	return 0;
}
