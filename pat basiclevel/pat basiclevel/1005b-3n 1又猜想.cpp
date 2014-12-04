#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <set>
using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  int input_data;
  set<int> set_input;
  vector<int> vec_output;
  vector<int> vec_input;
  for (int i=0;i!=n;++i)
  {
    scanf("%d",&input_data);
    vec_input.push_back(input_data);
    if (set_input.find(input_data)==set_input.end())
    {
      while(input_data!=1)
      {
        if (input_data%2)
        {
          input_data*=3;
          input_data+=1;
          input_data/=2;
          set_input.insert(input_data);
        }else{
          input_data/=2;
          set_input.insert(input_data);
        }
      } 
    }
  }
  for (int i=0;i!=n;++i)
  {
    if (set_input.find(vec_input[i])==set_input.end())
    {
      vec_output.push_back(vec_input[i]);
    }
  }
  sort(vec_output.begin(),vec_output.end());
  if (vec_output.size())
  {
    printf("%d",*vec_output.crbegin());
  }
  for (vector<int>::const_reverse_iterator cit=vec_output.crbegin()+1;cit!=vec_output.crend();++cit)
  {
    printf(" %d",*cit);
  }
  
  system("pause");
  return 0;
}