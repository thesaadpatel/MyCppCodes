#include <bits/stdc++.h>
using namespace std ;



typedef long long patel;

patel saad[100000];

int main()
{

patel t,n,y,z,a,b,p,q,r,sum;

        cin>>t;
        for(patel i = 0;i<t; i++)
        {
            cin>>n;
            cin>>a;
            cin>>b;

            if(a>=b){
                z=a;
                y=b;
            }
            else{
                z=b;
                y=a;
            }
// z is max of a and b;

            for(patel i=1;i<n+1;i++)
            {
                sum = (n-i)*y + (i-1)*z ;
                saad[i-1] = sum;
            }

                                cout<<saad[0];


            for(patel i =0;i<n-1;i++)
            {
                //    cout<<"\n";
                
                if(saad[i+1]>saad[i])
                {
                
                    cout<<" " ;    
                    cout<<saad[i+1] ;
                }
            }

            cout<<"\n";


        }

        








}
