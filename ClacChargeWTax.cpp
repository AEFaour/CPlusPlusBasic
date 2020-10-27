#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

const float TAX_RATE = .04;

int main(){
	string name; 
	float price = 4.50;
	int qty = 0;
	float charge = 0, taxCharge = 0; 
	
	cout << "Enter the number you wish to order : \n";
	cin >> qty; 
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	
	charge = price * qty; 
	
	taxCharge = charge * TAX_RATE; 
	
	cout << "The tax charged is : $" << setprecision(2) << taxCharge << endl;
	charge = charge + taxCharge; 
	
	cout << " Your total charge: $ " << setprecision(2) << charge << endl;
	
	return 0;
}
