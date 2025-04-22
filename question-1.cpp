#include<iostream>
using namespace std;

//Declaring User Define Functions
int add(int x , int y);
int sub(int x , int y);
int prod(int x , int y);
float divide(float x , float y);
int modulas(int x , int y);

int main()
{
    // Declaring Variable's For Taking Number's
    int num_1,num_2;
    int choice;
    do
    {
        // Giving Choice To User To Select Any Opretion's
        cout << endl << "---- Welcome To Calculator----" << endl;
        cout << endl << "Choose Any Opration To Perform" << endl;
        cout << endl << "------------------------------ "<< endl << endl;
        cout << "Enter 1 To Perform Addition." << endl;
        cout << "Enter 2 To Perform Subtraction." << endl;
        cout << "Enter 3 To Perform Multiplication." << endl;
        cout << "Enter 4 To Perform Division." << endl;
        cout << "Enter 5 To Perform Modulas." << endl;
        cout << "Enter 0 To Exit." << endl;
        cout << endl << "------------------------------ "<< endl << endl;
        // Taking Input Of Opration To Perform
        cout << "Enter Your Choice :- " ;
        cin >> choice;
        //Taking Switch Case
        switch (choice)
        {
        // Using Case 0 To Print A Exit Statment
        case 0:
            cout << "---------------------------------" << endl;
            cout << "The Program Is Sucessfully Exited." << endl;
            cout << "---------------------------------" << endl;
            break;
        // Using CAse 1 To Print Addtion Statement
        case 1:
            cout << "Enter A Number : ";
            cin >> num_1;
            cout << "Enter Another Number : ";
            cin >> num_2;
            cout << "The Sum Of "<<num_1<<" And "<<num_2<<" Is :- "<< add(num_1,num_2) <<"." << endl;
            break;
        // Using Case 2 To Print Subraticen Statement
        case 2:
            cout << "Enter A Number : ";
            cin >> num_1;
            cout << "Enter Another Number : ";
            cin >> num_2;
            cout << "The Subtraction Of "<< num_1 <<" And "<< num_2 <<" Is :- "<< sub(num_1,num_2) <<"." << endl;
            break;
        // Using Case 3 To Print Product Statement
        case 3:
            cout << "Enter A Number : ";
            cin >> num_1;
            cout << "Enter Another Number : ";
            cin >> num_2;
            cout << "The Multiplication Of "<< num_1 <<" And "<< num_2 <<" Is :- "<< prod(num_1,num_2) <<"." << endl;
            break;
        // Using Case 4 To Print Division Statement
        case 4:
            cout << "Enter A Number : ";
            cin >> num_1;
            cout << "Enter Another Number : ";
            cin >> num_2;
            cout << "The Division Of "<< num_1 <<" And "<< num_2 <<" Is :- "<< divide(num_1,num_2) <<"." << endl;
            break;
        // Using Case 5 To Print Module Statement
        case 5:
            cout << "Enter A Number : ";
            cin >> num_1;
            cout << "Enter Another Number : ";
            cin >> num_2;
            cout << "The Modulas Of "<< num_1 <<" And "<< num_2 <<" Is :- "<< modulas(num_1,num_2) <<"." << endl;
            break;
        default:
            cout << "Sorry Wrong Input! Input Between (1-5)";
            break;
        }
    } while (choice != 0);
    return 0;
}
// Defining add ()
int add(int x , int y)
{
    int sum = x + y;
    return sum;
}
// Defining sub ()
int sub(int x , int y)
{
    int sub = x - y;
    return sub;
}
// Defining prod ()
int prod(int x , int y)
{
    int product = x * y;
    return product;
}
// Defining divide ()
float divide(float x , float y)
{
    if (x == 0 || y == 0)
    {
        cout << "Error! Division With Zero is Not Allowed";
    }
    else
    {
        float division = x / y;
    }
    float division = x / y;
    return division;    
}
// Defining mod ()
int modulas(int x , int y)
{
    int module = x % y;
    return module;
}