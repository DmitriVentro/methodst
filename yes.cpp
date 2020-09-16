#include <iostream>
#include <cmath>
const int n = 25;
int main()
{
	
	float arr[n];
	float arr1[n];
	float tcrx = 4.25;
	float localsum = 0;
	float localsum1 = 0;
	for (size_t i = 0; i < n; i++)
	{
		std::cout << i + 1 << ") ";
		std::cin >> arr[i];

	}
	std::cout << std::endl;
	for (size_t i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
	for (size_t i = 0; i < n; i++)
	{
		localsum += pow((arr[i] - tcrx), 2);
	}
	float S = sqrt(localsum / (n * (n - 1)));
	std::cout << S;
}
