//In this program we learn how to separate odd and even numbers for a given natural number.
#include<iostream.h>
int main()
{
int n,sum_even=0,sum_odd=0,ctr=1;
cout<<"Upto which natural number ?";
cin>>n;
while(ctr <=n)
{
if(ctr%2==0)          //number is even
sum_even+=ctr;
else
sum_odd+=ctr;
ctr++;               //incrment the counter
}           //end of while
cout<<"\n"<<"The sum of even integer is"<<sum_even;
cout<<"\n"<<"The sum of odd integer is "<<sum_odd;
return 0;
}
