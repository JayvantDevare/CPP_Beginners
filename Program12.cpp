//CPP Program for Constructor and Destructor


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
		
		~ FirstClass()	//destructor
		{
			cout<<"\n Destructor is get called";
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
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
