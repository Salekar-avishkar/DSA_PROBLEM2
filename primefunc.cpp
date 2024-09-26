#include <iostream>
using namespace std;
int prime(int num)
{
    if (num == 1)
    {
        cout << "Not prime no" << endl;
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime" << endl;
            return 0;
        }
    }
    cout << "prime" << endl;
    return 0;
}
int main()
{
    for (int i = 0; i == 0; )
    {
        int num;
        cin >> num;
        prime(num);
    }
}