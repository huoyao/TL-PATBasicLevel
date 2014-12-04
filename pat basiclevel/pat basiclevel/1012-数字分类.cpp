#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> vec_five[5];
  int case_num;
  cin>>case_num;
  int input_num,vec_index;

  while(case_num--)
  {
    cin>>input_num;
    vec_index=input_num%5;
    vec_five[vec_index].push_back(input_num);
  }
  int sum=0;
  //num 1
  for (vector<int>::iterator iter=vec_five[0].begin();iter!=vec_five[0].end();++iter)
  {
    if (*iter%2==0)
    {
      sum+=*iter;
    }
  }
  if (sum)
  {
    cout<<sum<<" ";
  }else
  {
    cout<<"N ";
  }
  //num 2
  bool flag=true;
  sum=0;
  for (vector<int>::iterator iter=vec_five[1].begin();iter!=vec_five[1].end();++iter)
  {
    if (flag)
    {
      sum+=*iter;
      flag=!flag;
    }else
    {
      sum-=*iter;
      flag=!flag;
    }
  }
  if (vec_five[1].size())
  {
    cout<<sum<<" ";
  }else
  {
    cout<<"N ";
  }
  //num 3
  if (vec_five[2].size()!=0)
  {
    cout<<vec_five[2].size()<<" ";
  }else
  {
    cout<<"N ";
  }
  //num 4
  float avg=0.f;
  for (vector<int>::iterator iter=vec_five[3].begin();iter!=vec_five[3].end();++iter)
  {
    avg+=*iter;
  }
  if (vec_five[3].size())
  {
    avg/=(1.f*vec_five[3].size());
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<avg<<" ";
  }else
  {
    cout<<"N ";
  }
  //NUM 5
  vector<int>::iterator man_iter=max_element(vec_five[4].begin(),vec_five[4].end());
  if (vec_five[4].size())
  {
    cout<<*man_iter;
  }else
  {
    cout<<"N";
  }
  cout<<endl;
  system("pause");
  return 0;
}