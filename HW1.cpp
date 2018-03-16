//Lab 1

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

	long input;
	long temp;
	
	cout << "Please enter a positive interger : ";
	cin >> input;
	
	while(input <= 0)
	{
		cout << "The number you entered is not positive, please enter again : ";
		cin >> input;
	}
	
	cout << '\n' << input;
	temp = input;
	
	while(temp != 1)
	{
		if(temp % 2 == 1)
		{
			temp = temp * 3 + 1;
			cout << ' ' << temp;
		}
		else
		{
			temp = temp / 2;
			cout << ' ' << temp;
		}
	}
	
	system("pause");
    return 0;
	
}




