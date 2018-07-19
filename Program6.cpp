//CPP Program for addition of two numbers using addition() function with call by value

#include<iostream>  //Header file declaration

using namespace std;

void addition(int num1, int num2) //addition function without parameter
{
	
	int result;
	
	result = num1 + num2;
	
	cout<<" Addition is	:	 "<<result; 	//displaying message on console(screen)
}


int main()  //main function
{
		

		
	addition(100,200); //calling addition function with passing arguments
	
	return 0; 	//returning int value- main function has return type as integer
	
}		// end of main function



