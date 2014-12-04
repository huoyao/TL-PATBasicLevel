/************************************************************************/
/* pay attention to input:1 0  for  output:0 0                          */
/************************************************************************/
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
using namespace std;


struct poly
{
  int coefficient;
  int exponent;
};

int main()
{
  vector<poly> vec_poly;
  int input_num;
  poly input_poly;
  string line;
  getline(cin,line);
  if (line=="")
  {
    return 0;
  }
  stringstream stream_str(line);
  while (stream_str>>input_num)
  { 
    input_poly.coefficient=input_num;
    stream_str>>input_num;
    input_poly.exponent=input_num;
    vec_poly.push_back(input_poly);
  }
  bool first_flag=false;
  for (vector<poly>::iterator iter=vec_poly.begin();iter!=vec_poly.end();++iter)
  {
    if (first_flag && iter->exponent!=0)
    {
      cout<<" ";
    }
    iter->coefficient*=iter->exponent;
    iter->exponent-=1;
    if (iter->exponent!=-1)
    {
      cout<<iter->coefficient<<" "<<iter->exponent;
      first_flag=true;
    }else if (iter->exponent==-1 && vec_poly.size()==1)
    {
      cout<<"0 0";
    }
  }
  cout<<endl;
  return 0;
}