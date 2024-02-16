#include<iostream>

using namespace std;

int swapElements(int arr[], int size) {

int start = 0, end = (size-1);

while(start <= end) {

swap(arr[start], arr[end]);

start++;

end--;

}

}

int printElements(int arr[], int size) {

cout << "REVERSE ARRAY ELEMENTS ARE : ";

for(int i = 0; i < size; i++) {

cout << arr[i] << " ";

}

}

int main() {

int size;

cout << "ENTER THE SIZE OF THE ARRAY : ";

cin >> size;

int arr[size];

cout << "ENTER THE ARRAY ELEMENTS : ";

for( int i = 0; i < size; i++) {

cin >> arr[i];

}

swapElements(arr, size);

printElements(arr, size);

}
