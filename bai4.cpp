# include <iostream>
# include <unistd.h>
# include <sys/wait.h>
# include <stdlib.h>
using namespace std;
int main()
{
	int sum1,sum2,n;
	cout<<"nhap so nguyen n: ";
	pid_t pid = fork();
	if (pid==0)
	{
		for (int i=1; i<=n;i++)
		{
			sum1+=i;
		}
		cout<<"sum from 1 to "<<n<<":"<<sum1<<endl;
	}
	else 
	{
		if (pid>0)
		{
			wait(NULL);
			for (int i=1;i<=n;i++)
			{
				if (b%i==0)
				{
					sum2+=i;
				}
			}
		cout<<"sum of divisors of n: "<<sum2<<endl;	
		}
		else 
		{
			cout<<"erro"<<endl;
			exit(0);
		}
	}
}
