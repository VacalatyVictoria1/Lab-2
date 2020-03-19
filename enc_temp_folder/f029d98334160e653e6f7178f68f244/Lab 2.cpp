#include <iostream>
#include<string>
#include<cstdlib>

using namespace std;

struct Date
{
    short day;
    short month;
    short  year;
    bool isCorrect();
};

bool Date::isCorrect()
{
    bool result = false;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        if ((day <= 31) && (day > 0))
        {
            result = true;
            break;
        }
    }
    case 4:
    case 6:
    case 9:
    case 11:
    {
        if ((day <= 30) && (day > 0))
        {
            result = true;
            break;
        }
    }
    case 2:
    {
        if (year % 4 != 0)
        {
            if ((day <= 28) && (day > 0))
                result = true;
        }
        else
            if (year % 400 == 0)
            {
                if ((day <= 29) && (day > 0))
                    result = true;
            }
            else
                if ((year % 100 == 0) && (year % 400 != 0))
                {
                    if ((day == 28) && (day > 0))
                        result = true;
                }
                else
                    if ((year % 4 == 0) && (year % 100 != 0))
                        if ((day <= 29) && (day > 0))
                            result = true;
        break;
    }
    default:
        result = false;
    }
    return result;
}
struct Student
{
	char F[56];
	char I[56];
	char O[56];
	char gender[10];
	char nat[56];
	unsigned int height;
	unsigned int weight;
	Date bith;
	unsigned int Phone_number;
	unsigned int postcode;
	char country[56];
	char region[56];
	char area[56];
	char town[56];
	char street[56];
	unsigned int house;
	unsigned int apartment;
	char university[256];
	unsigned int course;
	double ball_average;
	char specialty[256];

    void Print()
       // Student struc[D];
    
    {
       // for (int i = 0; i < D; i++)
        {
            cout << "\nStudent: " << F << " " << I << " " << O << endl;
            cout << "Gender: " << gender << endl;
            cout << "Nationality: " << nat << endl;
            cout << "Height: " << height << endl;
            cout << "Weight: " << weight << endl;
            cout << "Date of bith: " << bith.day << "." << bith.month << "." << bith.year << endl;
            cout << "Phone number: " << Phone_number << endl;
            //cout << "Home adress: " << struc[i].home_adress << endl;
            cout << "Postcode: " << postcode << endl;
            cout << "Country: " << country << endl;
            cout << "Region: " << region << endl;
            cout << "Area: " << area << endl;
            cout << "Town: " << town << endl;
            cout << "Street: " << street << endl;
            cout << "House number: " << house << endl;
            cout << "Apartment number: " << apartment << endl;
            cout << "University: " << university << endl;
            cout << "Course: " << course << endl;
            cout << "Ball average: " << ball_average << endl;
            cout << "Specialty: " << specialty << endl;
        }
    }

};


void Write(Student* struc, int D)
{
    {
        for (int i = 0; i < D; i++)
        {
            cout << endl;
            cout << "Enter the surname: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[D].F, 56);

            cout << "Enter the name: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[D].I, 56);

            cout << "Enter the middle name: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[D].O, 56);

            cout << "Enter the gender: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[D].gender, 10);

            cout << "Enter the nationality: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[D].nat, 56);

            cout << "Enter the height: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].height;

            cout << "Enter the weight: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].weight;

            do
            {
                cout << "Enter the date of bith: " << endl;
                cin.ignore(cin.rdbuf()->in_avail());
                cin >> struc[i].bith.day >> struc[i].bith.month >> struc[i].bith.year;
            } while (!struc[i].bith.isCorrect());

            cout << "Enter the phone number: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].Phone_number;

            cout << "Enter the home adress: " << endl;;
            /*cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].home_adress, 256);*/

            cout << "Postcode: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].postcode;

            cout << "Country: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].country, 56);

            cout << "Region: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].region, 56);

            cout << "Area: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].area, 56);

            cout << "Town: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].town, 56);

            cout << "Street: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].street, 56);

            cout << "Number of house: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].house;

            cout << "Number of apartment: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].apartment;

            cout << "Enter the university: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].university, 256);

            cout << "Enter the course: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].course;

            cout << "Enter the ball average: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin >> struc[i].ball_average;

            cout << "Enter the specialy: " << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(struc[i].specialty, 256);

            cin.clear();

        }
        cout << endl;
    }
}

