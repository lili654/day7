#include <iostream>

using namespace std;

int main()
{
    int n[100];
    n[1]=1;
    for(int i=2;i<=20;i++)
    {
        n[i]=n[i-1]+4*(i-1);
    }
    cout<<n[20];
    return 0;
}
