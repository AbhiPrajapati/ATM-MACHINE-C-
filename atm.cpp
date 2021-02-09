#include <iostream>
#include <string.h>
//#include <vector>
using namespace std;
void lanHindi();
void lanEnglish();
void lanMarathi();
void saving();
void current();
void salary();
//int authUser(int, std::vector<users> &, int);

class users
{
private:
    int balance;
    string name;
    int pin;
    int account;

public:
    //default constructor
    users()
    {
    }
    users(int bal, string n, int p, int acc)
    {
        balance = bal;
        name = n;
        pin = p;
        account = acc;
    }

    void addBalance()
    {
        int bal;
        cout << "Enter the amount you want to credit in your account" << endl;
        cin >> bal;
        balance = balance + bal;
        cout << "Your total balance is " << balance << " Rs" << endl;
    }
    void removeBalance()
    {
        int bal;
        cout << "Enter the amount you want to debit from your account" << endl;
        cin >> bal;
        if (bal < balance)
        {
            balance = balance - bal;
            cout << "Your Current Balance is :" << balance << endl;
        }
        else
        {
            cout << "Your Current balkance is: " << balance << " You cannot debit it" << endl;
        }
    }
    void checkBalance()
    {
        cout << "Your Current Balance is : " << balance << endl;
    }
    int getPin()
    {
        return pin;
    }
    int getAcc()
    {
        return account;
    }
    string getName()
    {
        return name;
    }
};

//auth of user pin..

//int authUser(int p, std::vector<users> &userlist, int acc)
int authUser(int p, users userlist[], int acc)
{
    for (int i = 0; i < 5; i++)
    {
        if (p == userlist[i].getPin() && acc == userlist[i].getAcc())
        {
            return i;
        }
    }
    cout << "User does not Exist" << endl;
    return -1;
}
users addUser(int b, string n, int p, int a)
{
    users u(b, n, p, a);
    return u;
}

