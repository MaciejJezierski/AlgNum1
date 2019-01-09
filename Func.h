#ifndef _Func_h_
#define _Func_h_
namespace funkcje {

  double power(double x, int power)
  {
    if (power == 0)
      return 1;
    else if (x == 0)
      return 0;
    if (power < 0)
    {
      x= 1.0/x;
      power*=-1;
    }

    double ret = 1.0;
    for (int i = 0; i < power; i ++)
    {
      ret *=x;
    }
    return ret;

  }

  double fact(int n)
  {

    if (n==0 || n==1)
    return 1.0;
    else {
      double ret = 1;
       for (int i = 2; i <= n; i++)
        ret*=i;
        return ret;
    }
  }
}
#endif
