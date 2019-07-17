#include <iostream>

#include <vector>


void BubbleSort(std::vector<int> v)
{
	auto swap = true;

	while (swap == true)
	{
		int notSwaped = 0;

		int a = v.size();

		a = a - 1;

		int c = a;

		int b = 0;

		for (int i = 0; i < a; i++)
		{
			b++;

			if (v[b] < v[i])
			{
				std::swap(v[b], v[i]);
			}
			else
			{
				notSwaped++;
			}

			if (notSwaped == c)
			{
				swap = false;
			}
		}
	}

	for (auto vElement : v)
	{
		std::cout << vElement << ", ";
	}

	std::cin.get();
}

void InsertionSort(std::vector<int> v)
{
	bool swap = true;

	while (swap == true)
	{
		int notSwaped = 0;

		int a = v.size();

		a = a - 1;

		int c = a;

		int b = 0;

		for (int i = 1; i < a; i++)
		{
			if (v[i] < v[b])
			{
				std::swap(v[b], v[i]);
			}
			if (i = v.size())
			{
				swap = false;
			}
		}
	}

	for (auto vElement : v)
	{
		std::cout << vElement << ", ";
	}

	std::cin.get();
}

void QuickSort(std::vector<int> a, int first, int last)
{
	int i, j, pivot;

	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;

		while (i < j)
		{
			while (a[i] <= a[pivot]&&i<last)
				i++;
			while (a[j] > a[pivot])
				j--;
			if (i < j)
			{
				std::swap(a[i], a[j]);
			}
		}

		std::swap(a[pivot], a[j]);

		QuickSort(a, first, j - 1);
		QuickSort(a, j + 1, last);

	}
	
	for (auto vElement : a)
	{
		std::cout << vElement << ", ";
	}

	std::cin.get();
}

int main()
{

	std::vector<int> v = {8, 3, 7, 6, 13, 41, 51, 16, 2, 4, 10, 19};

	int last = v.size();

	BubbleSort(v);

	InsertionSort(v);

	QuickSort(v, 0, last - 1);

};
