
#include <iostream>
using namespace std;
int main()

{
   int number, count = 0, rem =0,rev=0;
       cin>>number;
       int num = number;

    while(num!=0)
    {
        rem=num%10;
        rev=rev*10 + rem;
        num=num/10;
    }
    if(number == rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not a Palindrome";
    }
    return 0;
}
