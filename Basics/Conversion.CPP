//IN this program, learn how to do temperature conversions. 
#include<iostream.h>
int main()
{
int choice;
double temp,conv_temp;
cout<<"Temperature Conversions Menu"<<"\n";
cout<<"1.Fahrenheit to Celsius"<<"\n";
cout<<"2.Celsius to Fahrenheit"<<"\n";
cout<<"3.Enter your choice(1-2) : ";
cin>>choice;
if(choice==1)
{
cout<<"\n"<<"Enter temperature in Fahrenheit : ";
cin>>temp;
conv_temp=(temp-32)/1.8;
cout<<"The temperature in Celsius is"<<conv_temp<<"\n";
}
else
{
cout<<"\n"<<"Enter temperature in Celsius: ";
cin>>temp;
conv_temp=(1.8*temp)+32;
cout<<"The temperature in Fahrenheit is"<<conv_temp<<"\n";
}
return 0;
}
