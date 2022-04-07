#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include <cstdlib>
#include <string>
#include<bits/stdc++.h>
void patient_information();
void display_data(char n[]);
using namespace std;


class all
{
private:
    int task;


    int house;
    char street[30];
    char city[30];
    char state[30];
    char country[30];


    int day;
    int month;
    int year;


    char name[30];
    string martial_status;
    char id[6];
    string bld_group;
    string sex;
    char dsg[50];


protected:
    void enter_patient_info();
    void show_patient_detail();

public:
    void software_detail();
    void tasks();
    char answer;
    char answer1;
    char ch;
    int serial;

    void show_patient_information();
    //void See_our_doctor's_list();
    void view_detail_about_the_programm();
    void want_to_fixed();
    void See_our_doctors();
    void write_data()
    {
        cout<< "Enter registration/id no:";
        cin>>id;
        cout<< "\n\n";
        cout<<  "Enter patient name:";
        cin.ignore(1);
        cin.getline(name,30);
        cout<< "\n\n"<< endl;
        cout<< "Disease catagory:";
        cin.ignore(1);
        cin.getline(dsg,50);
        cout<< "\n\n"<< endl;
        cout<< "marital status:";
        cin>> martial_status;
        cout<< "\n\n"<< endl;
        cout<< "Enter Patient Sex:";
        cin>>sex;
        cout<< "\n\n"<< endl;
        cout<< "Enter patient blood group:";
        cin>>bld_group;

        cout<< "***********"<< endl;
    }

    void show_data()
    {
        cout<< "\n id no:"<< id<< endl;
        cout<< "Patient name:"<< name<< endl;
        cout<< "catagory:"<< dsg<< endl;
        cout<< "Marital status:"<< martial_status<< endl;
        cout<< "Sex:"<< sex << endl;
        cout<< "Blood Group:"<< bld_group<< endl;
    }



    char *ret_id_no()
    {
        return id;
    }
};

class date
{
    int day,month,year;
public:

    date(int dat,int mon,int yr)///constructer overloading
    {
        day=dat;
        month=mon;
        year=yr;
    }

    void enter_date();
    void show_date();


};

void date:: enter_date()
{

    cout<< "First of all you have  to give the current date:"<< "\n\n\n";
    cout<< "Year:";
    cin>> year;

    /**if(year<=0||year >=2019)
         {
             {cin>> year;
             cout<< "Wrong input"<< endl<< "please again enter the year "<< endl;}
             while(year<=0||year >=2019);
         }*/


    if(year<=0)
    {
        cout<< "Wrong input"<< endl<< "please again enter the year "<< endl;
    }

    cout<< "Month:";
    cin>> month;
    if(month<=0 ||month>12)
    {
        cout<< "Wrong input"<< endl<< "please again enter the month "<< endl;
    }

    cout<< "Date:";
    cin>> day;
    if(day<=0 || day > 31)
    {
        cout<< "Wrong input!!!!"<< endl<< "please again enter the date"<< endl;
    }

}

void date::show_date()
{


    system("CLS");
    cout<< "it is ";
    cout<< day;

    switch(day)
    {
    case 1:
        cout<< "st";
        break;
    case 2:
        cout<< "nd";
        break;
    case 3:
        cout<< "rd";
        break;
    default:
        cout<< "th";
        break;

    }/// end of date funtion(work)..


    switch(month)/// start month  work
    {
    case 1:
        cout<< ",January";
        break;
    case 2:
        cout<< ",February";
        break;
    case 3:
        cout<< ",March";
        break;
    case 4:
        cout<< ",April";
        break;
    case 5:
        cout<< ",May";
        break;

    case 6:
        cout<< ",June";
        break;
    case 7:
        cout<< ",july";
        break;
    case 8:
        cout<< ",August";
        break;
    case 9:
        cout<< ",September";
        break;
    case 10:
        cout<< ",October";
        break;
    case 11:
        cout<< ",November";
        break;
    case 12:
        cout<< ",December";
        break;


    }
    cout<< "," <<  year << endl;




}


class polymorphism1///MAIN CLASS/polymorphism 1
{
public:
    virtual  void about()
    {
        cout<< "aftabnagar"<< endl;
    }

};

