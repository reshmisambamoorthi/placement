#include<iostream>
using namespace std;
int main()
{
int a[] = {60, 321, 32, 5};

int finalNumber = 0;
for (int i = 0; i <=3 ; i++) {
    int num = a[i];
    if (num != 0) 
	{
        while (num > 0) 
		{
            finalNumber *= 10;
            num /= 10;
        }
        finalNumber += a[i];
    } else 
	{
        finalNumber *= 10;
    }
}
cout<< "Result: "<< finalNumber;
return 0;
}

