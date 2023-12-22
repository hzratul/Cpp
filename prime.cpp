# include <iostream>
# include <math.h>
using namespace std;
bool isprime(unsigned long int number);

int main()
{
	int count;
	cout<<"Enter number : ";
    unsigned long int number;
	cin>>number;

	for(unsigned long int n = 1; n <= number;n++ )
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

bool isprime(unsigned long int number)
{	
	bool prime = false;
	if (number == 1) prime = true;
	else if(number == 2)prime =  true;
//	else if(number == 3)return true;

	else if(number > 3 && prime == false)
	{
		unsigned int div;
		for(unsigned div = 2; div <= sqrt(number); div++)
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


