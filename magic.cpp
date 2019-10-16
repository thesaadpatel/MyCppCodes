#include <bits/stdc++.h>
#include<cmath>

using namespace std;

int formingMagicSquare(vector < vector<int> > MyArray) {
    int d[8][3][3]={
    	{{8,1,6},{3,5,7},{4,9,2}},
	    {{6,1,8},{7,5,3},{2,9,4}},
	    {{4,9,2},{3,5,7},{8,1,6}},
	    {{2,9,4},{7,5,3},{6,1,8}},
	    {{8,3,4},{1,5,9},{6,7,2}},
	    {{4,3,8},{9,5,1},{2,7,6}},
	    {{6,7,2},{1,5,9},{8,3,4}},
	    {{2,7,6},{9,5,1},{4,3,8}}
	};
	int xArray[8],patel;
	for(int k=0;k<8;k++)
	{
		xArray[k] = 0;
      for(int i=0;i<3;i++)
	  {
	    for(int j=0;j<3;j++)
	    {
	    	if(MyArray[i][j]!=d[k][i][j])
	    	{
	    		xArray[k]+=abs(MyArray[i][j]-d[k][i][j]);

	    	}
 	    }
	  }
	 


	}
	patel = xArray[0];
	for(int i=1;i<8;i++){
		if(xArray[i]<patel)
	  	{
	  		patel=xArray[i];
		}
	}

    return patel;
}

int main() {
    vector< vector<int> > MyArray(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> MyArray[s_i][s_j];
       }
    }
    int result = formingMagicSquare(MyArray);
    cout << result << endl;
    return 0;
}