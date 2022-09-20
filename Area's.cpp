#include<iostream>
using namespace std;
int main()
int area(int);
int area(int,int);
float area(float);
float area(float,float);
{
        int a,length,breadth;
        float radius,base,height;
        cout<<"Enter side of a square:";
        cin>>a;
        cout<<"Enter length and breadth of rectangle:";
        cin>>length>>breadth;
        cout<<"Enter radius of circle:";
        cin>>radius;
        cout<<"Enter base and height of triangle:";
        cin>>base>>height;
        cout<<"Area of square is"<<area(a);
        cout<<"\nArea of rectangle is "<<area(length,breadth);
    cout<<"\nArea of circle is "<<area(radius);
    cout<<"\nArea of triangle is "<<area(base,height);
}
int area(int a)
{
    return(a*a);
}
int area(int length,int breadth)
{
    return(length*breadth);
}
float area(float radius)
{
    return(3.14*radius*radius);
}
float area(float base,float height)
{
   return((base*height)/2);
}
