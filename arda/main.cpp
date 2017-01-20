#include <iostream>
using namespace std;

const int SUCCESS{0};

int main()
{
    int answer{1};
    int x{0};

    while (answer!=0){
    try{
    cout << "You membah? Yeah I membah!" << endl;
    cin >> answer;
    if (answer==0){throw 99;}
    }
    catch(x){cout << "I no longah membah " << x << endl;
    return x;}
    }
    return SUCCESS;
}
