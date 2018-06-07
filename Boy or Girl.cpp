#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100];
    int i,j,len,a,count=0;
    cin>>c;
    len=strlen(c);
   // cout<<len<<endl;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i;j++)
        {
            if(c[j]>c[j+1])
            {
            a=c[j];
            c[j]=c[j+1];
            c[j+1]=a;

        }
    }
}
  for(i=0;i<len;i++)
  {
      if(c[i]!=c[i+1])
    count+=1;
  }
  //cout<<count;
  if(count%2==0)
  {
      cout<<"CHAT WITH HER!";
  }
  else
  {
      cout<<"IGNORE HIM!";
  }
}
