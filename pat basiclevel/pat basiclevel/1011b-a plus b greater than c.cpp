#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

/************************************************************************/
/*use double and pay attention to ": "                                   */
/************************************************************************/

//bool cmpAbs(vector<int> const& vec_a,vector<int> const& vec_b)
//{
//  vector<int> abs_a(vec_a.begin()+1,vec_a.end());
//  vector<int> abs_b(vec_b.begin()+1,vec_b.end());
//  if (abs_a.size()>abs_b.size())
//  {
//    return true;
//  }else if (abs_a.size()<abs_b.size())
//  {
//    return false;
//  }else
//  {
//    for (vector<int>::const_iterator iter_a=abs_a.cbegin(),iter_b=abs_b.cbegin();iter_a!=abs_a.cend();++iter_a,++iter_b)
//    {
//      if (*iter_a>*iter_b)
//      {
//        return true;
//      }
//    }
//  }
//  return false;
//}
//
//bool cmp(vector<int> const& vec_a,vector<int> const& vec_b)
//{
//  if (vec_a[0]<vec_b[0])
//  {
//    return true;
//  }else if(vec_a[0]>vec_b[0])
//  {
//    return false;
//  }else if (vec_a[0]=='-')
//  {
//    return cmpAbs(vec_b,vec_a);
//  }else
//  {
//    return cmpAbs(vec_a,vec_b);
//  }
//}
//
//vector<int> add(vector<int> const& vec_a,vector<int> const& vec_b)
//{
//  vector<int> vec_result;
//  if (vec_a[0]==vec_b[0])
//  {
//    vec_result.push_back(vec_a[0]);
//
//  }
//}



int main()
{
  int case_num;
  cin>>case_num;
  double a,b,c;
  //vector<int> vec_a;
  //vector<int> vec_b;
  //vector<int> vec_c;
  //cin.get();
  int case_index=0;
  //cout<<a<<endl;
  //c=a+b;
  //cout<<(a+b>c)<<endl;
  string result_str;
  while(case_index!=case_num)
  {
    cin>>a>>b>>c;
    bool flag;
    flag=(a+b>c);
    //char c;
    ////deal with vec_a
    //c=cin.get();
    //if (c=='-')
    //{
    //  vec_a.push_back('-');
    //}else{
    //  vec_a.push_back('+');
    //  vec_a.push_back('c'-'0');
    //}
    //while (c=cin.get()!=' ')
    //{
    //  vec_a.push_back('c'-'0');
    //}
    ////deal with vec_b
    //c=cin.get();
    //if (c=='-')
    //{
    //  vec_b.push_back('-');
    //}else{
    //  vec_b.push_back('+');
    //  vec_b.push_back('c'-'0');
    //}
    //while (c=cin.get()!=' ')
    //{
    //  vec_b.push_back('c'-'0');
    //}
    ////deal with vec_c
    //c=cin.get();
    //if (c=='-')
    //{
    //  vec_c.push_back('-');
    //}else{
    //  vec_c.push_back('+');
    //  vec_c.push_back('c'-'0');
    //}
    //while (c=cin.get()!='\n')
    //{
    //  vec_c.push_back('c'-'0');
    //}

    //vector<int> vec_result=add(vec_a,vec_b);
    //bool flag=cmp(vec_result,vec_c);
    if (flag)
    {
      result_str="true";
    }else{
      result_str="false";
    }
    cout<<"Case #"<<case_index+1<<": "<<result_str<<endl;  //blank space
    ++case_index;
  }
  system("pause");
 return 0;
}