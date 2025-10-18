#include <iostream>
using namespace std;
int main()
{
	int start, end;
	int evenCount = 0;
	int	oddCount = 0;
	int	primeCount = 0;
	int sumOdd = 0;
	cout << "===== Number Properties Analyzer =====" << "\n";
	cout << endl;

	while (true)
	{
		cout << endl;
		cout << "Enter the starting digit: ";
		cin >> start;
		cout << "Enter the ending digit: ";
		cin >> end;
		cout << endl;

		if (start < end)
		{
			cout << "It's a Valid range!" << endl;
			break;
		}
		else
		{
			cout << "Invalid range! please try again" << endl;
		}
	}

	cout << endl;
	cout << "The Numbers are as follows: " << endl;
	for (int i = start; i < end; i++)
	{
		cout << i << "\n";

	}

	cout << endl;
	while (start < end)
	{
		if (start % 2 == 0)
		{
			cout << "The number "<<start<<" is Even!"<< endl;
			evenCount++;
	
		}
		else
		{
			cout << "The number "<<start<<" is Odd!"<< endl;
			oddCount++;
			sumOdd += start;
		}


		bool isPrime = true;

		if (start <= 1)
			isPrime = false;
		else
		{
			for (int i = 2; i < start; i++) // check all numbers before n
			{
				if (start % i == 0)         // if divides evenly
				{
					isPrime = false;
					break;
				}
			}
		}

		if (isPrime)
		{
			cout << "The Number "<<start<<" is a Prime Number!"<<endl;
			primeCount++;
		}
		else
		{
			cout << "The Number " << start << " is not Prime Number!" << endl;
		}
		cout << endl;
		start++;
	}

	cout << "===== Summary ======" << endl;
	cout << endl;

	cout << "Even Numbers: " << evenCount << endl;
	cout << "Odd Numbers: " << oddCount << endl;
	cout << "Prime Numbers: " << primeCount << endl;
	cout << "Sum of all odd Numbers: " << sumOdd << endl;
	
	cout << endl;
	cout << endl << "===== Program Complete =====" << endl;
}
