#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
  char sign,ch,ch_e,sign_;
  char input_str[10001];
  char expo[10001];
  scanf("%c%c.%[^E]%c%c%s",&sign,&ch,input_str,&ch_e,&sign_,expo);
  if (sign=='-')
  {
    printf("-");
  }
  int expo_;
  stringstream stream_str;
  stream_str<<expo;
  stream_str>>expo_;
  if (expo_==0)
  {
    printf("%c.%s",ch,input_str);
    return 0;
  }
  if (sign_=='-')
  {
    string string_zero(expo_-1,'0');
    printf("0.%s%c%s",string_zero.c_str(),ch,input_str);
    return 0;
  }else
  {
    if (expo_>=static_cast<int>(strlen(input_str)))
    {
      string string_zero(expo_-strlen(input_str),'0');
      printf("%c%s%s",ch,input_str,string_zero.c_str());
    }else
    {
      printf("%c",ch);
      for(int i=0;i!=expo_;++i)
      {
        printf("%c",input_str[i]);
      }
      printf(".%s",input_str+expo_);
    }
    return 0;
  }
  system("pause");
  return 0;
}