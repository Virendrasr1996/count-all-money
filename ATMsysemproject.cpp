// Q project:-ATM system
// Q mini project - ATM
// check balance
// cash withdraw
// user details
// update mobile no.
#include<conio.h>
#include <iostream>
#include <string>
using namespace std;

class atm       //class atm
{
private:                 //private member varibles
    long int account_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;

public:           // public member functions
    
    // setData function is setting the data into the private member varibles
void setData(long int account_No_a,string name_a,int PIN_a, double
balance_a, string mobile_No_a)
 {
     account_No =account_No_a;
  // assignning the formal arguments to the private member var's    
     name =name_a;
     PIN= PIN_a;
    balance=balance_a ;
    mobile_No=mobile_No_a;
 } 
 //getAccountNo function is returning the user's account_No
 long int getAccountNo()
 {
     return account_No;
 }
 
 //getAccountNo function is returning the user's Name
 string getName()
 {
     return name;
 }
  //getAccountNo function is returning the user's PIN
 int getPIN()
 {
     return PIN;
 }
  //getbalance function is returning the user's Bank balance
 double getbalance()
 {
     return balance;
 }
  //getMobileNo function is returning the user's Mobile_No
 string getMobileNo()
 {
     return mobile_No;
 }
 // setMobile function is updating the user moblie_No
 void setMobile(string mob_prev,string mob_new)
 {
     if (mob_prev== mobile_No)  // it will check old moblie_No
{          
  mobile_No = mob_new;      // and update with new,if old matches       
        
cout<<endl << "Sucessfully Updated Mobile no.";
  _getch();  //getch is to hold the screen(untill user press any key)
}
else    // does not update if old mobile no. does matches
{
    cout<< endl<<"Incorrect !!! old Mobile no";
    _getch(); //getch is to hold the screen(untill user press any key)
}
}
//cashWithDraw function is used to withdraw money from atm
void cashWithDraw(int amount_a)
{
 if (amount_a>0 && amount_a <balance) // check entered amount validity  
{
    balance -= amount_a; // balance=balance- amount_a
cout<<endl<< "Please Collect Your Cash ";
cout<<endl<<"Available Balance:" <<balance;
_getch(); // getch is to hold the screen(untill user press any key)
}
 else
 {
     cout<<endl<<"Invalid Input or Insufficient Balance";
     _getch(); // getch is to hold the screen (untill user press any key)
 }
}
 };
int main()
{
int choice =0, enterPIN; //enterPIN and enterAccountNo.-->user authentication
long int enterAccountNo;
system("cls");     //function
//created User(object)
 atm user1;   
 //Set User details(into object)  (Setting Default data)
 user1.setData(1098765432,"Virendra Singh Rawat",1111,50000.90,"8824365385");

do
{
 system("cls");
 cout<<endl<<"****Welcome to ATM"<< endl;
 cout<<endl<<"Enter Your Account No:-"; //asking user to enter account_No
cin>>enterAccountNo;
cout<<endl<<"Enter PIN:-";  //asking user to enter PIN
cin>>enterPIN;
//check whether enter values matches with user details
if((enterAccountNo==user1.getAccountNo())&&(enterPIN==user1.getPIN()))
{
 do
    {
        int amount=0;
        string oldMobileNo,newMobileNo;
        
        system("cls");
        //user Interface
      cout<<endl<<"**** Welcome to ATM *****"<<endl;
      cout<<endl<<"Select OPtions";
      cout<<endl<<"1.Check Balance";
      cout<<endl<<"2.Cash withdraw";
      cout<<endl<<"3.Show User Details";  
      cout<<endl<<"4.Update Mobile no.";
      cout<<endl<<"5.Exit"<<endl;
      cin>>choice;  //taking user choice
        
        switch(choice) //switch condition
     {
         case 1:
         cout<<endl<<"Your Bank Balance is :-"<<user1.getbalance(); 
     
         //getbalance is ... printing the users bank balance
         _getch();
         break;
         case 2:           //if user presses 2
        cout<<endl<<"Enter the amount :-" ;
        cin>>amount;
        user1.cashWithDraw(amount); //calling cashWithDraw function
    break;
    
    case 3:
   cout<<endl<<"***User Details are :-" ;
    cout<<endl<<"-> Account no:-"<<user1.getAccountNo();
    cout<<endl<<"-> Name:-"<<user1.getName();
    cout<<endl<<"-> Balance:-"<<user1.getbalance();
    cout<<endl<<"-> Mobile_No:-"<<user1.getMobileNo();
    //getting and printing user details
    _getch();
    break;
    case 4:   //if user presses
     cout<<endl<<"Enter Old Mobile_No:-";
     cin >>oldMobileNo;    //take old Mobile Noake 
         cout<<endl<<"Enter new Mobile_No:-";
     cin >>newMobileNo;   //take new Mobile Noake 
     user1.setMobile(oldMobileNo,newMobileNo) ; //now set new Mobile no   
    break;
    
    case 5:  // if user presses 5
    exit(0);    //exit application
    
    default:   // handle invalid user inputs
    cout<<endl<<"Enter Valid Data !!!";
//    _getch();
	 }   
    }
    while(1);// //menu condition will always ture and loop is capable
              // capable of running infinite times
//  return 0;
  }
else
{
cout<<endl<<"User Details are Invalid !!!";
_getch();
}
}
while(1);    //LOGIN //condition will always ture and loop is capable
             //of running infinite times
return 0;
}
