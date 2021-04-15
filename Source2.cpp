#include <iostream>


int main()
{
	double avg, n, inp;
	avg = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> inp;
		avg += inp;
	}
	avg /= n;
	std::cout << avg;
	return 0;

}
