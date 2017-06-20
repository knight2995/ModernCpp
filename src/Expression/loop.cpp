#include <algorithm>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
	vector<int> iVec;

	int i = 8;
	while (i--)
		iVec.push_back(i);

	//Original Sum
	int sum = 0;
	for (auto it = iVec.begin(); it != iVec.end(); it++)
		sum += *it;

	cout << sum << endl;

	//for each -> VC++
	sum = 0;
	for each(auto item in iVec)
	{
		sum += item;
	}
	cout << sum << endl;

	//Ranged base for loop
	sum = 0;
	for (auto item : iVec)
		sum += item;
	cout << sum << endl;

	//for_each + lambda
	sum = 0;
	for_each(iVec.begin(), iVec.end(), [&](auto item) {sum += item; });
	cout << sum << endl;

	//std::sum
	sum = 0;
	sum = accumulate(iVec.begin(), iVec.end(), sum);
	cout << sum << endl;


}