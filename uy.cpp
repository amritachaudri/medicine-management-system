#include<iostream>
using namespace std;
#include<fstream>
#include<string.h>
#include<stdlib.h>
class med
{
protected:
    string txt;
    ifstream file;
    char name[20];
    string txt1;
    ofstream file1;
    int price;
    int q;
    int price1;
public:
    int show()
    {
    file.open("med.txt");
    while(getline(file,txt))
      {
         cout<<txt<<endl;
      }
    file.close();
    }
    int bill()
    {
    file.open("med.txt");
    {
    cout<<"enter the medicine to be searched for"<<endl;
    cin>>name;
    cout<<"enter the boxes required";
    cin>>q;
    cout<<"enter the price of the medicine"<<endl;
    cin>>price;
    while(getline(file,txt))
    {
      txt1=txt;
      txt1==name;
    cout<<"the medicine is found";
    file.close();
    price=price*q;
    price1=price*0.12;
    price=price1+price;
    }
    file1.open("billing.txt",ios::app);
    {
        file1<<name<<endl;
        file1<<price<<endl;
    }
    file1.close();
    cout<<endl;
    file.open("billing.txt");
    {
        while(getline(file,txt))
      {
         cout<<txt<<endl;
      }
    file.close();
    }
    }
    }
};
class med1
{
protected:
    string deleteline;
    string line;
    ifstream fin;
    ofstream temp;
    string data;
    ofstream outfile;
    string txt1;
public:
    int add()
    {
    {
    cout<<"Enter the medicine to be added in the file";
    cin>>data;
    outfile.open("med.txt",ios::app);
    outfile<<data;
    cout<<"THE DATA ENTERED SUCCESSFULLY";
    }
    outfile.close();
    fin.open("med.txt");
    while(getline(fin,txt1))
      {
         cout<<txt1<<endl;
      }
    fin.close();
    }
     int del()
     {
       fin.open("med.txt");
       temp.open("temp.txt");
       {
       cout << "Which line do you want to remove? ";
       cin >> deleteline;
       while (getline(fin,line))
        {
         if (line != deleteline)
          {
            temp << line << endl;
          }
        }
        temp.close();
        fin.close();
        remove("med.txt");
        rename("temp.txt","med.txt");
        cout<<"MEDICINE DELETED";
    }
    fin.close();
    temp.close();
    outfile.close();
    fin.open("med.txt");
    {
    while(getline(fin,txt1))
      {
         cout<<txt1<<endl;
      }
    fin.close();
     }
     }
};

class option: public med,public med1
{
    public:
    option()
    {
        cout<<"  ********************WELCOME TO THE MEDICAL STORE MANGEMENT***********************"<<endl;
    }
};
int main()
{
    int choice;
    option op;
    cout<<"     Enter the choice:"<<endl;
    cout<<"  1. SHOW ALL THE MEDICINE AVAILABLE"<<endl;
    cout<<"  2. BILLING"<<endl;
    cout<<"  3. ADD MEDICINE"<<endl;
    cout<<"  4. DELETE MEDICINE"<<endl;
    cout<<"  5. EXIT"<<endl;
    cin>>choice;
     switch(choice)
    {
        case 1: op.show();
        break;
        case 2: op.bill();
        break;
        case 3: op.add();
        break;
        case 4: op.del();
        break;
        case 5:exit(0);
    }
}
