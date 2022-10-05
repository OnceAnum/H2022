#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void countblank();
void main()
{
clrscr();
ofstream fout("out.txt");
char line[20];
cout<<"Enter a line:";
gets(line);
fout<<line<<"\n";
fout.close();
countblank();
getch();
}
void countblank()
{
 ifstream fin("out.txt");
 char ch;
 int count=0;
 fin.seekg(0);
 while(!fin.eof())
 {
  fin.get(ch);
  if(ch==' ')
  count++;
 }
 cout<<"number of blank spaces in line are = "<<count;
 fin.close();
}