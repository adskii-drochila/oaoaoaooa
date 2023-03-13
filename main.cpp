#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int arr, x;

    cout<< "Vedite kol-vo znachenij";
    cin>>arr;

    int a[arr];

    for(int i = 0; i<arr; i++){

        cout<<"vvodite znachenija massivov";
        cin >> a[i];

};
    for(int e=0; e<arr; e++){
        if (e%2==0)
{
            x = a[e];
}
else if (e%2 ==1)
{
  a[e-1]=a[e];
  a[e] = x;

}
    };

   for(int r = 0; r<arr; r++){

        cout << a[r];
   }


    return 0;
}
