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
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll  long long
#define number32 4294967296ull
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;

void reverse(char *str)
{
	char *end=str;
	char tmp;
	if(str)
	{
		while(*end)
		{
			end++;
		}
		end--;  //extra null character
		while(str<end)
		{
			tmp=*str;
			*(str++)=*end;
			*(end--)=tmp;
		}
	}
}			
	
int main()
{
	char *str;
	char s[7]="nitish";
	str=(char*)malloc(strlen(s)*sizeof(char));
	strcpy(str,s);
	reverse(str);
	cout<<str<<endl;
	return 0;
}
