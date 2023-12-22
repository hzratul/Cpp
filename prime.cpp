# include <iostream>
# include <math.h>
using namespace std;
bool isprime(int number);

int main()
{
	int count;
	cout<<"Enter number : ";
	int number;
	cin>>number;

	for(int n = 1; n <= sqrt(number);n++ )
	{
		if(isprime(n)){
			cout<<n<<"\t";
			count++;
			if(count % 5 == 0)cout<<'\n';
		}
	}
	cout<<"\nPrime numbers found : "<<count<<'\n';
	return 0;
}

bool isprime(int number)
{	
	bool prime = false;
	if (number == 1) prime = true;
	else if(number == 2)prime =  true;
//	else if(number == 3)return true;

	else if(number > 3 && prime == false)
	{
		int div;
		for(div = 2; div < number; div++)
		{
			if(number % div == 0)
			{
				prime = false;
				break;
			}
			else prime = true;
		}
	}
	return prime;
}


