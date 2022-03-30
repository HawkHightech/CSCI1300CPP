#include <iostream>
using namespace std;


float getHours()
{
    float h;
    cout << "Please enter how many hours you worked this week: " << endl;
    cin >> h;
    return h;
}

float calcPay(float h, float payRate)
{
    float pay = h * payRate;
    return pay;
}

float printPay(float pay)
{
    cout << "Your pay is $" << pay << ".";
    return 0;
}


int main()
{
    //Test #1
    float b = getHours();
    
    cout << "Calculated Pay: " << endl;
    cout << calcPay(b, 20) << endl;
    cout << printPay(calcPay(b,20)) << endl;

    //Test #2
    b = getHours();
    cout << "Calculated Pay: " << endl;
    cout << calcPay(b, 5) << endl;
    cout << printPay(calcPay(b,5)) << endl;
    
    return 0;
    
}
