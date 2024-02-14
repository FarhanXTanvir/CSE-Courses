#include<iostream>
using namespace std;
class batsman
{
    int batsman_code,total_innings, notout_innings, total_runs;
    string batsman_name;
    public:
        void readdata ()
        {
        cout << "Enter batsman's 4 digit code: " << endl;
        cin >> batsman_code;
        cout << "Enter batsman's name: "<<endl;
        cin >> batsman_name;
        cout <<"Enter batsman's total innings: " << endl;
        cin >> total_innings;
        cout << "Enter batsman's not out innings: " << endl;
        cin >> notout_innings;
        cout << "Enter batsman's total runs: " << endl;
        cin >> total_runs;
        }
        void displaydata()
        {
            cout << "Batsman's 4 digit code: " <<batsman_code<<endl;
            cout << "Batsman's Name: "<<batsman_name<<endl;
            cout << "Batsman's total innings: "<<total_innings<<endl;
            cout << "Batsman's not out innings: "<<notout_innings<<endl;
            cout << "Batsman's total runs: "<<total_runs<<endl;
        }
        void calcavg()
        {
            double batting_avg= (total_runs/(total_innings-notout_innings));
            cout<<"The batting average "<<batting_avg<<endl;
        }
};
int main()
{
    batsman batsman1;
    batsman1.readdata();
    batsman1.displaydata();
    batsman1.calcavg();
}