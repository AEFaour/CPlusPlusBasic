#include <iostream>

using namespace std;

void PrintHBD();
int PrintHBD(string);
string HelloWorld();


void PrintHBD()
{
	cout << "Happy Birthday to you\n";
}

int PrintHBD(string name)
{
	int age;
	cout << "Happy Birthday " << name;
	cout << "\nEnter your age \n";
	cin >> age;
	return age;

}

string HelloWorld(){
    cout << "Hello world!" << endl;
    return 0;
}



int main()
{
    int myAge;
	PrintHBD();
	PrintHBD();

	cout << "Happy Birthday dear user\n";
	cout << PrintHBD("Paul");

	myAge = PrintHBD("Paul");
	HelloWorld();
}