class polymorphism2:public polymorphism1///CHILD CLASS 1/polymorphism 2
{
public:
    void about()
    {
        cout<< "***************************************"<< endl;
        cout<<"       ***SOFTWARE DETAILS***\n\n";
        cout<<" Programming Language     : C++ "<<"\n\n";
        cout<<" Aim                      : Simulation of the software used in Hospital"<<"\n\n";
        cout<< "**************Made by************** :"<<endl;
        cout<<"1.RAFSUN JANI SHUVO"<< endl;
        cout<<"2.MIZANUR RAHMAN"<< endl;

    }

};

class polymorphism3: public polymorphism2 ///child class2/polymosphism 3
{

public:
    void about()
    {

        cout<< "East West University"<< endl<< "Department of CSE"<< endl<< "***********************"<< endl;
        cout<<" Thank You for trying this program. "<<"\n\n";
        cout<< "**This is our project** "<< endl;
        cout<< "***************************************"<< endl;
        cout<<" Hope you like it..."<<"\n\n";
        cout<< "**********"<< setw(10)<< "=========="<< "************"<< endl;
        cout<< "\t\t\t**********"<< endl;

    }

};




all a;
polymorphism1 po;
int main()
{

    /*polymorphism1 *p1;
    polymorphism2 p2;
    polymorphism3 p3;

    p1=&p2;
    p1->about();
    */
    date d(1,2,3);
    d.enter_date();
    d.show_date();

    a.software_detail();
    // a.patient_information();
    //a.show_patient_information();
    //a.See_our_doctors();

    return 0;

}



void all::software_detail()
{
    cout<< "\t\t\t****Hospital mangement software****"<< endl;
    cout<< "\t\t\t****Hospital managemnt informantion****\n\n\n"<< endl;

    cout<< "\t\t\tYou need to select  your choice"<< endl;
    cout<< "1.new patient information"<< endl;
    cout<< "2.show patient information"<< endl;
    cout<< "3.See our doctor's list "<< endl;
    cout<< "4.Do you want to fix a sit?"<< endl;
    cout<< "5.view detail about the programm"<< endl;

    cout<< "\n\n\n Enter your choice:";
    cin>> task;

    switch(task)
    {
    case 1:/// new patient information
        patient_information();
        break;
    case 2:
        char num[6];
        cout<< "Enter reg no:";
        cin>>num;
        //display_spb(num);
        display_data(num);
        break;
    case 3:
        a.See_our_doctors();
        break;
    case 4:
        //a.view_detail_about_the_programm();
        a.want_to_fixed();
        break;
    case 5:
        system("cls");
        //a.view_detail_about_the_programm();
        cout<< "***"<< endl;
        polymorphism1 *p1;///ploymorphism
        polymorphism2 p2;///ploymorphism
        polymorphism3 p3;///ploymorphism

        p1=&p2;///ploymorphism
        p1->about();///ploymorphism
        p1=&p3;///ploymorphism
        p1->about();///ploymorphism
        break;

    }


}





void all::show_patient_information()
{

    system("cls");
    /**ifstream rafsun("patient.txt");

    while(rafsun >> PI[0].id >> PI[0].name >> PI[0].dsg >> PI[0].bld_group >> PI[0].martial_status >> PI[0].sex  )
    {
        cout<< "patient's id is::" << PI[0].id << endl;
        cout << "\n\n\n";
        cout<< "patient name is::" <<PI[0].name<< endl;
        cout << "\n\n\n";
        cout<< "Patient disaese catagory::"<< PI[0].dsg << endl;
        cout<< "\n\n\n";
        cout<< "patient blood group::" <<PI[0].bld_group <<endl;
        cout << "\n\n\n";
        cout<< "patient's marital stutas:: "<< PI[0].martial_status<<endl;
        cout << "\n\n\n";
        cout<< "sex::" << PI[0].sex<<  endl;
    }
    */
   /* ifstream file("project.txt");
    file.seekg(0);
    string line;
    while(file.good())
    {
        getline(file,line);
        cout<< line<< endl;
    }*/





}





