#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int* A = new int[n];
	for (int i = 0; i < n; i++) {
		std::cin >> A[i];
	}
	int Max, nMax, Min, nMin;
	Max = Min = A[0];
	for (int i = 0; i < n; i++)
	{
		if (Max < A[i])
			Max = A[i];
		if (Min > A[i])
			Min = A[i];
	}
	nMax = nMin = (n - 1) / 2 + 1;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == Min)
			nMin -= 1;
		if (A[i] == Max)
			nMax -= 1;
	}
	int fMax, fMin;
	for (int k = 0; k < nMin; k++)
	{
		fMin = Min;

		for (int i = 0; i < n; i++)
		{
			if (A[i] != Min)
				if (fMin = Min)
					fMin = A[i];
				else
					if (fMin > A[i])
						fMin = A[i];
		}

		for (int i = 0; i < n; i++)
			if (A[i] == fMin)
				A[i] == fMin;
	}
	for (int k = 0; k < nMax; k++)
	{
		fMax = Max;

		for (int i = 0; i < n; i++)
		{
			if (A[i] != Max)
				if (fMax = Max)
					fMax = A[i];
				else
					if (fMax < A[i])
						fMax = A[i];
		}

		for (int i = 0; i < n; i++)
			if (A[i] == fMax)
				A[i] == fMax;
	}
	for (int i = 0; i < n; i++)
		if ((A[i] != Max) && (A[i] != Min))
		{
			std::cout << A[i];
			break;
		}
	delete A[]; 
	return 0;

}
