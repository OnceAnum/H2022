#include<iostream.h>
#include<conio.h>
int main()
{
clrscr();
int change(int);
int orig = 10;
cout<<"\nThe original value is "<<orig <<"\n" ;
cout<<"\nReturn value of fumction change() is "<<change(orig) <<"\n" ;
cout<<"\nThe value after function change() is over "<<orig<<"\n" ;
getch();

return 0 ;
}
int change(int a)
{
a=20 ;
return a ;
}