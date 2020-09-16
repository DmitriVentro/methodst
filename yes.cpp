#include <iostream>
#include <cmath>

int main()
{
	float arr[25];
	float tcrx = 4.25;
	float localsum = 0;
	for (size_t i = 0; i < 25; i++)
	{
		std::cout << i + 1 << ") ";
		std::cin >> arr[i];

	}
	for (size_t i = 0; i < 25; i++)
	{
		std::cout << arr[i] << " ";
	}
	for (size_t i = 0; i < 25; i++)
	{
		localsum += pow((arr[i] - tcrx), 2);
	}
	float S = sqrt(localsum / (25 * (25 - 1)));
	std::cout << S;
}
