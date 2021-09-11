#include<bits/stdc++.h>
using namespace std;

#define RUN 20 //For number of test cases
#define MAX 100000000 //highest possible value for each element
#define MAXNUM 1000000 //number of elements in array

int main()
{
	srand(time(NULL));
	for (int i=1; i<=RUN; i++)
	{
		int NUM = 1 + rand() % MAXNUM; // Number of array elements

		for (int j=1; j<=NUM; j++)
			cout<<" "<<rand() % MAX<<endl;
	}
	return(0);
}
