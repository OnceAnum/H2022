#include <iostream.h>
#include <conio.h>
#include<stdio.h>
class person
{   char name[100],gender[10];
    int age;
    public:
        void getdata()
        {   cout<<"Name: ";
            gets(name);
            cout<<"Age: ";
            cin>>age;
            cout<<"Gender: ";
            cin>>gender;
        }
        void display()
        {   cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<gender<<endl;
        }
};
class student: public person
{   char institute[100];
    int standard;
    public:
	void getdata()
	{   person::getdata();
	    cout<<"Name of College/School: ";
	    gets(institute);
	    cout<<"Standard: ";
	    cin>>standard;
	}
	void display()
	{   person::display();
	    cout<<"Name of College/School: "<<institute<<endl;
	    cout<<"Standard: "<<standard<<endl;
	}
};
class employee: public person
{   char company[100];
    float salary;
    public:
	void getdata()
	{   person::getdata();
	    cout<<"Name of Company: ";
	    gets(company);
            cout<<"Salary: Rs.";
            cin>>salary;
        }
        void display()
        {   person::display();
            cout<<"Name of Company: "<<company<<endl;
            cout<<"Salary: Rs."<<salary<<endl;
        }
};

void main()
{   clrscr();
    student s;
    employee e;
    cout<<"Student"<<endl;
    cout<<"Enter data"<<endl;
    s.getdata();
    cout<<endl<<"Displaying data"<<endl;
    s.display();
    cout<<endl<<"Employee"<<endl;
    cout<<"Enter data"<<endl;
    e.getdata();
    cout<<endl<<"Displaying data"<<endl;
    e.display();
    getch();
}
