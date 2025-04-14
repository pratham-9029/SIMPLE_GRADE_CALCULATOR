#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter Your Marks : ";
    cin >> marks;

    (marks >= 91 && marks <= 100)
        ? grade = 'A'
    : (marks >= 71 && marks <= 90)
        ? grade = 'B'
    : (marks >= 51 && marks <= 70)
        ? grade = 'C'
    : (marks >= 35 && marks <= 50)
        ? grade = 'D'
        : grade = 'F';

        cout << "Your Grade is " << grade ;

        switch(grade){
            case 'A':
            cout << " Excellent Work !";
            break;
            
            case 'B':
            cout << " Well Done.";
            break;

            case 'C':
            cout << " Good Job.";
            break;

            case 'D':
            cout << " You Passed , but you could do better.";
            break;

            case 'F':
            cout << " Sorry,You failed";
            break;

            default:
            cout << " Error !";
            break;
        }

        if(grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
        {
            cout << " You are eligible for next level.";
        }
        else
        {
            cout << " Better Luck Next Time.";
        }

    return 0;
}