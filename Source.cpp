#include <iostream>
using namespace std;
void bubble_sort(int[], int); 
void print(int[], int);
int main() {
	int arr[] = { 1,5,4,8,8,6,1,3,9,2 };
	int len = sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	print(arr, len);
	return 0;
}
void bubble_sort(int arr[], int len) {
	bool sorted = true;
	int i = 0;
	while (sorted) {
		sorted = false;
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				sorted = true;
				/*arr[j] = arr[j] + arr[j + 1]; 
				arr[j + 1] = arr[j] - arr[j +1];
				arr[j] = arr[j] - arr[j + 1];*/

			}
		}
		i++;
	}
} 
void print(int arr [],int len ) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}
	
