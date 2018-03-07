#include <iostream>
#include <string>

#define SUMA(a,b) a + b

using namespace std;

int main() {
	int x, y, sum;
	cout << "Please enter the first number: \n";
	cin >> x;
	cout << "Please enter the second number: \n";
	cin >> y;
	sum = SUMA(x, y);
	cout << "The sum is equal to: " << sum <<endl;
	return 1;
}