#include <iostream>

using namespace std;
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int divi(int num1, int num2);
void accept();
void menu();
int main()
{
    accept(); // calling accept function

    return 0;
}
void accept()
{
  int a,s,m,d,sum,dif,pro,quo;
  int n1,n2;
     cout<<"Enter two numbers:"<<endl;
     cin>>n1>>n2;

    char choice;
    menu(); // calling menu function
    cin>>choice;

    while(choice!=0) // Enabling the program to run again again as much as the choice is different from 0
    {
    switch(choice) // Running the program for specific case
    {
    case 'a':
      sum = add(n1,n2);
     cout<<"The sum of the two numbers is "<<sum<<endl<<endl;
      break;
    case 's':
     dif = sub(n1,n2);
     cout<<"The difference of the two numbers is "<<dif<<endl<<endl;
      break;
    case 'm':
     pro = mul(n1,n2);
    cout<<"The product of the numbers is "<<pro<<endl<<endl;
    break;
  case 'd':
      quo = divi(n1,n2);
     cout<<"The quotient of the two numbers is "<<quo<<endl<<endl;
     break;
  default:
    cout<<"sorry your choice is wrong,please try again!"<<endl<<endl;

    }
  menu(); // Recalling menu function in case the given choice is not provided on the menu!
          //u can also use "Enter the your choice again" if u don wanna call menu again!
  cin>>choice;
    }
}

// Definitions of the functions
int add(int num1, int num2)
{
    return num1+num2;
}

int sub(int num1, int num2)
{
    return num1-num2;
}

int mul(int num1, int num2)
{
    return num1*num2;
}

int divi(int num1, int num2)
{
    return num1/num2;
}

void menu()
{
    cout<<"   #############################################"<<endl;
    cout<<"   #############################################"<<endl;
    cout<<"   ###    press a to add two numbers         ###"<<endl;
    cout<<"   ###    press s to subtract two numbers    ###"<<endl;
    cout<<"   ###    press m to multiply two numbers    ###"<<endl;
    cout<<"   ###    press d to divide two numbers      ###"<<endl;
    cout<<"   #############################################"<<endl;
    cout<<"   #############################################"<<endl;
}

