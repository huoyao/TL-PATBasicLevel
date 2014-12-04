#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(bool *flag,int i)
{
  int sq=static_cast<int>(sqrt(1.f*i));
  for (int j=2;j<=sq;++j)
  {
    if (i%j==0)
    {
      return false;
    }
  }
  return true;
}

int main()
{
  bool prime_flag[110000];
  vector<int> vec_prime;
  vec_prime.reserve(10000);
  for (int i=0;i!=110000;++i)
  {
    prime_flag[i]=true;
  }
  for (int i=2;i!=110000;++i)
  {
    if (prime_flag[i])
    {
      if(isPrime(prime_flag,i))
      {
        vec_prime.push_back(i);
        if (vec_prime.size()>10000)
        {
          break;
        }
        int index_inc=2,index_change=index_inc*i;
        while(index_change<10001)
        {
          prime_flag[index_change]=false;
          ++index_inc;
          index_change*=index_inc;
        }
      }else
      {
        prime_flag[i]=false;
      }
    }
  }
  int pn,pm;
  cin>>pm>>pn;
  int count_num=1;
  if (pm<=0 && pn<=0)
  {
    return 0;
  }else if(pm<=0 && pn>0)
  {
    pm=1;
  }
  for (int i=pm-1;i<pn;++i)
  {
      if (count_num%10 && i!=pn-1)
      { 
        cout<<*(vec_prime.begin()+i)<<" ";
      }else{
        cout<<*(vec_prime.begin()+i)<<endl;
      }
      ++count_num;
  }
  system("pause");
  return 0;
}