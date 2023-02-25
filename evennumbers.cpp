#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout << "Enter an even number: ";
	cin >> num;
	
	cout << "List of Even Numbers from 1 to " << num << " are: "; 
	for(int i = 1; i <= num; i++)
  	{
  		if ( i % 2 == 0 )
  		{
  			cout << i <<" ";
		}	
  	}
		
 	return 0;
}
