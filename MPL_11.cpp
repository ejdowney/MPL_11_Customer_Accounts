// * ---------------- *
// *  PRE PROCESSORS  *
// * ---------------- *

#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <limits>
using namespace std;

// * ------------------ *
// *  GLOBAL VARIABLES  *
// * ------------------ *

const int SIZE = 100;
struct Customer // Create our Customer structure
{
    char name[SIZE];
    char address[SIZE];
    char city[SIZE];
    char state[SIZE];
    char zipCode[SIZE];
    char phone[SIZE];
    char balance[SIZE];
    char dateLastPay[SIZE];
};

// * --------------------- *
// *  FUNCTION PROTOTYPES  *
// * --------------------- *

void newCustomer(Customer *customer, int index);
void displayAccounts(Customer *customer, int index);
void updateAccount(Customer *customer);

// * ------------ *
// *  BEGIN MAIN  *
// * ------------ *

int main()
{
    int userNum; // Stores user's menu selection
    int updateNum = 0; // Stores number of customer user wants to update
    int index = 0; // Stores the current index of the array being accessed

    Customer customerList[20]; // Initialize an array of Customers with 20 elements

    do
    {   // Print menu
        cout << "1. Enter new account information" << endl
             << "2. Change account information" << endl
             << "3. Display all account information" << endl
             << "4. Exit the program" << endl
             << endl;
        cout << "Enter your choice: ";
        cin >> userNum;

        switch(userNum)
        {
            case 1 :
                newCustomer(customerList, index);
                index++;
                break;
            case 2 :
                updateAccount(customerList);
                break;
            case 3 :
                displayAccounts(customerList, index);
                break;
            case 4 :
                break;
            default :
                break;
        }
    } while (userNum != 4);
    
    return 0;
}


// * --------------------- *
// *  FUNCTION DEFINITIONS *
// * --------------------- *

void newCustomer(Customer *customer, int index)
{
    cin.ignore(SIZE, '\n');
    cout << endl
         << "Customer name: ";
    cin.getline(customer[index].name, SIZE);
    cout << "Customer address: ";
    cin.getline(customer[index].address, SIZE);
    cout << "City: ";
    cin.getline(customer[index].city, SIZE);
    cout << "State: ";
    cin.getline(customer[index].state, SIZE);
    cout << "ZIP code: ";
    cin.getline(customer[index].zipCode, SIZE);
    cout << "Telephone: ";
    cin.getline(customer[index].phone, SIZE);
    cout << "Account balance: ";
    cin.getline(customer[index].balance, SIZE);
    cout << "Date of last payment: ";
    cin.getline(customer[index].dateLastPay, SIZE);
    cout << "You have entered informationfor customer number " << index << endl;
}

void updateAccount(Customer *customer)
{
    int temp;
    cout << "Customer number: ";
    cin >> temp;
    cout << "Customer name: ";
    cin.ignore(SIZE, '\n');
    cin.getline(customer[temp].name, SIZE);
    cout << "Customer address: ";
    cin.getline(customer[temp].address, SIZE);
    cout << "City: ";
    cin.getline(customer[temp].city, SIZE);
    cout << "State: ";
    cin.getline(customer[temp].state, SIZE);
    cout << "ZIP code: ";
    cin.getline(customer[temp].zipCode, SIZE);
    cout << "Telephone: ";
    cin.getline(customer[temp].phone, SIZE);
    cout << "Account balance: ";
    cin.getline(customer[temp].balance, SIZE);
    cout << "Date of last payment: ";
    cin.getline(customer[temp].dateLastPay, SIZE);
}

void displayAccounts(Customer *customer, int index)
{
    int i = 0;
    cin.ignore(SIZE, '\n');
    while (i < index)
    {
        cout << "Customer name: " << customer[i].name << endl;
        cout << "Customer address: " << customer[i].address << endl;
        cout << "City: " << customer[i].city << endl;
        cout << "State: " << customer[i].state << endl;
        cout << "ZIP code: " << customer[i].zipCode << endl;
        cout << "Telephone: " << customer[i].phone << endl;
        cout << "Account balance: $" << customer[i].balance << endl;
        cout << "Date of last payment: " << customer[i].dateLastPay << endl
             << endl;
            cout << "Press enter to continue...";
            cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
            // cout << endl;;
        i++;
    }
}