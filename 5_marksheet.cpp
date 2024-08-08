#include <iostream.h>
#include <conio.h>
#include <iomanip.h>

// using namespace std;

class Marksheet {
private:
    int marks[3];
    int total;
    float average;
    char grade;

public:
    void accept()
    {
	cout << "Enter marks for 3 subjects: ";
	for(int i = 0; i < 3; i++)
	{
	    cin >> marks[i];
	}
	calculateGrade(); // Initiates the nested function calls
    }

    void calculateTotal()
    {
	total = 0;
	for(int i = 0; i < 3; i++)
	{
	    total += marks[i];
	}
    }

    void calculateAverage()
    {
	calculateTotal(); // Calls calculateTotal() first
	//average = static_cast<float>(total) / 3;
	average = (float)(total)/3;
    }

    void calculateGrade() {
	calculateAverage(); // Calls calculateAverage() first
	if(average >= 90) {
	    grade = 'A';
	} else if(average >= 80) {
	    grade = 'B';
	} else if(average >= 70) {
	    grade = 'C';
	} else if(average >= 60) {
	    grade = 'D';
	} else {
	    grade = 'F';
	}
    }

    void display() {
	cout << "Marks: ";
	for(int i = 0; i < 3; i++) {
	    cout << marks[i] << " ";
	}
	cout << endl;
	cout << "Total Marks: " << total << endl;
	cout << "Average Marks: " << setprecision(2) <<average << endl;
	cout << "Grade: " << grade << endl;
    }
};

int main()
{
    clrscr();
    Marksheet m;
    m.accept();
    m.display();
    getch();
    return 0;
}
