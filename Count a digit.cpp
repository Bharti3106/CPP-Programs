
#include <iostream>

using namespace std;

int main()

{
   int num, count = 0, rem =0;
       cin>>num;

    while(num!=0)
    {
        rem = rem+ num%10;
        num=num/10;
        count++;
    }
    cout<<count;
    return 0;
}
