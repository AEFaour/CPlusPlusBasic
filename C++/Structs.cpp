#include <iostream>

using namespace std;

struct students
{
	string name; 
	float GPA;
};

int main()
{
	students Teacher;
	Teacher.name = "Paul";
	
	students firstPeriod[10];
	
	firstPeriod[0].name = "Pierre";
	
	firstPeriod[0].GPA = 4.0;
	
	cout << firstPeriod[0].name << endl;
	
	return 0;

}
