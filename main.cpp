//Authors:
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
    string first;
    string last;
    int lucky;
  //get user input
    cout<<"What is your first name? ";
    cin>>first;

    cout<<"What is your last name? ";
    cin>>last;
  //tell fortune
    cout<<"Welcome, " <<first[0]<<last[0]<<" here is your fortune..."<<endl;
   // cout<<"The variable has "<<first.length()<<" letters"<<endl;
    cout<<"Your lucky number is "<<first.length()<<endl; 
    return 0;
}
