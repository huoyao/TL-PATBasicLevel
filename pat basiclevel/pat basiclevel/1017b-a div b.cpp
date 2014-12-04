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
  int input_int[1001];
  char c;
  int cnt=0;
  scanf("%c",&c);
  while(c!=' ')
  {
    input_int[cnt++]=c-'0';
    scanf("%c",&c);
  }
  int di;
  scanf("%d",&di);
  int q,r;
  if (cnt==1)
  {
    q=input_int[0]/di;
    r=input_int[0]%di;
    printf("%d %d\n",q,r);
    return 0;
  }
  int j=0;
  int temp;
  while(j<cnt-1)
  {
    temp=input_int[j]*10+input_int[j+1];
    input_int[j]=temp/di;
    input_int[j+1]=temp%di;
    ++j;
  }
  int idx=0;
  for (;idx!=j;++idx)
  {
    printf("%d",input_int[idx]);
  }
  printf(" %d\n",input_int[idx]);
  system("pause");
  return 0;
}