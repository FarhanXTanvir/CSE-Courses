/*
1. Write a C++ program to define a class Batsman with the following specifications,
batsman ID: 6 digits roll number.

static member count: To keep track on number of object
static function getcount(): return the value of count
function getname(): To take batsman name as input
function showname(): To show batsman name

Access all the data members and member functions using the objects of class
Batsman.
Sample Input/Output
Initially number of objects: 0
Enter number of entry: 2
Enter Batsman Name: Shakib
Enter Batsman Name: Liton
Finally number of objects: 2
Batsman Name: Shakib
Batsman Name: Liton
*/

#include <bits/stdc++.h>
using namespace std;

class Batsman {
private:
  static int count; // To keep track on number of object
  int batsman_ID;
  string name;

public:
  Batsman() { count++; }

  static int getCount() { return count; }

  void getName() {
    cout << "Enter Batsman Name: ";
    cin >> name;
  }

  void showName() { cout << "Batsman Name: " << name << endl; }

  void showDetails() {
    cout << "Batsman ID: " << batsman_ID << ", ";
    showName();
  }

  void getDetails() {
    cout << "Enter Batsman ID: "; cin >> batsman_ID;
    getName();
  }
};

int Batsman::count = 0;

int main() {
  cout << "Initially number of objects: " << Batsman::getCount() << endl;

  int n;
  cout << "Enter number of entry: ";
  cin >> n;

  Batsman batsmen[n]; // Array of Batsman objects

  for (int i = 0; i < n; i++) {
    batsmen[i].getDetails();
  }

  cout << "Finally number of objects: " << Batsman::getCount() << endl;

  for (int i = 0; i < n; i++) {
    batsmen[i].showDetails();
  }

  return 0;
}




/*
#include <bits/stdc++.h>
using namespace std;

class Batsman
{
    private:
    static int count;
    string name;
    long batsman_ID;

    public:

    Batsman()
    {
        count++;
    }
    static int getcount()
    {
        return count;
    }
    void getname ()
    {
        cout << "Enter Batsman ID: "; cin >> batsman_ID;
        cout << "Enter Batsman Name: "; cin >> name;
    }
    void showname ()
    {
        cout << "Batsman ID: "; cout << batsman_ID << endl;
        cout << "Batsman Name: "; cout << name << endl << endl;
    }
};
int Batsman::count = 0;
int main()
{
    int n;
    cout << "Enter the number of entry: "; cin >> n;

    cout << "Initially number of objects: 0" << endl;
    Batsman B1;
    B1.getname();
    Batsman B2;
    B2.getname();

    B1.showname();
    B2.showname();

    return 0;
}
*/