#include <iostream>
using namespace std;

const int SUCCESS{0};
const int FAILURE{13};

int main()
{
    int answer{1};

    while (answer!=0){
    try{
    cout << "You membah? Yeah I membah!" << endl;
    cin >> answer;
    if (answer==0){throw FAILURE;}
    }
    catch(int x){cout << "I no longah membah " << x << endl;
    return x;}
    }
    return SUCCESS;
}
