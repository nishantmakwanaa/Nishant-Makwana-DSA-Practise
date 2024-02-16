#include<iostream>

using namespace std;

void reverseArray(int arr[], int size) {

cout << "REVERSE ARRAY ELEMENTS ARE : ";

for(int i = (size-1); i >= 0; i--) {

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

reverseArray(arr, size);

return 0;

}