void sort_name(Student *struc, int D)
{
    Student Help;
    for (int i = 0; i < D; i++)
    {
        for (int j = i + 1; j < D; j++)
        {
            if (strcmp(struc[j].F, struc[j - 1].F) < 0)
            {
                Help = struc[j];
                struc[j] = struc[j - 1];
                struc[j - 1] = Help;
            }
        }
    }
}

void sort_date(Student *struc, int D)
{
    Student help;
    for (int i = 0; i < D; i++)
    {
        for (int j = 0; j < D; j++)
        {
            int temp1 = struc[i].bith.day + (struc[i].bith.month * 30) + (struc[i].bith.year * 365);
            int temp2 = struc[j].bith.day + (struc[j].bith.month * 30) + (struc[j].bith.year * 365);
            if (temp1 < temp2)
            {
                help = struc[i];
                struc[i] = struc[j];
                struc[j] = help;
            }
        }
    }
}

void search(Student *struc, int D)
{
    cout << "\nPlease enter 'Last name' for searching\n";
    string str;
    cin >> str;
    int count = 0;
    for (int i = 0; i < D; i++)
    {
        if (struc[i].F == str)
        {
            struc[i].Print();
            count++;
        }
    }
}

void Main_Window(int selection, Student* struc, int D, bool check_data)
{
    system("cls");
    cout << "\nPlease select a section:";
    cout << "\n1. Add data \n2. Output arrays structs \n3. Alphabetical sorting \n4. Sort date \n5. Search student \n6. Exit from programm\n";
    cin >> selection;
    switch (selection)
    {
    case 1:
        system("cls");
        cout << "Fill in the information: " << endl;
        Write(struc, D);
        check_data = true;
        int selec;
        cout << "\nWhat's next?\n1. Back to main menu \n2. Add more students\n";
        cin >> selec;
        if (selec == 1)
            Main_Window(selection, struc, D, check_data);
    break;
    case 2:
    link_print:
        system("cls");
        if (check_data)
        {
            cout << "All students" << endl;
            for (int i = 0; i < D; i++)
            {
                struc[i].Print();
            }
        }
        else
        cout << "Error! Add students!)";
        cout << "\n1. Do you want to back to main menu?(Enter 1 - Yes | 2 - Exit)\n";
        cin >> selec;
        if (selec == 1)
            Main_Window(selection, struc, D, check_data);
        else if (selec == 2)
            exit(0);
        else;
        break;
    case 3:
        system("cls");
        if (check_data)
        {
            cout << "Sort in the name: " << endl;
            sort_name(struc, D);
            cout << "Sort completed!" << endl;
        }
        else
            cout << "Error! Add students!)" << endl;
        cout << "\nWhat`s next? \n1. Back to main menu \n2. Look on the data about students\n";
        cin >> selec;
        if (selec == 1)
            Main_Window(selection, struc, D, check_data);
        else if (selec == 2)
            goto link_print;
        break;
    case 4:
        system("cls");
        if (check_data)
        {
            cout << "Sort in the date:\n";
            sort_date(struc, D);
            cout << "Sort completed!";
        }
        else 
        cout << "Error! Add students!)";
        cout << "\nWhat`s next? \n1. Back to main menu \n2. Look on the data about students\n";
        cin >> selec;
        if (selec == 1)
            Main_Window(selection, struc, D, check_data);
        else if (selec == 2)
            goto link_print;
        break;
    case 5:
        system("cls");
        if (check_data)
            search(struc, D);
        else 
        cout << "Error! Add students)";
        cout << "\nWhat`s next? \n1. Exit \n2. Back to main menu\n";
        cin >> selec;
        if (selec == 1)
            exit(0);
        else if (selec == 2)
            Main_Window(selection, struc, D, check_data);
        break;
    case 6:
        exit(0);
    default:
        cout << "\nERROR! RETURN INPUT";
        cout << "\nWhat`s next? \n1. Exit \n2. Back to main menu\n";
        cin >> selec;
        if (selec == 1)
            exit(0);
        else if (selec == 2)
            Main_Window(selection, struc, D, check_data);
        else;
        break;
    }
}

int main()
{
    int D = 0;
    int selection = 0;
    bool check_data = false;
    cout << "Enter the quality students:  " << endl;
    cin >> D;
    Student* struc = new Student[D];
    Main_Window(selection, struc, D, check_data);

    delete[] struc;
    system("pause");
    return 0;
}