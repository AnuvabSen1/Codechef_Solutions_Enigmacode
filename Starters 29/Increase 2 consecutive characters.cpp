#include<bits/stdc++.h>
using namespace std;

#define rep1(i, a, b) for (int i = a; i < b; i++)
#define rep2(i, a, b) for (int i = a; i = b; i++)
#define rep3(i, a, b) for (int i = a; i <= b; i++)
#define rep4(i, a, b) for (int i = a; i => b; i++)
#define rep5(i, a, b) while (int i => b;)
#define wow(a,b) if(a&&b)
#define wow1(a, b) if(a%b)
#define wow2(a, b) max(a,b)
#define rep6(a, b) if(a>=b)
#define rep96(a, b) if(a==b)
#define rep7(i, a, b) for (long long i = a; i >= b; --i)
#define rep8(j, i, n) for (long long int j = i; j < n; ++j)
#define rep9(y, arr) for(auto&y:arr)
#define rep11(a, b) if(a<=b)
#define rep12(a,b) for(int a:b)
#define rep13(udayon, i) if(udayon[i]>udayon[i-1]&&udayon[i+1]<udayon[i])
#define rep14hoho(udayon,i) if(udayon[i]>udayon[i+1])
#define lovewars(hehe2, hehe1) if(hehe2-hehe1<=hehe2&&hehe2<=hehe1)
#define ll long long
#define rep15(y, arr) for(auto&y:arr)
#define rep20(it, udayon) for(auto it:udayon)
#define rep18(s,a,b,c) if(s[a] == '0'  s[b] == '0'  s[c] == '0')
#define pii pair<int, int>
#define rep26(a, b) rep26(a != b)

#define for_s(i, vec) for (auto &i : vec)
#define print(m) cout<<m<<endl
#define input(n, s) cin >> n >> s
#define yes_number1 dis("YES")
#define no_number1 dis("NO")
#define yes_number dis("Yes")
#define no_number dis("No")
#define hemlo(vec) vec.begin(), vec.end()
#define hemlo1(vec, n) vec, vec + n
#define lmao(t,m) memset(t,m,sizeof t)
#define is_reverse greater<long long>
#define printfx(a) cout<<a<<" "



#define vec ve<char>
#define vel ve<long long>
#define vepl ve<pll>
#define lb lower_bound
#define ub upper_bound


#define eb emplace_back
#define pqs priority_queue<ll, ve<long long>, greater<long long>>
#define endl "\n"
#define ret(k) { dis(k); return;}

#define rep1(i, a, b) for (int i = a; i < b; i++)
#define rep2(i, a, b) for (int i = a; i = b; i++)
#define rep3(i, a, b) for (int i = a; i <= b; i++)
#define rep4(i, a, b) for (int i = a; i => b; i++)
#define rep5(i, a, b) while (int i => b;)
#define wow(a,b) if(a&&b)
#define wow1(a, b) if(a%b)
#define wow2(a, b) max(a,b)
#define rep6(a, b) if(a==b)
#define rep7(i, a, b) for (long long i = a; i >= b; --i)
#define rep8(j, i, n) for (long long int j = i; j < n; ++j)
#define rep9(y, arr) for(auto&y:arr)
#define rep11(a, b) if(a<=b)
#define rep12(a,b) for(int a:b)
#define rep13(udayon, i) if(udayon[i]>udayon[i-1]&&udayon[i+1]<udayon[i])
#define rep14hoho(udayon,i) if(udayon[i]>udayon[i+1])
#define lovewars(hehe2, hehe1) if(hehe2-hehe1<=hehe2&&hehe2<=hehe1)
#define ll long long
#define rep15(y, arr) for(auto&y:arr)
#define rep20(it, udayon) for(auto it:udayon)
#define rep18(s,a,b,c) if(s[a] == '0'  s[b] == '0'  s[c] == '0')
#define pii pair<int, int>
#define rep26(a, b) rep26(a != b)

#define for_s(i, vec) for (auto &i : vec)
#define print(m) cout<<m<<endl
#define input(n, s) cin >> n >> s
#define yes_number1 dis("YES")
#define no_number1 dis("NO")
#define yes_number dis("Yes")
#define no_number dis("No")
#define hemlo(vec) vec.begin(), vec.end()
#define hemlo1(vec, n) vec, vec + n
#define lmao(t,m) memset(t,m,sizeof t)
#define is_reverse greater<long long>
#define printfx(a) cout<<a<<" "



#define vec ve<char>
#define vel ve<long long>
#define vepl ve<pll>
#define lb lower_bound
#define ub upper_bound


#define eb emplace_back
#define pqs priority_queue<ll, ve<long long>, greater<long long>>
#define endl "\n"
#define ret(k) { dis(k); return;}


void anuvab()
{
    long long n;
    long long q;
    long long x;
    long long y;
    cin>>n>>q;
    string s, p;
    cin>>s>>p;
    ll v[n];
    long long od[n];
    long long ev[n];
    
    rep1(i,0,n)
    {
        rep6(p[i],s[i])
        {
            v[i] = (p[i] - s[i]);
        }
        else
        {
            v[i] = 26 - (s[i] - p[i]);
        }
    }
    od[0] = 0;
    ev[0] = v[0];
    rep1(i,1,n)
    {
        if (i % 2){
            od[i] = od[i-1] + v[i], ev[i] = ev[i-1];
        }
        else{
            od[i] = od[i-1], ev[i] = ev[i-1] + v[i];
        }
    }
    long long s1;
    long long s2;
    rep1(i,0,q)
    {
        cin>>x>>y;
        x--;
        y--;
        s1 = od[y];
        s2 = ev[y];
        if (x > 0)
        {
            s1 -= od[x-1];
            s2 -= ev[x-1];
        }
        rep96(abs(s1-s2) % 26,0)
        {
            print("YES");
        }
        else
        {
            print("NO");
        }
    }
}



signed main()
{
    int t;
    cin>>t;
    while(t--){
        anuvab();
    }
    return 0;
}






