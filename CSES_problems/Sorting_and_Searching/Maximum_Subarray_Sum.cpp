     #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <chrono>
    #include <complex>
    #define endl "\n"
    #define int long long int
    #define vi vector<int>
    #define vll vector<ll>
    #define vvi vector < vi >
    #define pii pair<int,int>
    #define pll pair<long long, long long>
    #define mod 1000000007
    #define inf 1000000000000000001;
    #define all(c) c.begin(),c.end()
    #define mp(x,y) make_pair(x,y)
    #define mem(a,val) memset(a,val,sizeof(a))
    #define eb emplace_back
    #define f first
    #define s second
    
    using namespace std;
    signed main()
    {
          
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


        int n;

        cin>>n;

        int a[n];

        for(int i=0;i<n;i++) {
            cin>>a[i];
        }

        int max_as_of_now=a[0];
        int max_ans=a[0];

        for(int i=1;i<n;i++) {
            max_as_of_now=max(a[i],max_as_of_now+a[i]);
            max_ans=max(max_ans,max_as_of_now);
        }


        cout<<max_ans<<endl;


        return 0;
    }