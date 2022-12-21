#include<iostream>
using namespace std;
int main()
{
	for (int i = 1,p=1,mod=1; i < 1000; i+=2,p=i,mod=1)
	{
		for (int x=0; p != 0 ; mod = p % 10 , p = p / 10)
		{
			if (p % 2 != 0 && p / 10 == 0 && mod % 2 != 0)
			{
				cout << i << " ";
			}
		}
	}
}