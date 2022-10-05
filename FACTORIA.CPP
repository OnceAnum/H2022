#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int i,num,fact=1;
cout<<"Enter integer:\n";
cin>>num;
i=num;
while(num)
{  fact*=num;
       --num;
}
cout<<"the factorial of "<<i<<" is "<<fact<<"\n";
getch();
return 0;
}