// #include <iostream>

// using namespace std;

// int main()
// {
//     const float MAX_MARKS = 500;
//     int marksOfMath, marks_of_chemistry, marks_of_physics, marks_of_urdu, marks_of_english;
//     float total_percentage;
//     int obtained_marks;

//     cout << "Enter the marks of Math: ";
//     cin >> marksOfMath;

//     cout << "Enter the marks of Chemistry: ";
//     cin >> marks_of_chemistry;

//     cout << "Enter the marks of Physics: ";
//     cin >> marks_of_physics;

//     cout << "Enter the marks of Urdu: ";
//     cin >> marks_of_urdu;

//     cout << "Enter the marks of English: ";
//     cin >> marks_of_english;

//     obtained_marks = marksOfMath + marks_of_chemistry + marks_of_physics + marks_of_urdu + marks_of_english;
//     cout <<"Total marks obtained:"<< obtained_marks << endl;

//     total_percentage = (obtained_marks / MAX_MARKS) * 100;
//     cout <<"Total percentage obtained:"<< total_percentage<<endl;

//     if (total_percentage >= 60)
//     {
//         cout << "You secur: First Division";
//     }
//     else
//     {
//         if (total_percentage >= 50)
//         {
//             cout << "You Secur: Second Division";
//         }
//         else
//         {
//             if (total_percentage >= 40)
//             {
//                 cout << "You Secur: Third Division";
//             }
//             else
//                 cout << "You Secur: Greate Position(Fail)";
//         }
//     }

//     return 0;
// }

// Next Program //

// #include <iostream>
// using namespace std;

// int main()
// {
//     int a, b, c, big;

//     cin >> a >> b >> c;
//     if (a > b && a > c)
//     {
//         cout << "A is the biggest number";
//     }
//     else
//     {
//         if (b > a && b > c)
//         {
//             cout << "B is the biggest number";
//         }
//         else

//         {
//             if (c > a && c > b)
//             {
//                 cout << "C is the greates biggest";
//             }
//             else
//             cout<<"All number is the Same";
//         }
//     }

//     return 0;
// }

// Next Program //
// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     const int legalAgeThreshold = 18;
//     int age;
//     bool isAdult = false;
//     string userName, mobileNumber;

//     cout << "Enter your age: ";
//     cin >> age;
//     cin.clear();
//     cin.sync();
//     // getline (cin, age);

//     if (age >= legalAgeThreshold)
//     {
//         isAdult = true;
//     }

//     if (isAdult)
//     {
//         cout << "Please Enter your Name: ";
//         getline(cin, userName);

//         cout << "Please enter your mobile number: ";
//         getline(cin, mobileNumber);
//         cout << "\n################################"<<endl;
//         cout << "Your Name: " << userName << endl
//              << "Your Mobile Number: " << mobileNumber << endl;
//     }

//     cout << "Thanku for having interest\n\n";

//     return 0;
// }

// Next Program //
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int jobScaleLevel, basicSalary;

    cout << "Enter your Basic Salar: ";
    cin >> basicSalary;
    cin.clear();
    cin.sync();

    cout << "Enter your Job Scale Level: ";
    cin >> jobScaleLevel;
    cin.clear();
    cin.sync();

    // getline (cin, age);

    if (jobScaleLevel >= 5 && jobScaleLevel <= 8)
    {
        if (basicSalary >= 100000)
        {
            cout << "Your Medical Allonce is: 25000";
        }
        else
        {
            if (basicSalary < 100000)
            {
                cout << "Your Medical Allonce is: 15000";
            }
            cout << "Not found";
        }
    }
    else
    {
        if (jobScaleLevel >= 1 && jobScaleLevel <= 4)
        {
            if (basicSalary >= 200000)
            {
                cout << "Your Medical Allonce is: 75000";
                cout << "Your Fuel Allonce is: 20000";
            }
            else
            {
                if (basicSalary < 200000)
                {
                    cout << "Your Medical Allonce is: 50000";
                    cout << "Your Fuel Allonce is: 15000";
                }
                cout << "Not found";
            }
        }
    }

    // if (jobScaleLevel <= 4)
    //     {
    //         if (basicSalary >= 100000)
    //         {
    //             cout << "Your Medical Allonce is: 25000";
    //         }
    //         else
    //         {
    //             if (basicSalary < 100000)
    //             {
    //                 cout << "Your Medical Allonce is: 15000";
    //             }
    //         }
    //     }
    //     else
    //     {
    //         if (jobScaleLevel <= 8)
    //         {
    //             if (basicSalary >= 200000)
    //             {
    //                 cout << "Your Medical Allonce is: 75000";
    //                 cout << "Your Fuel Allonce is: 20000";
    //             }
    //             else
    //             {
    //                 if (basicSalary < 200000)
    //                 {
    //                 cout << "Your Medical Allonce is: 50000";
    //                 cout << "Your Fuel Allonce is: 15000";                }
    //             }
    //         }
    //     }
    //
    return 0;
}