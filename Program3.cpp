//CPP Program for addition of two numbers using addition function with prototype

//if we write function below the main() function its compulsory to write its prototype above the main() function 

//otherwise it will give error

#include<iostream>  //Header file declaration

using namespace std;

void addition();  //protoype of  addition() function

int main()  //main function
{
		
	addition(); //calling addition function
	
	return 0; 	//returning int value- main function has return type as integer
	
}		// end of main function


void addition() //addition function without parameter
{
	int num1;	// variable declaration
	
	int num2;
	
	int result;
	
	cout<<" Enter First Number	:	"; 	//displaying message on console(screen)
	
	cin>>num1;    //accepting input from console
	
	cout<<" Enter Second Number	:	"; 	//displaying message on console(screen)
	
	cin>>num2;    //accepting input from console
	
	result = num1 + num2;
	
	cout<<" Addition is	:	 "<<result; 	//displaying message on console(screen)
}

