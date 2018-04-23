#include<iostream>
#include<list>
using namespace std;

int main()
{
    cout << "Hello world!!" << endl;

    list<int> l_IntList = {1, 2, 3, 4, 5};
    for (int l_Value : l_IntList)
    {
        cout << "Value: " << l_Value << endl;
    }

    return 0;
}