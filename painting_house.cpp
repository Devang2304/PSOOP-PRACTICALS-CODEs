#include <iostream>
using namespace std;
class Exterior
{
    public:
    double area, ab;
    Exterior()
    {
        area = 0;
    }
   
    void get(double l, double b)
    {
        area = l*b;
        ab = (100*area)/50;
    }
};

class Paint : public Exterior
{
    public:
    string color, brand;
    int cb, bb;
    Paint()
    {
        color = "Unknown";
        brand = "Unknown";
    }
   
    void get(int c, int br)
    {
        switch(c)
        {
            case 1:
            color = "Red";
            cb = 500;
            break;
           
            case 2:
            color = "Blue";
            cb = 600;
            break;
           
            case 3:
            color = "Yellow";
            cb = 700;
            break;
           
            default:
            cout << "Invalid Color" << endl;
            break;
        }
       
        switch(br)
        {
            case 1:
            brand = "Bergur";
            bb = 200;
            break;
           
            case 2:
            brand = "Indigo";
            bb = 150;
            break;
           
            case 3:
            brand = "Asian Paints";
            bb = 100;
            break;
           
            default:
            cout << "Invalid Brand" << endl;
            break;
        }
    }
};

class Bill : public Paint
{
    public:
    double bil;
    Bill()
    {
        bil = 0000;
    }
   
    void get()
    {
        bil = ab + cb + bb;
    }
   
    void display()
    {
        cout << "Area of the House : " << area << endl;
        cout << "As 50sq.m costs Rs.100" << endl;
        cout << "Cost of the House is Rs." << ab << endl;
        cout << "Type of Color : " << color << endl;
        cout << "Cost of Color : Rs." << cb << endl;
        cout << "Name of the Paint Brand : " << brand << endl;
        cout << "Cost of the Paint Brand : Rs. " << bb << endl;
        cout << "Total Bill = Rs." << ab << " + Rs." << cb <<" + Rs."<<  bb <<" = Rs."<< bil << endl;
    }
};

int main()
{
    int c, br;
    double l, b;
    cout << "Program Starts Now!" << endl;
    cout << "Enter length of the House : " << endl;
    cin >> l;
    cout << "Enter breadth of the House : " << endl;
    cin >> b;
    cout << "Choose your favorite Color : " << endl;
    cout << "Press 1 for Red" << endl;
    cout << "Press 2 for Blue" << endl;
    cout << "Press 3 for Yellow" << endl;
    cin >> c;
    cout << "Choose your favorite Brand : " << endl;
    cout << "Press 1 for Asian Paints" << endl;
    cout << "Press 2 for Bergur" << endl;
    cout << "Press 3 for Indigo" << endl;
    cin >> br;
    cout << "\nPlease wait, calculating your Bill" << endl;
   
    Bill b1;
    b1.Exterior::get(l,b);
    b1.Paint::get(c,br);
    b1.get();
    b1.display();
   

    return 0;
}
    