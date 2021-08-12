# include<iostream>
using namespace std;

int main()
{
	double num[100];
	double max;
	int i;

	cout << "Enter frist number : ";
	cin >> num[0];
	cout << "Enter second number : ";
	cin >> num[1];
	cout << "Enter third number : ";
	cin >> num[2];

	max = num[0];

	for (int i = 0; i < 3; i++)
		if (max < num[i])
			max = num[i];
	cout << "The maximum number is " << max << endl;

	system("pause");
	return 0;
}
