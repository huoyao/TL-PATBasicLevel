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
  int input;
  scanf("%d",&input);
  int hund=input/100;
  if (hund)
  {
    string str(hund,'B');
    printf("%s",str.c_str());
  }
  input-=(hund*100);
  int ten=input/10;
  if (ten)
  {
    string str(ten,'S');
    printf("%s",str.c_str());
  }
  string str("123456789");
  int ge=input%10;
  if (ge)
  {
    string str_ge(str,0,ge);
    printf("%s\n",str_ge.c_str());
  }else{
   // printf("0\n");
  }
  system("pause");
  return 0;
}