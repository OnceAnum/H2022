#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
unsigned long first,second,third,n;
first=0;
second=1;
cout<<"how many elements :  ";
cin>>n;
cout<<"FIBONACCI SERIES -:\n";
cout<<first<<" "<<second;
for(int i=2;i<n;++i)
{   third=first+second;
cout<<" "<<third;
first=second;
second=third;
}
getch();
return 0;

}