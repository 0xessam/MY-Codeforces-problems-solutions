#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int bin[n];

        int  c = 0 , maxx = 0 , input;
        for(int i=0; i<n; i++)
        {
            cin >> input;

            if (input == 0)
            {
                bin[i] = input;
                c++;
                if ((i == n-1) && (c > maxx) )
                {
                    maxx = c;
                    break;
                }
            }
            else
            {
                if (c > maxx)
                {
                    maxx = c;
                  
                }
c=0; 
            }

        }
if ( c>maxx) maxx= c ; 
        cout << maxx << endl;
    }
}