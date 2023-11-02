#include <iostream>
#include <cmath>

using namespace std;

// вариант 17: вывести значение составной функции в точке

int main()

{
  
  double x,y;
  cout << "x = ";
  cin >> x;
  if (x < -3) 
    {
        y = 1;
    }
  if ((x >=-3) && (x < -1))
    {
        y = -pow((4-pow((x+1),2)),0.5);
        //y=-sqrt(4-(x+1)*(x+1));
    }
  if ((x >= -1) && (x < 2))
    {
      y = -2;
    }
  if (x >= 2)
    {
        y = x-4;
    }
  cout<<"y="<<y;

}