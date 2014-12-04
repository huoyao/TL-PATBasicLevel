#include <iostream>
#include <string>
#include <cctype>
#include <map>
using namespace std;
/************************************************************************/
/*pay attention to input_a1[idx]<='G'                                   */
/*pay attention to input_a1[idx]<='N'                                   */
/************************************************************************/
int main()
{
  string input_a1,input_a2,input_b1,input_b2;
  map<char,string> week;
  getline(cin,input_a1);
  getline(cin,input_a2);
  getline(cin,input_b1);
  getline(cin,input_b2);
  int idx=0;
  week['A']="MON";
  week['B']="TUE";
  week['C']="WED";
  week['D']="THU";
  week['E']="FRI";
  week['F']="SAT";
  week['G']="SUN";
  bool flag_week=true;
  while (idx<static_cast<int>(input_a1.size()) && idx<static_cast<int>(input_a2.size()))
  {
    if (flag_week && input_a1[idx]==input_a2[idx] && isupper(input_a1[idx]) && input_a1[idx]<='G')   //pay attention to input_a1[idx]<='G'
    {
      cout<<week[input_a1[idx]]<<" "; 
      flag_week=false;
    }else if (!flag_week && input_a1[idx]==input_a2[idx] && (isupper(input_a1[idx]) || isdigit(input_a1[idx])) && input_a1[idx]<='N') //pay attention to input_a1[idx]<='N'
    {
      int hour;
      if (isupper(input_a1[idx]))
      {
        hour=input_a1[idx]-'A'+10;  
      }else if (isdigit(input_a1[idx]))
      {
        hour=input_a1[idx]-'0';
      }
      if (hour<10)
      {
        cout<<"0"<<hour<<":";
      }else
      {
        cout<<hour<<":";
      }
      break;
    }
    ++idx;
  }
  idx=0;
  while(idx<static_cast<int>(input_b1.size()) && idx<static_cast<int>(input_b2.size()))
  {
    if (input_b1[idx]==input_b2[idx] && isalpha(input_b1[idx]))
    {
      if (idx<10)
      {
        cout<<"0"<<idx<<endl;
        break;
      }else
      {
        cout<<idx<<endl;
        break;
      }
    }
    ++idx;
  }
  system("pause");
  return 0;
}