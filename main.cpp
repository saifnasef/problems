#include <iostream>

using namespace std;

int main()
{
    int even=0,odd=0,n,x;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> x;
        if (x%2 == 0)
            even += 1;
        else
            odd += 1;
    }
    if (even > odd)
        cout << odd;
    else
        cout << even;
    return 0;
}
