# include <iostream>
using namespace std;
int main(){
	int size;
	cout << "Enter Size: ";
	cin >> size;
	int numbers[size];
	for (int i=0; i<size; i++){
		cin >> numbers[i];
	}
	int largest_value = numbers[0];
	for (int i=0; i<6; i++){
		if (largest_value < numbers[i]){
			largest_value = numbers[i];
		}
	}
	cout << "Largest Value is: " << largest_value << endl;
	return 0;
}