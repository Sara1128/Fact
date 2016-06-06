#include<iostream>
using namespace std;
int main()
{
 int a,b,i,j;
 cin>>a>>b;
 int c,m=0;
for(int i=a;i<=b;i++)
{
    c=1;
for(int j=2;j<=i;j++)
{
       if(i%j==0)
       {
        c++;   
           
       }
 }
  if(c==2)
   {
   m++;
   }
}
cout<<m;
return 0;
}
