#include<iostream>
using namespace std;
int main() {
	
	int student;
	cout<<"Enter number of Students : "; cin>>student;
	
	int passCount = 0, failCount = 0;
	float highestPercentage = 0;
	string topperName;
	
	for(int i=1; i<=student; i++) {
		string name;
		cout<<"\nName of the Student"<<" "<<i<<": "; cin>>name;
		
		int total = 0;
		int subject1, subject2, subject3, subject4, subject5;
		
		cout<<"Marks for 5 subjects (0-100) : \n";
		
		do {
            cout << "Subject 1: ";
            cin >> subject1;
            if(subject1 < 0 || subject1 >100) {
            	cout<<"Invalid marks entered!\n";
            	cout<<"Enter Again (0-100) \n"; }
        } while (subject1 < 0 || subject1 > 100);
        do {
            cout << "Subject 2: ";
            cin >> subject2;
            if(subject2 < 0 || subject2 >100) {
            	cout<<"Invalid marks entered!\n";
            	cout<<"Enter Again (0-100) \n"; }
        } while (subject2 < 0 || subject2 > 100);
        do {
            cout << "Subject 3: ";
            cin >> subject3;
            if(subject3 < 0 || subject3 >100) {
            	cout<<"Invalid marks entered!\n";
            	cout<<"Enter Again (0-100) \n"; }
        } while (subject3 < 0 || subject3 > 100);
        do {
            cout << "Subject 4: ";
            cin >> subject4;
            if(subject4 < 0 || subject4 >100) {
            	cout<<"Invalid marks entered!\n";
            	cout<<"Enter Again (0-100) \n"; }
        } while (subject4 < 0 || subject4 > 100);
        do {
            cout << "Subject 5: ";
            cin >> subject5;
            if(subject5 < 0 || subject5 >100) {
            	cout<<"Invalid marks entered!\n";
            	cout<<"Enter Again (0-100) \n"; }
        } while (subject5 < 0 || subject5 > 100);
        
        total = subject1 + subject2 + subject3 + subject4 + subject5;
        float percentage = total / 5.0;

		char grade;
		percentage = total/5.0;
		if (percentage>=85) 
		grade = 'A';
		else if (percentage>=70) 
		grade = 'B';
		else if (percentage>=50) 
		grade = 'C';
		else if (percentage>=40) 
		grade = 'D';
		else
		grade = 'F';
		
		bool isPass = true;
        if (subject1 < 40 || subject2 < 40 || subject3 < 40 || subject4 < 40 || subject5 < 40)
            isPass = false;

		if(isPass) {
			passCount++;
		} else {
			failCount++;
		}
		
		if (percentage > highestPercentage) {
			highestPercentage = percentage;
			topperName = name;
		}
		cout<<"\n========RESULT=========";
		cout<<"\nName: "<<name;
		cout<<"\nTotal Marks: 500";
		cout<<"\nMarks Obtained : "<<total;
		cout<<"\nPercentage: "<<percentage<<" %\n";
		cout<<"\nGrade: "<<grade;
		
		if(isPass)
		cout<<"\nStatus: Pass";
		else
		cout<<"\nStatus: Fail";
		cout<<"\n========================\n";
	}
	
	cout<<"\n====Class Summary====\n";
	cout<<"\nPassed Students: "<<passCount;
	cout<<"\nFailed Students: "<<failCount;
	cout<<"\nHighest Percentage: "<<highestPercentage<<" % by  "<<topperName<<endl;
	system("pause");
	cout<<endl;
	return 0;
}
