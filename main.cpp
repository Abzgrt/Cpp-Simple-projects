/* Abdi Bekele UGR/3000/13
   Enjifano Tamiru UGR 7040/13
   Eba Mekonnen UGR 7340/13
   Asefa Negash UGR 3904/13
*/


#include <iostream>

#include <fstream>

#include<cstring>
#include<iomanip>

using namespace std;

void Accept_Data();

void Search_Prisoner();

void Detail_Info();
void animation();

void create();

void Login(string,int);

void menu();
;
struct Prisoners
{
    char Name[20];
    char Father_Name[20];
    char Gender[5];
    int ID_No;
    int Age;
    char Crime[10];
    int Punishment_Duration;
}p[100];
int main()
{
    system("color BE");
 animation();
  menu();
  return 0;
}
void menu()
{
  int a;
  string x;
  cout<<"\n\n\t\t\t\t  ENTER YOUR CHOICE FROM THE MENU GIVEN BELOW!"<<endl;
  char choice;


        cout << "\n";
    cout << "\t\t\t---------------------------------------------------------------------------\n";

    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                                                                         |\n";
    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                     1)   New prisoner entry                             |\n";
    cout << "\t\t\t|                                                                         |\n";


    cout << "\t\t\t|                     2)   Search prisoner                                |\n";
    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                     3)   Display Information of prisoners               |\n";
    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                     4)   Exit                                           |\n";
    cout << "\t\t\t|                                                                         |\n";
    cout << "\t\t\t---------------------------------------------------------------------------\n";
  cin>>choice;
  switch(choice)
  {

    case '1':  Accept_Data();
     break;
    case '2':  Search_Prisoner();
     break;
    case '3':  Detail_Info();
     break;
    case '4':  exit(0);
     break;
    default:  cout<<"Sorry your choice is wrong please try again!"<<endl<<endl;
   exit(1);
   }
   menu();
}
void Accept_Data()
{
 int n;
  cout<<" Enter Number of prisoners:"<<endl;
  cin>>n;
  ofstream myFile;
  myFile.open("Prisoners.txt",ios::out);

  for(int i = 0; i < n; i++)
  {


      cout<<"Enter prisoner "<<i+1<<"'s first name :"<<endl;
      cin>>p[i].Name;
      cout<<"Enter prisoner "<<i+1<<"'s father name:"<<endl;
      cin>>(p[i].Father_Name);
      cout<<"Enter age of the prisoner:"<<endl;
      cin>>p[i].Age;
      cout<<"Enter gender of the prisoner:"<<endl;
      cin>>p[i].Gender;
      cout<<"Enter ID number of the prisoner:"<<endl;
      cin>>p[i].ID_No;
      cout<<"Enter crime type of the prisoner:"<<endl;
      cin>>p[i].Crime;
      cout<<"Enter duration of punishment year of the prisoner:"<<endl;
      cin>>p[i].Punishment_Duration;

      myFile<<p[i].Name<<" "<<p[i].Father_Name<<" "<<p[i].Age<<" "<<p[i].Gender<<" "<<p[i].ID_No<<" "<<p[i].Crime<<" "<<p[i].Punishment_Duration<<endl;
  }
  myFile.close();
  menu();
}
void Search_Prisoner()
{
  int ID_No1;

  cout<<"Enter the ID number of the prisoner you want to search:"<<endl;
  cin>>ID_No1;
   char Name[20];
   char Father_Name[20];
   char Gender[5];
   int ID_No;
   int Age;
   char Crime[10];
   int Punishment_Duration;

    ifstream myFile;
    myFile.open("prisoners.txt",ios::in);
    int Control=0;
  if(myFile.fail())
  {
  cout<< "The file cannot be opened!\n";
 exit(1);
 }

    while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {

if(ID_No1==ID_No)
      {
        Control=1;
      cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
      }
      }

  myFile.close();
  if(Control==0)
  cout<<"\n No prison is registered with this ID number!!"<<endl;
  menu();
}
void Detail_Info()
{
  int i;
  char Name[20];
  char Father_Name[20];
  char Gender[5];
  int ID_No;
  int Age;
  char Crime[10];
  int Punishment_Duration;
ifstream myFile;
    myFile.open("Prisoners.txt",ios::in);
    if(myFile.fail())
  {
  cout<< "The file cannot be opened!.\n";
 exit(1);
 }
    cout<<"HERE IS THE YOUR PRISONERS'S FULL INFORMATOIN!!"<<endl<<endl;
   cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
    }

  myFile.close();
  menu();
}
void create(){
  int a;
 string x,username;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Create Account                                  |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "Enter username here:" <<endl;
  cin>>x;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";

  cout << "\t\t\t\t|                        Create Password                                 |\n";
  cout << "\t\t\t\t|                                                                        |\n";\
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout <<"Enter only number here:"<<endl;
 cin >>a;
Login( x, a);
 }

