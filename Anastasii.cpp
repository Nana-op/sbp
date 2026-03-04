#include <iostream>

#include <string>

using namespace std;

int main()
{
	int** arr = naw int* [3];

	for (int i = 0; i < 3; i++)
	{
		arr[i] = nea int[3];
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	arr = nullptr;
}