//CPP Program for writing getter and setter method
//if the data members of class are private we can not access them outside class
//by using getter and setter methods we can access private data members outside the class
//using setter method we can validate values

#include<iostream>  //Header file declaration

using namespace std;


class FirstClass	//declaration of class 
{
	//data members
	
	private:
			
		string name;
		int rollno;
		
	public:
		
	string getName()  //getter method for name
	{
		return name;
	}

	void setName(string n) //setter method for name
	{
		name=n;
	}
	
	
	int getRollno()	//getter method for Rollno
	{
		return rollno;
	}
	
	void setRollno(int rno)	//setter method for Rollno.
	{
		 rollno=rno;
	}
	
};   // end of class



int main()  //main function
{
	
	FirstClass ob;   // creation of objects automatically calls default constructor;
	
	ob.setName("jayvant");
	ob.setRollno(501);
	
	cout<<"\n\t Your Roll No 	:	"<<ob.getRollno();
	cout<<"\n\t Your Name 	:	"<<ob.getName();
	
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
