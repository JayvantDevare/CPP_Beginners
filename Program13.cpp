//CPP Program for writing copy constructor
//Copy constructor is member function of class which initializes an object using another of the same class
//syntax for copy constructor -  class_name(class_name &object)name)
//(ob1=ob2) we can not not directly assigne values of one object to another 
//copy constructor is used for (ob1=ob2)

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
		
		FirstClass(FirstClass &ob1)	//copy constructor
		{
			name = ob1.name;
			rollno = ob1.rollno;
		}
		
	   	void displayData();	// function definition inside class

	
};   // end of class

//writting functions outside the class

		
		
void FirstClass :: displayData()     // displayData() function is called outside class function  - it is declared outside class
		{
			
			cout<<"\n\tYour Name	:"<<name;
			
			cout<<"\n\tYour RollNo	:"<<rollno;
			
		}//end of display() function



int main()  //main function
{
	
	FirstClass ob1;   // creation of objects automatically calls default constructor;
	
	FirstClass ob2;
	
	ob2=ob1;	//calls copy constructor- copies values of ob1 into ob2 objects
	
	ob2.displayData(); // calling of displayData() display data which is initialized by parameterized constructor
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
