#include "iostream"
#include "cmath"
using namespace std;
int main()
{
    int a;
    int b;
    cout<<"vvedite stepen"<<endl;
    cin>>b;
    cout<<"vvedite chislo"<<endl;
    cin>>a;
    if(a >-100 or a<100){
        cout << "a^2 = " << pow(a, b) <<endl;
    }
    else {
        cout << "nepravilnoe chislo" <<endl;
    }
    return 0;
}
