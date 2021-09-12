#include <iostream>

using namespace std;

int main()
{
    string skoczek1;
    string skoczek2;
    cin >> skoczek1;
    cin >> skoczek2;

    if ((char) (skoczek1[0]+2) ==  skoczek2[0] && (char) (skoczek1[1]+1) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }

    else if ((char) (skoczek1[0]+1) == skoczek2[0] && (char) (skoczek1[1]+2) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }
    else if ((char) (skoczek1[0]-1) == skoczek2[0] && (char) (skoczek1[1]+2) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }
    else if ((char) (skoczek1[0]-2) == skoczek2[0] && (char) (skoczek1[1]+1) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }
    else if ((char) (skoczek1[0]-2) == skoczek2[0] && (char) (skoczek1[1]-1) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }
    else if ((char) (skoczek1[0]-1) == skoczek2[0] && (char) (skoczek1[1]-2) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }
    else if ((char) (skoczek1[0]+1) == skoczek2[0] && (char) (skoczek1[1]-2) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }
    else if ((char) (skoczek1[0]+2) == skoczek2[0] && (char) (skoczek1[1]-1) == skoczek2[1])
    {
        cout << "TAK" << endl;
    }
    else
    {
        cout << "NIE" << endl;
    }
            
    return 0;

}
