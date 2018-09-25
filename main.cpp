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
    int index;
    index=last.length()-1;
  //get user input
    cout<<"What is your first name?"<<endl;
    cin>>first;

    cout<<"What is your last name?"<<endl;
    cin>>last;
  //tell fortune
    cout<<"Welcome, " <<first[0]<<"."<<last[0]<<".,"<<" here is your fortune..."<<endl;
   // cout<<"The variable has "<<first.length()<<" letters"<<endl;
    cout<<"your lucky number is "<<first.length()<<endl;
    if(first[0] == 'a' || first[0] == 'A' || first[0] == 'e' || first[0] == 'E' || first[0] == 'i' || first[0] == 'I' || first[0] == 'o' || first[0] == 'O' )
    {
            cout<<"you are destined to be famous! "<<endl;
    }
    else
    {
            cout<<"you should keep a low profile."<<endl;
    }
    if(index == 'a' || index == 'A' || index == 'e' || index == 'E' || index == 'i' || index == 'I'|| index == 'o' || index == 'O')
    {
            cout<<"you have already me your true love. "<<endl;
    }
    cout<<"have a good day!"<<endl;

    return 0;
}
