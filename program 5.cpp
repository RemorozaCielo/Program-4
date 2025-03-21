#include <iostream>
using namespace std;

int main()

{
	int NumGrades=0;
	double grades=0.00;
	double total=0.00,GradeAv=0.00;

	for (NumGrades = 0;; NumGrades++)

	{
		cout << "\tEnter the Grade for Quarter " << (NumGrades+1) 
		<< ".  (Press -1 To Stop ) : ";
		cin >> grades;

		total += grades;

		
		if (grades == -1) {
			GradeAv = ((total / NumGrades));
			cout << "\n\n\tThe average of Grade is: " << 
		     GradeAv<< ".";		
			break;
		}
		
