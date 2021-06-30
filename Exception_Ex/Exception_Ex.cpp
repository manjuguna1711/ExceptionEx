// Exception_Ex.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Example : usage of divided by zero exception

#include <iostream>
using namespace std;

//function prototype

void line();
void line(char);

int main()
{
    int a, b;
    double result =0;

    cout << "\nException - Example \n";
    cout << "************************\n";

    cout << " Enter a value : ";
    cin >> a;

    cout << " Enter b value : ";
    cin >> b;

    line(); // calling line again

  try{
    
           if (b != 0)
           {

                                 
               result = a / b;
               cout << "\n\n a /  b = " << result;
           }
          else
           {
              throw string("\nPlease provide non zero to b \n");  // trowing the error message when b gets zero  
           }

  }catch(string error)     // catching the errors throwed
    {
     cout << error;        // display error message
    }


  line('z');
   

    cout << "\n\n";

    return 0;
}

void line()
{

    cout << "\n ";
    for (int i = 0; i < 40; i++)
    {

        cout << "*";
    }
    cout << "\n ";
}

void line(char c)
{

	cout << "\n ";
	for (int i = 0; i < 40; i++)
	{

		cout << c;
	}
	cout << "\n ";
}