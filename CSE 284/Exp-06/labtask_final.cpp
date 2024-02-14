#include <bits/stdc++.h>
using namespace std;

class Allowance;
class Salary{
    private:
        double basic_pay, yoe;
        double total_basic()
        {
            if(yoe==0)
            {
                return 12*basic_pay;
            }
            else if(1<=yoe && yoe <= 3)
            {
                return 12*(basic_pay + 0.1*basic_pay);
            }
            else
            {
                return 12*(basic_pay + 0.2*basic_pay);
            }
        }
        void takeS()
        {
            cout << "Basic Pay: "; cin >> basic_pay;
            cout << "Years of Experience: "; cin >> yoe; 
        }
        friend void tax(Salary, Allowance);
};
class Allowance{
    private:
        double med_all, house_all, bonus;
        double total_allowance()
        {
            double mh = 12*(med_all + house_all);
            return mh + bonus;
        }
        void takeAll(){
            cout << "Medical Allowance Per Month: "; cin >> med_all;
            cout << "House Allowance Per Month: "; cin >> house_all; 
            cout << "Bonus Per Year: "; cin >> bonus;
        }
        friend void tax(Salary, Allowance);
};
void tax(Salary s, Allowance a)
{
    s.takeS();
    a.takeAll();
    int g = s.total_basic() + a.total_allowance();
    int t;
    if(g < 500000){t = 0;}
    else if(500000 <= g && g <= 700000){t = 0.01*g;}
    else{t = 0.03*g;}

    cout << "\nGross pay: " << g << endl;
    cout << "Tax Amount: " << t;
}
int main()
{
    Salary S;
    Allowance A;
    tax(S, A); 

    return 0;
}