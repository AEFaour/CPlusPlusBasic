#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	bool player1Turn = true;
	bool gameOver = false; 
	int chipsInPile = 0;
	int chipsTaken =0;
	
	cout << "How many chips would you like in your starting pile? \n";
	
	cin >> chipsInPile; 
	
	cout << "This round will start with " << chipsInPile << " chips in the pile \n";
	
	return 0; 
}