//main function
int main()
{
    //std::vector<users> userlist;
    users userlist[100];
    userlist[0] = addUser(20000, "Abhishek", 1234, 1);
    userlist[1] = addUser(20000, "Deepak", 4321, 2);
    userlist[2] = addUser(20000, "Ananya", 5555, 3);
    userlist[3] = addUser(20000, "Gulshan", 0000, 1);
    userlist[4] = addUser(20000, "Rammilan", 1111, 2);
    while (1)
    {

        int lan;
        cout << "Enter the language you want as default" << endl;
        cout << "1] Hindi \n2] English \n3] Marathi\n";
        cin >> lan;
        switch (lan)
        {

        //---------------------------------hindi Language------------------------------------------------//
        case 1:
        {

            bool authvalue = false;
            int auth;
            int account, userPin, userWant;
            cout << "\n1]Saving Account ke liye 1 dabaye \n2]Current Account ke liye 2 dabaye \n3]Salary Account ke liye 3 dabaye " << endl;
            cin >> account;
            if (account == 1)
            {
                cout << "Aap apna pin no dale" << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull\n"
                         << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " Hum Aapke Madat Ke Liye Bohot Khush Hai !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (authvalue == true)
                        {
                            cout << "1]Balance check karne ke liye 1 dabaye \n2]Paisee nikalne ke liye 2 dabaye\n3]Paisee dalne ke liye 3 dabaye \n4]exit" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else if (userWant == 4)
                            {
                                exit(0);
                            }
                            else
                            {
                                cout << "Please aap ek sahi vikalp , chune" << endl;
                            }
                        }
                    }
                }
            }
            else if (account == 2)
            {
                cout << "Aap apna pin no dale" << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " Hum Aapke Madat Ke Liye Bohot Khush Hai !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (authvalue == true)
                        {
                            cout << "1]Balance check karne ke liye 1 dabaye \n2]Paisee nikalne ke liye 2 dabaye\n3]Paisee dalne ke liye 3 dabaye \n4]exit" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else if (userWant == 4)
                            {
                                exit(0);
                            }
                            else
                            {
                                cout << "Please aap ek sahi vikalp , chune" << endl;
                            }
                        }
                    }
                }
            }
            else if (account == 3)
            {
                cout << "Aap apna pin no dale" << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " Hum Aapke Madat Ke Liye Bohot Khush Hai !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (authvalue == true)
                        {
                            cout << "1]Balance check karne ke liye 1 dabaye \n2]Paisee nikalne ke liye 2 dabaye\n3]Paisee dalne ke liye 3 dabaye \n4]exit" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else if (userWant == 4)
                            {
                                exit(0);
                            }
                            else
                            {
                                cout << "Please aap ek sahi vikalp , chune" << endl;
                            }
                        }
                    }
                }
            }
            else
            {
                cout << "Please aap ek sahi vikalp , chune";
            }
            break;
        }

        //---------------------------------English Language------------------------------------------------//
        case 2:
        {
            bool authvalue = false;
            int auth;
            int account, userPin, userWant;
            cout << "\n1]For Saving Account press 1\n2]For current Account press 2 \n3]For Salary Account press 3 " << endl;
            cin >> account;
            if (account == 1)
            {
                cout << "Enter your pin" << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " We Are Very Happy To Help You !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (auth == true)
                        {
                            cout << "1]Press 1 For cheacking your Account Balance \n2]Press 2 for taking out Balance\n3]Press 3 for add Balance" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else
                            {
                                cout << "Please enter a valid option !" << endl;
                            }
                        }
                    }
                }
            }
            else if (account == 2)
            {
                cout << "Enter your pin" << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " We Are Very Happy To Help You !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (auth == true)
                        {
                            cout << "1]Press 1 For cheacking your Account Balance \n2]Press 2 for taking out Balance\n3]Press 3 for add Balance" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else
                            {
                                cout << "Please enter a valid option !" << endl;
                            }
                        }
                    }
                }
            }
            else if (account == 3)
            {
                cout << "Enter your pin" << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " We Are Very Happy To Help You !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (auth == true)
                        {
                            cout << "1]Press 1 For cheacking your Account Balance \n2]Press 2 for taking out Balance\n3]Press 3 for add Balance" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else
                            {
                                cout << "Please enter a valid option !" << endl;
                            }
                        }
                    }
                }
            }
            else
            {
                cout << "Enter a valid option";
            }
            break;
        }

        //---------------------------------Marathi Language------------------------------------------------//
        case 3:
        {
            bool authvalue = false;
            int auth;
            int account, userPin, userWant;
            cout << "\n1]Saving Account Sathi 1 Daba\n2]Current Account Sathi 2 Daba \n3]Salary Account Sathi 3 Daba" << endl;
            cin >> account;
            if (account == 1)
            {
                cout << "Tumchya atm card che 4 digit wale Pin taka...." << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " Amhi Tumchya Madati Sathi Kubh Khush Ahot !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (auth == true)
                        {
                            cout << "1]Balance Check karnya Sathi 1 daba \n2]Paishe Kadnya Sathi 2 daba\n3]Paishe taknya sathi 3 daba" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else
                            {
                                cout << "Krupya taklele Option tapasun Punha pryatna Kara" << endl;
                            }
                        }
                    }
                }
            }
            else if (account == 2)
            {
                cout << "Tumchya atm card che 4 digit wale Pin taka...." << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " Amhi Tumchya Madati Sathi Kubh Khush Ahot !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (auth == true)
                        {
                            cout << "1]Balance Check karnya Sathi 1 daba \n2]Paishe Kadnya Sathi 2 daba\n3]Paishe taknya sathi 3 daba" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else
                            {
                                cout << "Krupya taklele Option tapasun Punha pryatna Kara" << endl;
                            }
                        }
                    }
                }
            }
            else if (account == 3)
            {
                cout << "Tumchya atm card che 4 digit wale Pin taka...." << endl;
                cin >> userPin;
                auth = authUser(userPin, userlist, account);
                if (auth == -1)
                {
                    cout << "Authentication UnSuccessfull" << endl;
                    authvalue = false;
                }
                else
                {
                    cout << "Authentication Successfull Hello " << userlist[auth].getName() << " Amhi Tumchya Madati Sathi Kubh Khush Ahot !!" << endl;
                    authvalue = true;
                    while (1)
                    {
                        if (auth == true)
                        {
                            cout << "1]Balance Check karnya Sathi 1 daba \n2]Paishe Kadnya Sathi 2 daba\n3]Paishe taknya sathi 3 daba" << endl;
                            cin >> userWant;
                            cout << endl;
                            if (userWant == 1)
                            {
                                userlist[auth].checkBalance();
                            }
                            else if (userWant == 2)
                            {
                                userlist[auth].removeBalance();
                            }
                            else if (userWant == 3)
                            {
                                userlist[auth].addBalance();
                            }
                            else
                            {
                                cout << "Krupya taklele Option tapasun Punha pryatna Kara" << endl;
                            }
                        }
                    }
                }
            }
            else
            {
                cout << "Krupya taklele Option tapasun Punha pryatna Kara";
            }
            break;
        }
        default:
        {
            cout << "Enter a valid option";
        }
        }
    }
}
