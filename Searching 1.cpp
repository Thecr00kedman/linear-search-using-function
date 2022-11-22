
#include <iostream>
using namespace std;

int a[] = { 1, 2, 3 ,5 ,8, 17, 9, 10 };
int val;
int n = sizeof a / sizeof(int);

int Linear_search()
{
	for (int i = 0; i < n; i++)
	{
		if (val == a[i]) {
			cout << "present" << endl;
			break;
		}
		else if (a[i] == n)
		{
			cout << "Not present";
			break;
		}




	}
}

int main()
{




	cout << "size will be" << endl << n << endl;



	cout << "enter the value: " << endl;
	cin >> val;

	Linear_search();




}