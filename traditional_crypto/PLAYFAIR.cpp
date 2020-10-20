#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
pair<int,int>search(char c,char a[5][5])
{ pair<int,int>c1;
  c1.first=0;
  c1.second=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i][j]==c)
            {
               
                c1.first=i;
                c1.second=j;
                 return c1;
            }
            
        }
    }
    
    
}
int main()
{
char a[5][5];
string s,p;
cout<<"key text";
cin>>s;
cout<<"plain text";
cin>>p;
string res;
vector<char>v;
for(int i=0;i<s.size();i++)
{ auto it=find(v.begin(),v.end(),s[i]);
   if(it!=v.end())
   {
       v.push_back('X');
       res+='X';
   }else
   {
   v.push_back(s[i]); 
   
    res+=s[i];
   }
}

cout<<res<<"\n";
char c1='A';
int c=7;
for(int i=0;i<=25;i++,c1++)
{
  
    auto it=find(v.begin(),v.end(),c1);
    if(it!=v.end())
    {if(*it=='J')
    c=0;
    if(*it=='I')
    {c=1;}
  continue;}
  else if(c==0 && c1=='I'||c==1 && c1=='J')
  continue;
  else if(c1=='J')
  continue;
  else
  res+=c1;
}

//cout<<res<<"\n";
int k=0;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        a[i][j]=res[k];
        k++;
        //cout<<a[i][j]<<" ";
    }
}
pair<int ,int>q1;
pair<int ,int>q2;
cout<<"Encrypted word:";
for(int i=0;i<p.size();i+=2)
{q1=search(p[i],a);
q2=search(p[i+1],a);

if(q1.first==q2.first)
{
    cout<<a[q1.first][(q1.second+1)%5];
     cout<<a[q2.first][(q2.second+1)%5];
}
else if(q1.second==q2.second)
{ cout<<a[(q1.first+1)%5][q1.second];
     cout<<a[(q2.first+1)%5][q2.second];
}
 if(q1.first>q2.first)
{
    cout<<a[q1.first][q2.second];
     cout<<a[q2.first][q1.second];
    
    
} else 
{  cout<<a[q1.first][q2.second];
  
    cout<<a[q2.first][q1.second];
    
}}
return 0;
}

