#include <iostream>

int f(int n, int cr = 1, int data = 1) {
	if (cr < n)
		return f(n, cr + 1, data * (cr + 1));
	else
		return data;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << f(5);
	return 0;
}
