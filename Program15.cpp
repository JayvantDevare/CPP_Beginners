//CPP Program for Exception Handling -  Divide by Zero Error
//Exception Handling contains blocks 1. try   2. throw  3.catch    4.catch(...)

#include<iostream>
#include<string>
using namespace std;
class ExceptionDemo
{
	public:
		int num1;
	 	int num2;
	 	float result;
	 	void DividByZeroException()
	 	{
	 		try     //try block 
     		{
         	cout<<"\n Enter First Number	:	";
         	cin>>num1;
			  
          	if(num1==0)
            	throw 0;		//throw type of exception call appropriate catch() block
            	
            cout<<"\n Enter Second Number	:	";	
          	cin>>num2;
          	
		  	if(num2 == 0) //Check for denominator is 0 or not
            	throw 0; 
            	
           	result = num1 / num2;
            cout<<"\n Result is	:	"<<result;
            
    		 }catch(const int n)   //caught exception and display error message
     		{
        	  cout<<"\nException Caught : Error - Divide by zero(Do Not Enter Zero at Denominator....";
     		}
			catch(...)   //catch(...) will accept all exceptions
			{
			 	cout<<"\nDefault exception.....";
			}
		}
};

int main()
{
     ExceptionDemo ob;
     ob.DividByZeroException();
     
     return 0;
}

