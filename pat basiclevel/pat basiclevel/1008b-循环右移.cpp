#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int gcd(const int &num_a,const int &num_b)
{
  if (num_b==0)
  {
    return num_a;
  }else{
    return gcd(num_b,num_a%num_b);
  }
}

int main()
{
  int num_m,step_n;
  cin>>num_m>>step_n;
  vector<int> vec_num;
  vec_num.reserve(num_m);
  int input_num;
  for (int i=0;i!=num_m;++i)
  {
    cin>>input_num;
    vec_num.push_back(input_num);
  }
  step_n%=num_m;                    //step pruning. eg:step=0 equals step=num_m
  int loop_num=gcd(num_m,step_n);   //loop times
  loop_num%=num_m;                  //loop times pruning. eg:if loop times=num_m we don't need to loop, print directly.
  int temp_num_l,temp_num_r;
  for (int i=0;i!=loop_num;++i)
  {
    int step_index=i;
    temp_num_l=*(vec_num.begin()+i);
    do 
    {
      step_index+=step_n;
      step_index%=num_m;           //we must set step_index=0 when step_index=num_m
      temp_num_r=*(vec_num.begin()+step_index);
      *(vec_num.begin()+step_index)=temp_num_l;
      temp_num_l=temp_num_r;
    } while (step_index!=i);
  }
  for (vector<int>::const_iterator iter=vec_num.cbegin();iter!=vec_num.cend()-1;++iter)
  {
    cout<<*iter<<" ";
  }
  cout<<*(vec_num.cend()-1);
  return 0;
}