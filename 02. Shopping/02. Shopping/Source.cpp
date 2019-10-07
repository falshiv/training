#include<iostream>
#include<string>

using namespace std;

int main()
{
	double budget = 0;
	int numVideo = 0, numPro = 0, numRam = 0;
	cin >> budget >> numVideo >> numPro >> numRam;

	double priseVideo = 250 * numVideo;
	double prisePro = (priseVideo * 0.35) * numPro;
	double priseRam = (priseVideo * 0.10) * numRam;
	double sum = priseVideo + prisePro + priseRam;

	if (numVideo > numPro)
	{
		sum -= sum * 0.15;
	}
	cout.setf(ios::fixed);
	cout.precision(2);
	if (budget >= sum)
	{
		cout << "You have " << budget - sum << " leva left!" << endl;
	}
	else
	{
		cout << "Not enough money! You need " << sum - budget << " leva more!" << endl;
	}

	system("pause");
	return 0;
}