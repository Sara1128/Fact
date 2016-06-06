#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char str[100],temp[100];
    int i,j=0;
    cin>>str;
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]!='a'||str[i]!='e'||str[i]!='i'||str[i]!='o'||str[i]!='u'||str[i]!='A'||str[i]!='E'||str[i]!='I'||str[i]!='O'||str[i]!='U')
            {
               temp[j]=str[i];
               j++;
             }
     }
    cout<<strrev(temp);
    return 0;
}
