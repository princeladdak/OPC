/* @author :nitish bhagat */

//header files
#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <complex>
#include <vector>
#include <cmath>
#include <ctime>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <utility>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>

//short lazieeeeeee
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll  long long
#define number32 4294967296ull
#define MAX 100001
#define len(s) s.length()

//shorter Containers
#define Mii map<int,int>
#define Mci map<char,int>
#define Msi map<string,int>
#define Si set<int>
#define Sc set<char> 
#define Ss set<string> 
#define Pii pair<int,int>
#define Pci pair<char,int> 
#define Psi pair<string,int>
#define vi vector<int> 
#define vc vector<int> 

//iterators
#define Miii map<int,int>::iterator 
#define Mcii map<char,int>::iterator 
#define Msii map<string,int>::iterator 
#define Sii set<int>::iterator 
#define Sci set<char>::iterator 
#define Ssi set<string>::iterator 
#define Piii pair<int,int>::iterator 
#define Pcii pair<char,int>::iterator 
#define Psii pair<string,int>::iterator 
#define vii vector<int>::iterator 
#define vci vector<int>::iterator 
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();
using namespace std;

int main()
{
	double A[200][200];
	double B[200][200];
	double W[200][200];
	int n;
	cin>>n;
	int i,j;
	FOR(i,n)
	{
		FOR(j,n)
		{
			scanf("%lf",&W[i][j]);
		}
	}
	
	FOR(i,n)
	{
		FOR(j,n)
		{
			if(i==j)
			{
				A[i][j]=W[i][j];
			}
			else 
			{
				A[i][j]=(W[i][j]+W[j][i])/2.0;
			}
		}
	}
	FOR(i,n)
	{
		FOR(j,n)
		{
			B[i][j]=W[i][j]-A[i][j];
		}
	}
	FOR(i,n)
	{
		FOR(j,n)
		{
			printf("%.8lf ",A[i][j]);
		}
		cout<<endl;
	}
	FOR(i,n)
	{
		FOR(j,n)
		{
			printf("%.8lf ",B[i][j]);
		}
		cout<<endl;
	}
     return 0;
}
