#include<iostream>
using namespace std;

void area(){
    int a;
    int b;
    int c;
    cout<<"Enter the length and breath ";
    cin>>a;
    cin>>b;
    c=a*b;
    cout<<"\nArea of rectangle is "<<c<<" ";
}
void circle(){
int r;
double result;
cout<<"Enter the radius of circle ";
cin>>r;
result=3.14*r*r;
cout<<"Area of circle is "<<result<<" ";
}
int main(){
int ch;
while(1){
cout<<"\n1.Area of rectange\n";
cout<<"2.Area of circle\n";
cout<<"3.Exit\n";
cout<<"Enter your choice";
cin>>ch;
switch(ch)
{
case 1:area();
break;
case 2:circle();
break;
case 3:exit(1);
default:cout<<"invalid input\n";
  }
 }
return 0;
}









