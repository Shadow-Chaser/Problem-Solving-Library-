/*Bismillahir Rahmanir Rahim*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector <long long> vll;
typedef pair<int, int> pii;
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Macro Start-*-*-*-*-*-*-*--*-*-*-*-*/

#define Faster_IO              ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F                      first
#define S                      second
#define pb                     push_back
#define MP                     make_pair
#define sf                     scanf
#define pf                     printf
#define PI                     (2*acos(0))
#define to_radian(degree)      ((pi/180)*degree)
#define to_degree(radian)      ((180/pi)*radian)
#define SQ(a)                  (a)*(a)
#define SORT(x)                sort(x.begin(),x.end())
#define rSORT(x)               sort(x.rbegin(),x.rend())
#define SetPrint(a,x)          cout<<fixed<<setprecision(x)<<a<<endl
#define show(vec)              for (int i=0; i<vec.size(); i++)cout << vec[i] << " ";
#define lines                  cout <<"\n" <<"---------------" << "\n";
#define YES                    printf("YES\n")
#define NO                     printf("NO\n")
#define Yes                    printf("Yes\n")
#define No                     printf("No\n")
#define tc(n)                  int n; cin >> n; while(n--)
#define lcm(a,b)               ((a / __gcd(a,b) ) * b)
#define gcd(a,b)               __gcd(a,b)
#define all(vec)               vec.begin(), vec.end()
#define SUM(vec)               accumulate(vec.begin(), vec.end(), 0)
#define gcin(str)              getline(cin, str)
///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Macro END-*-*-*-*-*-*-*--*-*-*-*-*/

///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Template Start-*-*-*-*-*-*--*-*-*-*-*/

//template <class T> T isPrime(T n){if(n<=1)return 0;for(long long i=2;i*i<=n; i++)if(n%i==0)return 0;return 1;}
//template <class T> T bigmod(T X, T n, T M) {if (n==0) return 1;if (n%2) return ((X%M) * bigmod(X,n-1,M)) %M;else {long long int d = bigmod(X,n/2, M);return ((d%M) * (d%M))%M;}}

///*-*-*-*-*-*-*-*-*-*-*-*-*-*-Template END-*-*-*-*-*-*-*--*-*-*-*-*/




int main()
{
   Faster_IO
   #ifndef ONLINE_JUDGE
   freopen("Input.txt", "r", stdin);
   freopen("Output.txt", "w", stdout);
   #endif

   int n, m;
   cin >> n >> m;
   string a,b;

   vector <string> s, t;
   vi :: iterator it;

   while(n--)
   {
      cin >> a;
      s.pb(a);
   }

   while(m--)
   {
      cin >> b;
      t.pb(b);
   }

   int q; ll y;

   cin >> q;

   for(int i=0; i<q;i++)
   {
      cin >> y;
      int pos1, pos2;

      (y%s.size()==0)? pos1 = s.size() - 1 : pos1 = y%s.size() - 1;

      (y%t.size()==0)? pos2 = t.size() - 1 : pos2 = y%t.size() - 1;
    
      
       cout << s[pos1] << t[pos2] <<"\n";

      

     
   }




    return 0;
}

