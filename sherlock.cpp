#include<iostream>
#include<cmath>
#include<vector>
#include<cstdio>
#include<algorithm>
// #include<>
// #include<>

using namespace std ;

typedef long long patel;

patel saad[100000];


int main(){

    
patel t,n,x,z;

int a,b,c,d;

    cin>> t;
    for(patel i = 0; i<t; i++)
    {

        cin>> n ;
        if(n ==1){
            cin>>x;
            cout<<"YES" ;
        }
        else {
            saad[0]=0;
        for(patel i=1; i<n+1; i++)
        {
            cin>>x;
            
            // if (i == 0)
            // {
            //     saad[i]=0;
            // }
            if(i!=1){
            {
                saad[i]=saad[i-1]+ x;
                
            }
            }
            else{
                saad[1]=x;
            }

            // z=x ;

        }

        

                // cout<<saad[0] <<saad[1]<<saad[2];

    
        

        for(patel i =0;i<n; i++){
            // if(i==0){
            //     if(saad[0]==saad[n-1])
            // }

            // if( saad[i] == saad[n-1]-saad[i-1] 
                
            if(i==0 && saad[n]==saad[1] ){
                cout<<"YES";
                break ;
            }

            if( saad[i] == saad[n]-saad[i-1] 
            ){
                cout<<"YES" ;
                // cout<<i;
                break;
            }

            if(i==n-1){
            cout<<"NO" ;
            
        }

        }
        

    }
    if(i!=t-1){
        cout<<"\n";
    }
}

}