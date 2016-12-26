#include <iostream>
#include <algorithm>

void selectSort(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
				minIndex = j;
		}

		std::swap(arr[i], arr[minIndex]);
	}
}

int main()
{
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	selectSort(arr, 11);

	for (int i = 0; i < 11; i++)
	{
		std::cout << arr[i] << " ";
	}
}