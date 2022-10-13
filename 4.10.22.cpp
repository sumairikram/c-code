#include <iostream>
// #include <direct.h> //for delay
#include <conio.h>
#include <windows.h>
using namespace std;
int main()
{

    // int enterSubjectsMarks, percentageofEnglish;
    // char again;
    // int totalSubjects = 4;

    // do
    // {

    //     for (int i = 0; i <= totalSubjects; i++)
    //     {
    //         cin >> enterSubjectsMarks;

    //         cout << enterSubjectsMarks;
    //         // while(int j= 0, )
    //         if (i == 0)
    //         {
    //             cout << "Number of first Subject:" << enterSubjectsMarks << endl;
    //             // percentageofEnglish = enterSubjectsMarks;
    //             percentageofEnglish = percentageofEnglish + enterSubjectsMarks;
    //             cout << "\n"
    //                  << percentageofEnglish;
    //         }
    //         else if (i == 1)
    //         {
    //             cout << "Number of first Subject:" << enterSubjectsMarks;
    //         }
    //         else if (i == 2)
    //         {
    //             cout << "Number of first Subject:" << enterSubjectsMarks;
    //         }
    //         else if (i == 3)
    //         {
    //             cout << "Number of first Subject:" << enterSubjectsMarks;
    //         }

    //         else if (i == 4)
    //         {
    //             cout << "Number of first Subject:" << enterSubjectsMarks;
    //         }
    //     }

    //     cout << "Do you calculate another student Marks? (Y/N): ";
    //     cin >> again;

    // }

    // while (again == 'Y' || again == 'y');
    // system("pause");

    bool furtherStudentsPresent = true;
    char continuationChoice;
    float engMarks, mathMarks, phyMarks, chemMarks, bioMarks;
    float engMarksSum = 0, mathMarksSum = 0, phyMarksSum = 0, chemMarksSum = 0, bioMarksSum = 0;
    int studentCount = 0;

    while (furtherStudentsPresent)
    {

        cout << "####################\n";
        cout << "Student Marks Analyzer\n";
        cout << "####################\n\n";

        cout << "New Student Marks Form\n";
        cout << "**********************\n";

        studentCount++;

        cout << "STUDENT #: " << studentCount << endl;

        cout << "Enter Percentage of English Marks: ";
        cin >> engMarks;

        while (!(engMarks >= 0 && engMarks <= 100))
        {
            cout << "Re-enter the  Percentage of English Marks: ";
            cin >> engMarks;
        }

        engMarksSum = engMarksSum + engMarks;

        cout << "Enter Percentage of Math Marks: ";
        cin >> mathMarks;

        while (!(mathMarks >= 0 && mathMarks <= 100))
        {
            cout << "Re-enter the  Percentage of Math Marks: ";
            cin >> mathMarks;
        }
        mathMarksSum = mathMarksSum + mathMarks;

        cout << "Enter Percentage of Physics Marks: ";
        cin >> phyMarks;

        while (!(phyMarks >= 0 && phyMarks <= 100))
        {
            cout << "Re-enter the  Percentage of Physics Marks: ";
            cin >> phyMarks;
        }
        phyMarksSum = phyMarksSum + phyMarks;

        cout << "Enter Percentage of Chemistry Marks: ";
        cin >> chemMarks;

        while (!(chemMarks >= 0 && chemMarks <= 100))
        {
            cout << "Re-enter the  Percentage of Chem Marks: ";
            cin >> chemMarks;
        }
        chemMarksSum = chemMarksSum + chemMarks;

        cout << "Enter Percentage of Biology Marks: ";
        cin >> bioMarks;

        while (!(bioMarks >= 0 && bioMarks <= 100))
        {
            cout << "Re-enter the  Percentage of Biology Marks: ";
            cin >> bioMarks;
        }
        bioMarksSum = bioMarksSum + bioMarks;

        cout << "\n\n----------------------------------------------------\n\n";

        cout << "Are there any more students? (Y / N): ";
        cin >> continuationChoice;

        if (continuationChoice == 'N' || continuationChoice == 'n')
        {
            furtherStudentsPresent = false;
        }
        system("CLS");
    }

    cout << "####################\n";
    cout << "Student Marks Analyzer\n";
    cout << "####################\n\n";

    Sleep(10000);

    cout << "Student Marks Analysis Report\n";
    cout << "*****************************\n\n";

    cout << "Average English Marks: " << engMarksSum / studentCount << " %" << endl;
    cout << "Average Math Marks: " << mathMarksSum / studentCount << " %" << endl;

    cout << "Average Phycis Marks: " << phyMarksSum / studentCount << " %" << endl;

    cout << "Average Chemistry Marks: " << chemMarksSum / studentCount << " %" << endl;

    cout << "Average Biology Marks: " << bioMarksSum / studentCount << " %" << endl;

    cout << "\nOverall Class Average: ";
    cout << "\n##########################\n\n";

    cout << "Class Average: " << (engMarksSum + mathMarksSum + phyMarksSum + chemMarksSum + bioMarksSum) / (studentCount * 5) << " %";

    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a = 5, b = 9;

//     cout << "A: " << a << endl;
//     cout << "B: " << b << endl;
//     cout << "\nAfter swaping" << endl;

//     a = a + b;
//     b = a - b;
//     a = a - b;

//     cout << "A: " << a << endl;
//     cout << "B: " << b << endl;

//     return 0;
// }