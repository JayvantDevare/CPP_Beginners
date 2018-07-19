//CPP Program for writing constructor(default and parameterized)
//constructor is a member function of a class which initializes objects(data members) of class
//constructor has same name as the class itself
//constructor don't have return type
//constructor is automatically get called when object is created
//types 1. default constructor	2. Parameterized constructor	3. copy constructor


#include<iostream>  //Header file declaration

using namespace std;


class FirstClass	//declaration of class 
{
	//data members
	
	public:
			
		string name;
		int rollno;
		
		FirstClass()	//default constructor
		{
			name = "jayvant";
			rollno = 100;
		}
		
		FirstClass(string n, int rno)	//parameterized constructor
		{
			name = n;
			rollno = rno;
		}
		
	   	void displayData();	// function definition inside class

	
};   // end of class

//writting functions outside the class

		
		
void FirstClass :: displayData()     // displayData() function is called outside class function  - it is declared outside class
		{
			
			cout<<"\t\nYour Name	:"<<name;
			
			cout<<"\n\tYour RollNo	:"<<rollno;
			
		}//end of display() function



int main()  //main function
{
	
	FirstClass ob;   // creation of objects automatically calls default constructor;
	
	ob.displayData(); // calling of displayData() display data which is initialized by default constructor
	
	FirstClass ob1("Ganesh",102);   //   calls parametrized constructor;
	
	ob.displayData(); // calling of displayData() display data which is initialized by parameterized constructor
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