void Login(string x,int a){
string username;
int password;

  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your Username                              |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout<<"\tTo Login Enter the User's account created correctly!"<<endl;
  cout <<"Enter here:"<<endl;
 cin>>username;
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your password                               |\n";
  cout << "\t\t\t\t|                                                                          |\n";
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout <<"Enter only number here:"<<endl;
 cin >>password;
 if (username==x && password==a)
 {
  cout<<"\tYou have successfully entered to this account!"<<endl;
   menu();
 }
  else
  {
cout<<"\tYou entered wrong user's account please try again!"<<endl;
Login( x, a);
} }
 void animation()
  {
    int i;
         for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    |         WELCOME TO OUR MODERN PRISON        |\n";
        cout << "\t\t\t\t    |                                             |\n";

    for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    |           MANAGEMENT PROGRAM!!              |\n";

        for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (i = 0; i <= 100000000; i++)
        {
        }
    create();
  }




/*

#include <iostream>

#include <fstream>

#include<cstring>
#include<iomanip>

using namespace std;

void Accept_Data();

void Search_Prisoner();

void Detail_Info();
void animation();

void create();

void Login(string,int);

void menu();
;
struct Prisoners
{
    char Name[20];
    char Father_Name[20];
    char Gender[5];
    int ID_No;
    int Age;
    char Crime[10];
    int Punishment_Duration;
}p[100];
int main()
{
    system("color CE");
 animation();
  menu();
  return 0;
}
void menu()
{
  int a;
  string x;
  cout<<"\n\n\t\t\t\t  ENTER YOUR CHOICE FROM THE MENU GIVEN BELOW!"<<endl;
  char choice;


        cout << "\n";
    cout << "\t\t\t---------------------------------------------------------------------------\n";

    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                     1)   Login                                          |\n";
    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                     2)   New prisoner entry                             |\n";
    cout << "\t\t\t|                                                                         |\n";


    cout << "\t\t\t|                     3)   Search prisoner                                |\n";
    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                     4)   Display Information of prisoners               |\n";
    cout << "\t\t\t|                                                                         |\n";

    cout << "\t\t\t|                     5)   Exit                                           |\n";
    cout << "\t\t\t|                                                                         |\n";
    cout << "\t\t\t---------------------------------------------------------------------------\n";
  cin>>choice;
  switch(choice)
  {
    case '1':  Login(x,a);

    case '2':  Accept_Data();
     break;
    case '3':  Search_Prisoner();
     break;
    case '4':  Detail_Info();
     break;
    case '5':  exit(0);
     break;
    default:  cout<<"Sorry your choice is wrong please try again!"<<endl<<endl;
   exit(1);
   }
   menu();
}
void Accept_Data()
{
 int n;
  cout<<" Enter Number of prisoners:"<<endl;
  cin>>n;
  ofstream myFile;
  myFile.open("Prisoners.txt",ios::out);

  for(int i = 0; i < n; i++)
  {


      cout<<"Enter prisoner "<<i+1<<"'s first name:"<<endl;
      cin>>p[i].Name;
      cout<<"Enter prisoner "<<i+1<<"'s father name:"<<endl;
      cin>>(p[i].Father_Name);
      cout<<"Enter age of the prisoner:"<<endl;
      cin>>p[i].Age;
      cout<<"Enter gender of the prisoner:"<<endl;
      cin>>p[i].Gender;
      cout<<"Enter ID number of the prisoner:"<<endl;
      cin>>p[i].ID_No;
      cout<<"Enter crime type of the prisoner:"<<endl;
      cin>>p[i].Crime;
      cout<<"Enter duration of punishment year of the prisoner:"<<endl;
      cin>>p[i].Punishment_Duration;

      myFile<<p[i].Name<<" "<<p[i].Father_Name<<" "<<p[i].Age<<" "<<p[i].Gender<<" "<<p[i].ID_No<<" "<<p[i].Crime<<" "<<p[i].Punishment_Duration<<endl;
  }
  myFile.close();
  menu();
}
void Search_Prisoner()
{
  int ID_No1;

  cout<<"Enter the ID number of the prisoner you want to search:"<<endl;
  cin>>ID_No1;
   char Name[20];
   char Father_Name[20];
   char Gender[5];
   int ID_No;
   int Age;
   char Crime[10];
   int Punishment_Duration;

    ifstream myFile;
    myFile.open("prisoners.txt",ios::in);
    int Control=0;
  if(myFile.fail())
  {
  cout<< "The file cannot be opened!\n";
 exit(1);
 }

    while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {

if(ID_No1==ID_No)
      {
        Control=1;
      cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
      }
      }

  myFile.close();
  if(Control==0)
  cout<<"\n No prison is registered with this ID number!!"<<endl;
  menu();
}
void Detail_Info()
{
  int i;
  char Name[20];
  char Father_Name[20];
  char Gender[5];
  int ID_No;
  int Age;
  char Crime[10];
  int Punishment_Duration;
ifstream myFile;
    myFile.open("Prisoners.txt",ios::in);
    if(myFile.fail())
  {
  cout<< "The file cannot be opened!.\n";
 exit(1);
 }
    cout<<"HERE IS THE YOUR PRISONERS'S FULL INFORMATOIN!!"<<endl<<endl;
   cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
    }

  myFile.close();
  menu();
}
void create(){
  int a;
 string x,username;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Create Account                                 |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "Enter username Here" <<endl;
  cin>>x;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";

  cout << "\t\t\t\t|                        Create Password Only number is allowed          |\n";
  cout << "\t\t\t\t|                                                                        |\n";\
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout <<"Enter password Here"<<endl;
 cin >>a;
menu();
 }

void Login(string x,int a){
string username;
int password;

  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your Username                              |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout <<"Enter here:"<<endl;
 cin>>username;
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your password                               |\n";
  cout << "\t\t\t\t|                                                                          |\n";
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout <<"Enter only number here:"<<endl;
 cin >>password;
 if (username==x && password==a)
 {
 }
  else
  {
menu();
} }
 void animation()
  {
    int i;
         for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    |         WELCOME TO OUR MODERN PRISON        |\n";
        cout << "\t\t\t\t    |                                             |\n";

    for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    |           MANAGEMENT PROGRAM!!              |\n";

        for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (i = 0; i <= 100000000; i++)
        {
        }
    }


/*
#include <iostream>

#include <fstream>

#include<cstring>
#include<iomanip>

using namespace std;

void Accept_Data();

void Search_Prisoner();

void Detail_Info();
void animation();

void create();

void Login(string,int);

void menu();
;
struct Prisoners
{
    char Name[20];
    char Father_Name[20];
    char Gender[5];
    int ID_No;
    int Age;
    char Crime[10];
    int Punishment_Duration;
}p[100];
int main()
{

 animation();

  menu();
  return 0;
}
void menu()
{
  int a;
  string x;
  cout<<"\n\n\t\t\t\tENTER YOUR CHOICE FROM THE MENU GIVEN BELOW:"<<endl;
  char choice;

        cout << "\t\t\t\t---------------------------------------------------------------------------\n";

        cout << "\t\t\t\t|                                                                         |\n";


        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";


        cout << "\t\t\t\t|                     2)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     3)   Display Information of prisoners               |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     4)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cin>>choice;
  switch(choice)
  {
    case '1':  Accept_Data();
     break;
    case '2':  Search_Prisoner();
     break;
    case '3':  Detail_Info();
     break;
    case '4':  exit(0);
     break;
    default:  cout<<"Sorry your choice is wrong please try again!"<<endl<<endl;
   exit(1);
   }
   menu();
}
void Accept_Data()
{
 int n;
  cout<<" Enter Number of Your prisoners:"<<endl;
  cin>>n;
  ofstream myFile;
  myFile.open("Prisoners.txt",ios::app);

  for(int i = 0; i < n; i++)
  {


      cout<<"Enter prisoner "<<i+1<<"'s first name:"<<endl;
      cin>>p[i].Name;
      cout<<"Enter prisoner "<<i+1<<"'s father name:"<<endl;
      cin>>(p[i].Father_Name);
      cout<<"Enter age of the prisoner:"<<endl;
      cin>>p[i].Age;
      cout<<"Enter gender of the prisoner:"<<endl;
      cin>>p[i].Gender;
      cout<<"Enter ID number of the prisoner:"<<endl;
      cin>>p[i].ID_No;
      cout<<"Enter crime type of the prisoner:"<<endl;
      cin>>p[i].Crime;
      cout<<"Enter duration of punishment year of the prisoner:"<<endl;
      cin>>p[i].Punishment_Duration;

      myFile<<p[i].Name<<" "<<p[i].Father_Name<<" "<<p[i].Age<<" "<<p[i].Gender<<" "<<p[i].ID_No<<" "<<p[i].Crime<<" "<<p[i].Punishment_Duration<<endl;
  }
  myFile.close();
  menu();
}
void Search_Prisoner()
{
  int ID_No1;

  cout<<"Enter the ID number of the prisoner you want to search:"<<endl;
  cin>>ID_No1;
   char Name[20];
   char Father_Name[20];
   char Gender[5];
   int ID_No;
   int Age;
   char Crime[10];
   int Punishment_Duration;

    ifstream myFile;
    myFile.open("prisoners.txt",ios::in);
    int Control=0;
  if(myFile.fail())
  {
  cout<< "The file cannot be opened!.\n";
 exit(1);
 }

    while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {

if(ID_No1==ID_No)
      {
        Control=1;
      cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
      }
      }

  myFile.close();
  if(Control==0)
  cout<<"NO PRISONER IS REGISTERED WITH THIS ID NUMBER!!"<<endl;
  menu();
}
void Detail_Info()
{
  int i;
  char Name[20];
  char Father_Name[20];
  char Gender[5];
  int ID_No;
  int Age;
  char Crime[10];
  int Punishment_Duration;
ifstream myFile;
    myFile.open("Prisoners.txt",ios::in);
    if(myFile.fail())
  {
  cout<< "The file cannot be opened!\n";
 exit(1);
 }
   cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
    }

  myFile.close();
  menu();
}
void create(){
 int a, apassword;
 string x,xusername;
 system("cls");
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Create Account                                  |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "Enter username here" <<endl;
  cin>>x;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";

  cout << "\t\t\t\t|                        Create Password Only number is allowed          |\n";
  cout << "\t\t\t\t|                                                                        |\n";\
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout <<"Enter password here"<<endl;
 cin >>a;
 ofstream myFile;
 myFile.open("prisoners.txt",ios::app);
 myFile<<x<<" "<<a<<endl;
 system("cls");
 cout<<" The registration is done successfully!"<<endl;

Login(x,a);
 }

void Login(string x,int a){
string username, user;
int password, pass,c;
system("cls");

  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        LOGIN HERE                                      |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";

  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your Username                             |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout <<"Enter here:"<<endl;
 cin>>username;
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your password only number is allowed       |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout <<"Enter here:"<<endl;
 cin >>password;
 ifstream myFile;
  myFile.open("prisoners.txt",ios::in);
 while(myFile>>user>>pass)
 {
   if(username==user && password==pass)
    {
   menu();
     }
     else
    {
   cout<<"You entered wrong user's account please try again!"<<endl;
    Login(x,a);
     }
 myFile.close();

 }
}
 void animation()
  {
    int a;
    string x,user,pass;
         for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    |                                              |\n";
        cout << "\t\t\t\t    |         WELCOME TO OUR MODERN PRISON         |\n";
        cout << "\t\t\t\t    |              MANAGEMENT PROGRAM!             |\n";

        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
 ifstream myFile;
  myFile.open("prisoners.txt",ios::in);
    while(myFile>>user>>pass)
        if(!myFile){
       create();
   }
       else
       cout<<"The Already you have created account"<<endl;
       Login(x,a);

    }






/*
#include <iostream>

#include <fstream>

#include<cstring>
#include<iomanip>

using namespace std;

void Accept_Data();

void Search_Prisoner();

void Detail_Info();
void animation();

void create();

void Login(string,int);

void menu();
;
struct Prisoners
{
    char Name[20];
    char Father_Name[20];
    char Gender[5];
    int ID_No;
    int Age;
    char Crime[10];
    int Punishment_Duration;
}p[100];
int main()
{
 animation();
  menu();
  return 0;
}
void menu()
{
  int a;
  string x;
  cout<<"\n\n\t\t\t\t\tENTER YOUR CHOICE FROM THE MENU GIVEN BELOW:"<<endl;
  char choice;


        cout << "\t\t\t\t---------------------------------------------------------------------------\n";



        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";


        cout << "\t\t\t\t|                     2)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     3)   Display Information of prisoners               |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     4)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cin>>choice;
  switch(choice)
  {

   case '1':  create();
     break;
    case '2':  Accept_Data();
     break;
    case '3':  Search_Prisoner();
     break;
    case '4':  Detail_Info();
     break;
    case '5':  exit(0);
     break;
    default:  cout<<"Sorry your choice is wrong please try again!"<<endl<<endl;
   exit(1);
   }
   menu();
}
void Accept_Data()
{
 int n;
  cout<<" Enter Number of Your Prisoners:"<<endl;
  cin>>n;
  ofstream myFile;
  myFile.open("PRISONERS.txt",ios::app);

  for(int i = 0; i < n; i++)
  {


      cout<<"Enter prisoner "<<i+1<<"'s first name:"<<endl;
      cin>>p[i].Name;
      cout<<"Enter prisoner "<<i+1<<"'s father name:"<<endl;
      cin>>(p[i].Father_Name);
      cout<<"Enter age of the prisoner:"<<endl;
      cin>>p[i].Age;
      cout<<"Enter gender of the prisoner:"<<endl;
      cin>>p[i].Gender;
      cout<<"Enter ID number of the prisoner:"<<endl;
      cin>>p[i].ID_No;
      cout<<"Enter crime type of the prisoner:"<<endl;
      cin>>p[i].Crime;
      cout<<"Enter duration of punishment year of the prisoner:"<<endl;
      cin>>p[i].Punishment_Duration;

      myFile<<p[i].Name<<" "<<p[i].Father_Name<<" "<<p[i].Age<<" "<<p[i].Gender<<" "<<p[i].ID_No<<" "<<p[i].Crime<<" "<<p[i].Punishment_Duration<<endl;
  }
  myFile.close();
  menu();
}
void Search_Prisoner()
{
  int ID_No1;

  cout<<"Enter the ID number of the prisoner you want to search:"<<endl;
  cin>>ID_No1;
   char Name[20];
   char Father_Name[20];
   char Gender[5];
   int ID_No;
   int Age;
   char Crime[10];
   int Punishment_Duration;

    ifstream myFile;
    myFile.open("PRISONERS.txt",ios::in);
    int Control=0;
  if(myFile.fail())
  {
  cout<< "The file cannot be opened!\n";
 exit(1);
 }

    while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {

if(ID_No1==ID_No)
      {
        Control=1;
      cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
      }
      }

  myFile.close();
  if(Control==0)
  cout<<"\t\t\t NO PRISONER IS REGITERED WITH THIS ID NUMBER!!"<<endl;
  menu();
}
void Detail_Info()
{
  int i;
  char Name[20];
  char Father_Name[20];
  char Gender[5];
  int ID_No;
  int Age;
  char Crime[10];
  int Punishment_Duration;
ifstream myFile;
    myFile.open("PRISONERS.txt",ios::in);
    if(myFile.fail())
  {
  cout<< "The file cannot be opened!\n";
 exit(1);
 }
   cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
    }

  myFile.close();
  menu();
}
void create(){
 int a,apassword;
 string x,xusername;
 system("cls");
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Create Account                                  |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "Enter Username here:" <<endl;
  cin>>x;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";

  cout << "\t\t\t\t|                        Create Password Only number is allowed          |\n";
  cout << "\t\t\t\t|                                                                        |\n";\
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout <<"Enter Password here:"<<endl;
 cin >>a;
 ofstream myFile;
 myFile.open("PRISONERS.txt",ios::app);
 myFile<<x<<" "<<a<<endl;
 system("cls");
 cout<<" registeretion is succesful "<<endl;

Login(x,a);
 }

void Login(string x,int a){
string username, user;
int password, pass,c;
system("cls");

  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        LOGIN HERE                                       |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";

cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your Username                              |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout <<"Enter Here"<<endl;
 cin>>username;
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your password only number is allowed        |\n";
  cout << "\t\t\t\t|                                                                          |\n";
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout <<"Enter Here"<<endl;
 cin >>password;
 ifstream myFile;
  myFile.open("prisoners.txt",ios::in);
 while(myFile>>user>>pass)
 {
   if(username==user && password==pass)
    {
   menu();
     }
     else
    {
   cout<<"This Users is Not Registered"<<endl;
    Login(x,a);
     }
 myFile.close();

 }
}
 void animation()
  {
    int a;
    string x,user,pass;

        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }

        cout << "\t\t\t\t    |         WELCOME TO OUR MODERN PRISON        |\n";
        cout << "\t\t\t\t    |         MANAGEMENT PROGRAM!!                |\n";


        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }

       fstream myFile;
  myFile.open("USER.txt",ios::noreplace);
    while(myFile>>user>>pass)
        if(!myFile)
            {
       create();
        }
       else
       {

       cout<<"The Already you have created account"<<endl;
       Login(x,a);
    }


  }



/*
#include <iostream>

#include <fstream>

#include<cstring>
#include<iomanip>

using namespace std;

void Accept_Data();

void Search_Prisoner();

void Detail_Info();
void animation();

void create();

void Login(string,int);

void menu();
;
struct Prisoners
{
    char Name[20];
    char Father_Name[20];
    char Gender[5];
    int ID_No;
    int Age;
    char Crime[10];
    int Punishment_Duration;
}p[100];
int main()
{
 animation();
  menu();
  return 0;
}
void menu()
{
  int a;
  string x;
  cout<<"Enter your choice from the menu below:"<<endl;
  char choice;


        cout << "\n\n\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";

        cout << "\t\t\t\t|                                                                         |\n";

       // cout << "\t\t\t\t|                     1)   Login                                          |\n";
       // cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";


        cout << "\t\t\t\t|                     2)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     3)   Display Information of prisoners               |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     4)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cin>>choice;
  switch(choice)
  {
    case '1':  Accept_Data();
     break;
    case '2':  Search_Prisoner();
     break;
    case '3':  Detail_Info();
     break;
    case '4':  exit(0);
     break;
    default:  cout<<"Sorry your choice is wrong please try again!"<<endl<<endl;
   exit(1);
   }
   menu();
}
void Accept_Data()
{
 int n;
  cout<<" Enter Number of prisoners:"<<endl;
  cin>>n;
  ofstream myFile;
  myFile.open("Prisoners.txt",ios::app);

  for(int i = 0; i < n; i++)
  {


      cout<<"Enter prisoner "<<i+1<<"'s first name:"<<endl;
      cin>>p[i].Name;
      cout<<"Enter prisoner "<<i+1<<"'s father name:"<<endl;
      cin>>(p[i].Father_Name);
      cout<<"Enter age of the prisoner:"<<endl;
      cin>>p[i].Age;
      cout<<"Enter gender of the prisoner:"<<endl;
      cin>>p[i].Gender;
      cout<<"Enter ID number of the prisoner:"<<endl;
      cin>>p[i].ID_No;
      cout<<"Enter crime type of the prisoner:"<<endl;
      cin>>p[i].Crime;
      cout<<"Enter duration of punishment year of the prisoner:"<<endl;
      cin>>p[i].Punishment_Duration;

      myFile<<p[i].Name<<" "<<p[i].Father_Name<<" "<<p[i].Age<<" "<<p[i].Gender<<" "<<p[i].ID_No<<" "<<p[i].Crime<<" "<<p[i].Punishment_Duration<<endl;
  }
  myFile.close();
  menu();
}
void Search_Prisoner()
{
  int ID_No1;

  cout<<"Enter the ID number of the prisoner you want to search:"<<endl;
  cin>>ID_No1;
   char Name[20];
   char Father_Name[20];
   char Gender[5];
   int ID_No;
   int Age;
   char Crime[10];
   int Punishment_Duration;

    ifstream myFile;
    myFile.open("prisoners.txt",ios::in);
    int Control=0;
  if(myFile.fail())
  {
  cout<< "Input file opening failed.\n";
 exit(1);
 }

    while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {

if(ID_No1==ID_No)
      {
        Control=1;
      cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
      //cout<<Name<<" "<<Father_Name<<"   "<<Age<<"  "<<Gender<<"  "<<ID_No<<"  "<<Crime<<"  "<<Punishment_Duration<<endl;
      }
      }

  myFile.close();
  if(Control==0)
  cout<<"The person is not registered!"<<endl;
  menu();
}
void Detail_Info()
{
  int i;
  char Name[20];
  char Father_Name[20];
  char Gender[5];
  int ID_No;
  int Age;
  char Crime[10];
  int Punishment_Duration;
ifstream myFile;
    myFile.open("Prisoners.txt",ios::in);
    if(myFile.fail())
  {
  cout<< "Input file opening failed.\n";
 exit(1);
 }
   cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
    }

  myFile.close();
  menu();
}
void create(){
 int a, apassword;
 string x,xusername;
 system("cls");
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Create Account                                  |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "Enter username Here" <<endl;
  cin>>x;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";

  cout << "\t\t\t\t|                        Create Password Only number is allowed          |\n";
  cout << "\t\t\t\t|                                                                        |\n";\
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout <<"Enter password Here"<<endl;
 cin >>a;
 ofstream myFile;
 myFile.open("prisoners.txt",ios::app);
 myFile<<x<<" "<<a<<endl;
 system("cls");
 cout<<" registeretion is succesful "<<endl;

Login(x,a);
 }

void Login(string x,int a){
string username, user;
int password, pass,c;
system("cls");

  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        LOGIN HERE                                       |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";

cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your Username                              |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout <<"Enter Here"<<endl;
 cin>>username;
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your password only number is allowed        |\n";
  cout << "\t\t\t\t|                                                                          |\n";
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout <<"Enter Here"<<endl;
 cin >>password;
 ifstream myFile;
  myFile.open("prisoners.txt",ios::in);
 while(myFile>>user>>pass)
 {
   if(username==user && password==pass)
    {
   menu();
     }
     else
    {
   cout<<"This Users is Not Registered"<<endl;
    Login(x,a);
     }
 myFile.close();
      if (username==x && password==a)
 {
    menu();
 }
  else
  {
exit(0);
  }
 }
}
 void animation()
  {

    int i;
    string x,a,user,pass;
         for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    |         PRISON MANAGEMENT SYSTEM             |\n";
    for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    |         MODERN PRISON MANAGEMENT SYSTEM      |\n";

        for (i = 0; i <= 100000000; i++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------\n";
        for (i = 0; i <= 100000000; i++)
        {
        }
       fstream myFile;
  myFile.open("prisoners.txt",ios::in|ios::out);
    while(myFile>>user>>pass)
        if(!myFile){
       create();
   }
       else
       {

       cout<<"The Already you have created account"<<endl;
       Login(x,a);
       }
    }

/*
#include <iostream>

#include <fstream>

#include<cstring>
#include<iomanip>

using namespace std;

void Accept_Data();

void Search_Prisoner();

void Detail_Info();
void animation();

void create();

void Login(string,string);

void menu();
int n;
struct Prisoners
{
    char Name[20];
    char Father_Name[20];
    char Gender[5];
    int ID_No;
    int Age;
    char Crime[10];
    int Punishment_Duration;
}p[100];
int main()
{
 cout<<"How many people do u have?"<<endl;
 cin>>n;
 Prisoners p[n];
 animation();
  menu();
  return 0;
}
void menu()
{
  int a;
  string x;
  cout<<"\t\t\t\tENTER YOUR CHOICE FROM THE MENU GIVEN BELOW!:"<<endl;
  char choice;



        cout << "\t\t\t\t---------------------------------------------------------------------------\n";

        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";


        cout << "\t\t\t\t|                     2)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     3)   Display Information of prisoners               |\n";
        cout << "\t\t\t\t|                                                                         |\n";

        cout << "\t\t\t\t|                     4)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cin>>choice;
  switch(choice)
  {
    case '1':  Accept_Data();
     break;
    case '2':  Search_Prisoner();
     break;
    case '3':  Detail_Info();
     break;
    case '4':  exit(0);
     break;
    default:  cout<<"Sorry your choice is wrong please try again!"<<endl;
   exit(1);
   }
   menu();
}
void Accept_Data()
{
 int n;
  ofstream myFile;
  myFile.open("Prisoners.txt",ios::out);

  for(int i = 0; i < n; i++)
  {


      cout<<"Enter prisoner "<<i+1<<"'s first name:"<<endl;
      cin>>p[i].Name;
      cout<<"Enter prisoner "<<i+1<<"'s father name:"<<endl;
      cin>>(p[i].Father_Name);
      cout<<"Enter age of the prisoner:"<<endl;
      cin>>p[i].Age;
      cout<<"Enter gender of the prisoner:"<<endl;
      cin>>p[i].Gender;
      cout<<"Enter ID number of the prisoner:"<<endl;
      cin>>p[i].ID_No;
      cout<<"Enter crime type of the prisoner:"<<endl;
      cin>>p[i].Crime;
      cout<<"Enter duration of punishment year of the prisoner:"<<endl;
      cin>>p[i].Punishment_Duration;

      myFile<<p[i].Name<<" "<<p[i].Father_Name<<" "<<p[i].Age<<" "<<p[i].Gender<<" "<<p[i].ID_No<<" "<<p[i].Crime<<" "<<p[i].Punishment_Duration<<endl;
  }
  myFile.close();
  menu();
}
void Search_Prisoner()
{
  int ID_No1;

  cout<<"Enter the ID number of the prisoner you want to search:"<<endl;
  cin>>ID_No1;
   char Name[20];
   char Father_Name[20];
   char Gender[5];
   int ID_No;
   int Age;
   char Crime[10];
   int Punishment_Duration;

    ifstream myFile;
    myFile.open("prisoners.txt",ios::in);
    int Control=0;
  if(myFile.fail())
  {
  cout<< "Your file cannot be opened.\n";
 exit(1);
 }

    while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {

if(ID_No1==ID_No)
      {
        Control=1;
      cout<<"FIRST NAME"<<"     "<<"SECOND NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
      }
      }

  myFile.close();
  if(Control==0)
  cout<<"The person is not registered!"<<endl;
  menu();
}
void Detail_Info()
{
  int i;
  char Name[20];
  char Father_Name[20];
  char Gender[5];
  int ID_No;
  int Age;
  char Crime[10];
  int Punishment_Duration;
ifstream myFile;
    myFile.open("Prisoners.txt",ios::in);
    if(myFile.fail())
  {
  cout<< "Your file cannot be opened!.\n";
 exit(1);
 }
   cout<<"FIRST NAME"<<"     "<<"SECOND` NAME"<<"     "<<"AGE" <<"     "<<"GENDER" <<"       " <<"ID No" <<"     "<<"CRIME" <<"     " <<"PUNISHMENT DURATION"<<endl;
      while(myFile>>Name>>Father_Name>>Age>>Gender>>ID_No>>Crime>>Punishment_Duration)
    {
      cout<<setw(1)<<Name<<setw(20)<<Father_Name<<setw(10)<<Age<<" "<<setw(10)<<Gender<<" "<<setw(10)<<ID_No<<" "<<setw(10)<<Crime<<" "<<setw(10)<<Punishment_Duration<<endl;
    }

  myFile.close();
  menu();
}
void create(){
 string a, apassword;
 string x,xusername;
 system("cls");
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Create Account                                  |\n";
  cout << "\t\t\t\t|                                                                        |\n";
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout << "Enter username Here" <<endl;
  cin>>x;
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";

  cout << "\t\t\t\t|                        Create Password Only number is allowed          |\n";
  cout << "\t\t\t\t|                                                                        |\n";\
  cout << "\t\t\t\t-------------------------------------------------------------------------\n";
  cout <<"Enter password Here"<<endl;
 cin >>a;
 ofstream myFile;
 myFile.open("prisoners.txt",ios::out);
 myFile<<x<<" "<<a<<endl;
 system("cls");
 cout<<" registration is succesfull "<<endl;

Login(x,a);
 }

void Login(string x,string a){
string username, user;
int password, pass,c;
system("cls");

  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        LOGIN HERE                                       |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";

cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your Username                              |\n";
  cout << "\t\t\t\t|                                                                         |\n";
  cout << "\t\t\t\t--------------------------------------------------------------------------\n";
  cout <<"Enter Here"<<endl;
 cin>>username;
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout << "\t\t\t\t|                        Enter Your password only number is allowed        |\n";
  cout << "\t\t\t\t|                                                                          |\n";
  cout << "\t\t\t\t---------------------------------------------------------------------------\n";
  cout <<"Enter Here"<<endl;
 cin >>password;
 ifstream myFile;
  myFile.open("prisoners.txt",ios::in);
 while(myFile>>user>>pass)
 {
   if(username==user && password==pass)
    {
   menu();
     }
     else
    {
   cout<<"This User is Not Registered"<<endl;
    Login(x,a);
     }
 myFile.close();
    /*  if (username==x && password==a)
 {
    menu();
 }
  else
  {
exit(0) */





