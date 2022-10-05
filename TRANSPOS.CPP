#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
int ar[3][3],i,j,arr[3][3];
cout<<"enter 3*3 array elements ; \n";
for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
 {
 cin>>arr[i][j];
 }
}
{
arr[i][j]=arr[j][i];
}
}
cout<<"TRANSPOSE of matrix is : \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" " <<arr[i][j];
}cout<<"\n";
}
getch();
}