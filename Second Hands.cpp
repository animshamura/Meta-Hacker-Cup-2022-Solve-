#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,n,k,cn=1;
   cin>>t;
   while(t--){
       cin>>n>>k;
       int ar[n];
       for(int i = 0; i < n; i++) cin>>ar[i];
       if(k*2<n) cout<<"Case #"<<cn++<<": NO"<<endl;
       else {
          bool ans = false;
          for(int i = 0; i < n; i++)
               for(int j = i+1; j < n; j++)
                    for(int k = k+1; k < n; k++)
                            if(ar[i]==ar[j] && ar[j]==ar[k]) ans=true;
          if(ans)cout<<"Case #"<<cn++<<": NO"<<endl;
          else cout<<"Case #"<<cn++<<": YES"<<endl;
       }
   }
    return 0;
}
