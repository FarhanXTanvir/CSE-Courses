// A C++ program to define a class Box with member functions.
#include <iostream>
using namespace std;
class BOX
{
    public: 
    double length, breadth, height;
    
    void input_value()
    {
        cout<<"Enter three sides of a box: "<<endl;
        cin>>length>>breadth>>height;
    }
    void print_value()
    {
        cout<<"Length : "<<length<<endl;
        cout<<"Breadth : "<<breadth<<endl;
        cout<<"Height : "<< height<<endl;
    }
    double volume()
    {
        double v=length*breadth*height;
        return v;
    }
};
int main()
{
    BOX myBox;

    myBox.input_value();
    myBox.print_value();
    double vol= myBox.volume();
    cout<<"Volume of the box: "<<vol<<endl;
}