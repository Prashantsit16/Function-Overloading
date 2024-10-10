//Prashant
//23070123102
//function overloading 
#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
float add(float a, float b)
{
    return a+b;
}
int add(int a, int b,int c )
{
    return a+b+c;
}
int main()
{
    cout<<"Addition of 2 integers: "<<add(3,4)<<endl;
     cout<<"Addition of 2 floats: "<<add(3.5f, 4.6f)<<endl;
      cout<<"Addition of 2 integers: "<<add(3,4,7)<<endl;
      return 0;
}