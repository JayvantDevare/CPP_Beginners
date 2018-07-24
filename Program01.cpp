//CPP Program to print Hello, with your name

#include<iostream>  //Header file declaration

using namespace std;

int main()  //main function
{
	
	char name[10];	// variable declaration
	
	cout<<" Enter Your Name	:	"<<endl; 	//displaying message on console(screen)
	
	cin>>name;    //accepting input from console
	
	cout<<" Hello, "<<name; 	//displaying message on console(screen)
	
	return 0; 	//returning int value- main function has return type as integer
	
}	// end of main function
