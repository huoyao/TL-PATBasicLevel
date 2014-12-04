#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
  int n,n1=0,n2=0,n3=0;
  //char c1[101],c2[101],c3[101];
  scanf("%d",&n);
  char c;
  scanf("%c",&c);  //enter key
  bool flag=true;
  for (int i=0;i!=n;++i)
  {
    flag=true;
    n1=0;
    n2=0;
    n3=0;
    //scanf("%[^P]%*c%[^T]%*c%s%*c",c1,c2,c3);
    //string str1(c1),str2(c2),str3(c3);
    //string str_a1(str1.size(),'A');
    //string str_a2(str2.size(),'A');
    //string str_a3(str3.size(),'A');
    //if (str1!=str_a1 ||str2!=str_a2 ||str3!=str_a3)
    //{
    //  printf("NO\n");
    //  continue;
    //}
    //if (str1.size()*str2.size()!=str3.size())
    //{
    //  printf("NO\n");
    //  continue;
    //}
    //printf("YES\n");
    scanf("%c",&c);
    while(c!='P'&& c!='\n')
    {
      if (c!='A')
      {
        flag=false;
        break;
      }
      ++n1;
      scanf("%c",&c);
    }
    if (!flag || c=='\n')
    {
      printf("NO\n");
      if(c!='\n')scanf("%*s%*c");
      continue;
    }
    scanf("%c",&c);
    if (c!='A')
    {
      printf("NO\n");
      if(c!='\n')scanf("%*s%*c");
      continue;
    }
    ++n2;
    scanf("%c",&c);
    while(c!='T' && c!='\n')
    {
      if (c!='A')
      {
        flag=false;
        break;
      }
      ++n2;
      scanf("%c",&c);
    }
    if (!flag || c=='\n')
    {
      printf("NO\n");
      if(c!='\n')scanf("%*s%*c");
      continue;
    }
    scanf("%c",&c);
    while(c!='\n')
    {
      if (c!='A')
      {
        flag=false;
        break;
      }
      ++n3;
      scanf("%c",&c);
    }
    if (!flag)
    {
      printf("NO\n");
      if(c!='\n')scanf("%*s%*c");
      continue;
    }
    if (n1*n2==n3)
    {
      printf("YES\n");
    }else
    {
      printf("NO\n");
    }
    
  }
  system("pause");
  return 0;
}