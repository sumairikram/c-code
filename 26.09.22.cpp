// #include <iostream>
// using namespace std;

// int main()
// {

//     // Declaration of variables.
//     int age;


//     // Taking user input (age).
//     cout << "Please enter age in whole numbers: ";
//     cin >> age;

//     // Deciding adult status or not.

//     if (age >= 18)
//     {

//         cout << "Adult";
//     }
//     else
//     {
//         if (age >= 13)
//         {
//             cout << "Teenager";
//         }
//         else
//         {
//             if (age > 2){
//                 cout << "Child";
//             }
//             else
//             {
//                 cout << "Baby";
//             }
//         }
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    // Declaration of variables.
    int days;

    // Taking user input (age).
    cout << "Please enter days: ";
    cin >> days;

    // Deciding adult status or not.

    if (days > 30)
    {

        // cout << "You pay fine amount of: 50 Paise";
        cout << "Your Membership has been cancled";
    }
    else
    {
        if (days >= 11)
        {
            cout << "You pay fine of rupees: 5";
        }
        else
        {
            if (days >= 6)
            {
                cout << "You pay fine of rupees: 1";
            }
            else
            {
                cout << "You pay fine of rupees: 50 Paise";
            }
        }
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main() {

// Declaration of variables.
// int small, large, temp;

// // Taking user input (age).
// cout << "Enter small number : ";
// cin >> small;
// cout << "Enter large number : ";
// cin >> large;

// // Deciding adult status or not.

// if ( small > large ) {
//     temp = small;
//     small = large;
//     large = temp;

//     cout << "Value of Small after swaping: "<<small<<endl ;
//     cout << "Value of Large after swaping: "<<large ;

// }
// else {
//     cout << "Value of Small in origional format: "<<small<<endl ;
//     cout << "Value of Large in origional format: "<<large ;
// }

//       int n;

//     // Taking user input (age).
//     cout << "Enter number : ";
//     cin >> n;

//     // Deciding adult status or not.

//     if ( n / 2 == 0 ) {

//         cout << "number is Even";

//     }
//     else {
//         cout << "number is Odd";

//     }

//     return 0;
// }