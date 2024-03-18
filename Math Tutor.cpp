/* MUHAMMAD HAYYAN
23I-2041__CY-A
Assignment#03___Q15 */

#include<iostream>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()
{
		//Program for math tutor for young students
	int num1, num2, sum, diff, prod, div, rem;
	char c;
	
	cout<< "\nEnter first number:\t";
	cin>> num1;
	cout<< "\nEnter second number:\t";
	cin>> num2;
	
		//calculating sum
	sum = num1 + num2;
	
	cout<<"\n\n\n"<<setw(50)<<num1<<endl;
	cout<<setw(48)<<"+ "<<num2<<endl;
	cout<<setw(50)<<"__________"<<endl;
	
	cin.ignore();
	cout<<"Press Enter to check";		//holding screen using cin.get and ignore function
	cin.get();
	cout<<setw(50)<<sum<<endl;
	
		//calculating difference
	diff = num1 - num2;
	
	cout<<"\n\n\n"<<setw(50)<<num1<<endl;
	cout<<setw(48)<<"- "<<num2<<endl;
	cout<<setw(50)<<"__________"<<endl;
	
	
	cout<<"Press Enter to check";		//holding screen using cin.get function
	cin.get();
	cout<<setw(50)<<diff<<endl;
	
		//calculating product
	prod = num1 * num2;
	
	cout<<"\n\n\n"<<setw(50)<<num1<<endl;
	cout<<setw(48)<<"x "<<num2<<endl;
	cout<<setw(50)<<"__________"<<endl;
	
	
	cout<<"Press Enter to check";		//holding screen using cin.get function
	cin.get();
	cout<<setw(50)<<prod<<endl;
	
		//calculating division
	div = num1/num2;
	
	cout<<"\n\n\n"<<setw(50)<<num1<<endl;
	cout<<setw(48)<<"/ "<<num2<<endl;
	cout<<setw(50)<<"__________"<<endl;
	
	
	cout<<"Press Enter to check";		//holding screen using cin.get function
	cin.get();
	cout<<setw(50)<<div<<endl;
	
		//calculating remainder
	rem = num1%num2;
	
	cout<<"\n\n\n"<<setw(50)<<num1<<endl;
	cout<<setw(48)<<"% "<<num2<<endl;
	cout<<setw(50)<<"__________"<<endl;
	

	cout<<"Press Enter to check";		//holding screen using cin.get function
	cin.get();
	cout<<setw(50)<<rem<<endl;
	
	return 0;
}
