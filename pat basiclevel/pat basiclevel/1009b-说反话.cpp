#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
  string input_str,output_str;
  vector<string> vec_str;
  getline(cin,input_str);
  stringstream stream_str(input_str);
  while(stream_str>>output_str)
  {
    vec_str.push_back(output_str);
  }
  
  for (vector<string>::const_reverse_iterator iter=vec_str.crbegin();iter!=vec_str.crend()-1;++iter)
  {
    cout<<*iter<<" ";
  }
  cout<<*(vec_str.crend()-1);
  return 0;
}