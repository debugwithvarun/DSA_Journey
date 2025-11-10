#include <iostream>
using namespace std;

int main()
{
    cout<<"pattern 1"<<endl;
    /* pattern 1
    1111
    2222
    3333
    4444
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 1; j <= 4; j++)
       {
           cout << i;
        }
        cout << endl;
    }
    
    cout<<"pattern 2"<<endl;
    /* pattern 2
    *
    **
    ***
    ****
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 1; j <= i; j++)
       {
           cout << "*";
        }
        cout << endl;
    }
    
    cout<<"pattern 3"<<endl;
    /* pattern 3
    ****
    ***
    **
    *
    */
   for (int i = 1; i <= 4; i++)
   {
       for (int j = 4; j >= i; j--)
       {
           cout << "*";
        }
        cout << endl;
    }

    cout<<"pattern 4"<<endl;
    /* pattern 4
    1
    12
    123
    1234
    */
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout<<"pattern 5"<<endl;
    /* pattern 4
    A
    BC
    DEF
    GHIJ
    */
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)('A'+i+j-2);
        }
        cout << endl;
    }
    /* pattern 5
    *****
    *   *
    *   *
    *****
    */
    for (int i = 1; i <= 4; i++)
    {
        cout<<"*";
        for (int j = 1; j <= 3; j++)
        {
            if(i==1 || i==4){
                cout<<'*';
            }
            else{
                cout<<' ';
            }
        }
        cout<<"*"<<endl;
        cout << endl;
    }

    return 0;
}