void all::See_our_doctors()///function
{
    cout<< "1.Doctor(name )"<<  "-> Orthopedics specilist  \n " << endl;
    cout<< "2.Doctor(name )"<< "->  Heart specilist  \n " << endl;
    cout<< "3.Doctor(name )"<< "->  Medicine  specilist  \n" <<endl;
    cout<< "4.Doctor(name )"<< "->  Surgery specilist  \n" << endl;
    cout<< "5.Doctor(name )"<< "->  Female Surgery specilist  \n" << endl;
    cout<< "6.Doctor(name )"<< "->  Pscycologist     \n" << endl;
    cout<< "7.Doctor(name )"<< "->  Pediatric Surgery specilist  \n" << endl;
    cout<< "8.Doctor(name )"<< "->  Allergy specilist  \n" << endl;
    cout<< "9.Doctor(name )"<< "->  Screen specialist    \n" << endl;
    cout<< "10.Doctor(name )"<< "-> Arthritis  specilist  \n" << endl;
    cout<< "11.Doctor(name )"<< "-> Dental  specilist  \n" << endl;
    cout<< "12.Doctor(name )"<< "-> Gynecologist specilist  \n" << endl;
    cout<< "\n\n"<< endl;

    int x;
    cout<< "Enter your choice:";
    cin>> x;


    cout<< "\n\n"<< endl;
    switch(x)
    {

    case 1:
        cout << "Day :  Sat - Mon   : at (2.00-7.00)pm. "<< endl;
        break;
    case 2:
        cout << "Day :  Sat - Sun   : at (10.00-12.00)am. "<< endl;
        break;
    case 3:

        cout << "Day :  Sat - Sun   : at (1.00-.00)pm. "<< endl;
        break;
    case 5:
        cout << "Day :  Tue - Wed   : at (7.00-10.00)am. "<< endl;
        break;
    case 6:
        cout << "Day :  Wed - Sun   : at (10.00-12.00)am. "<< endl;
        break;
    case 7:
        cout << "Day :  Sat - Sun   : at 11.00.am-5.00pm "<< endl;
        break;
    case 8:
        cout << "Day :  Sat - Sun   : at (10.00-12.00)am. "<< endl;
        break;

    case 9:
        cout << "Day :  thu - Fri   : at (10.00-12.00)am. "<< endl;
        break;
    case 10:
        cout << "Day :  Sat - Wed   : at (10.00-12.00)am. "<< endl;
        break;
    case 11:
        cout << "Day :   Fri- Sun   : at (10.00-12.00)am. "<< endl;
        break;
    case 12:
        cout << "Day :  Wed - Fri   : at (3.00-7.00)p1m. "<< endl;
        break;


    }


}




/*void all::See_our_doctors(){}*/
void all::view_detail_about_the_programm()/// function   of details
{
    system("CLS");
    cout<< "***************************************"<< endl;
    cout<<"    ***SOFTWARE DETAILS***\n\n";
    cout<<" Programming Language     : C++ "<<"\n\n";
    cout<<" Aim                      : Simulation of the software used in Hospital"<<"\n\n";
    cout<<" Hope you like it..."<<"\n\n";
    cout<<" Thank You for trying this program. "<<"\n\n";
    cout<< "**This is our project** "<< endl;
    cout<< "***************************************"<< endl;

}

void all::want_to_fixed()
{

}

fstream fp,fp1;
void patient_information()///Binary File
{

    system("cls");

    char ch;
    fp.open("hospital.dat",ios::out|ios::app);
    do
    {

        a.write_data();
        fp.write((char*)&a,sizeof(all));
        cout<<"\n\nDo you want to add more record..(y/n?)";
        cin>>ch;
    }
    while(ch=='y'||ch=='Y');
    fp.close();


}


void display_data(char n[])///display function of file
{
    cout<<"Patient Details\n";
    int flag=0;
    fp.open("hospital.dat",ios::in| ios:: binary);
    while(fp.read((char*)&a,sizeof(all)))
    {
        if(strcmp(a.ret_id_no(),n)==0)
        {
            a.show_data();

            flag=1;
        }
    }

    fp.close();
    if(flag==0)
        cout<<"\n\npatient does not exist";
    getchar();


}



///End of programm

