#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
    int a;
    float b;
    cin>>a;
    cin>>b;
    if(a>0)
    {
        if ((a%5==0)&&(b>=(a+0.50)))
        cout <<(b-a-0.50);
        else
        cout<<b;
    }
    else cout<<b;
}

