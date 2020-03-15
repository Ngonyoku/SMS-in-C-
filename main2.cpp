#include <iostream>
using namespace std;
/* 
	@Ngonyoku Computer SCience 1.2 Laikipia University Yr 2020
*/
//Check if a value is a Number
bool isANumber(string s){
	for(int i ; i <= s.length() ; i++)
		if(isdigit(s[i]) == false )
			return false;
			
	return true;
}

class StudentInformation{
	protected:
	string RegNo,Address,FullName;
	int Age;
	public:
		StudentInformation(string firstName,string lastName,string address,string regNo,int age){
			FullName = firstName +" "+ lastName;
			Address = address;
			RegNo = regNo ;
			Age = age;
		}
	void displayStdtInfo(){
		cout << " "<<  RegNo << " " << FullName << " " << Address << " " << Age; 
	}
};

class studentMarks : protected StudentInformation{
	protected:
		int n,i;
		float num[10],sum = 0.0,avg;
		
		string RegNo,Address,FullName;
		int Age;
	public:
		studentMarks(string firstName,string lastName,string address,string regNo,int age)
		 : StudentInformation(firstName,lastName,address,regNo,age)
		{
			FullName = firstName +" "+ lastName;
			Address = address;
			RegNo = regNo ;
			Age = age;
			
			cout << "Enter the Number Of Subjects : ";
			cin >> n;
			
			while(n > 10 || n <= 0){
				cout << "Invalid Input \n Please Enter values between 1 and 10 : ";
				cin >> n;
			}
			for	(i = 0 ; i < n ; i++) {
				cout<< "Subject " << i+1 << " : ";
				cin	>> num[i];
				sum += num[i];
			}
			avg = sum/n;
		}
		
		void displayStdtInfo(){
			cout << " "<<  RegNo << FullName << " " << Address << " " << Age << " " << avg ; 
		}	
};

class studentGrade: protected studentMarks{
	private:
		float avg
};

void InputData(){
string fName,lName,addrss,reg,data;
	int age;
	cout << "Enter First Name : " ;
	cin >> fName;
	cout << "Enter Last Name : " ;
	cin >> lName;
	cout << "Enter Adress : " ;
	cin >> addrss;
	cout << "Enter Registration Number : " ;
	cin >> reg;
	cout << "Enter Your Age : " ;
	cin >> age;
	
//	StudentInformation studentInfo(fName,lName,addrss,reg,age);
	studentMarks studentInfo(fName,lName,addrss,reg,age);
	studentInfo.displayStdtInfo();
}

int main(int argc, char** argv) {
	InputData();
	return 0;
}
