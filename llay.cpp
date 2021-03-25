#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,i,j,s1,s2;
    char str[100000];
    cin >> str;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        s1=0,s2=0;
        for(j=a-1;j<b-1;j++){
            if(str[j]=='.')
                s1++;
            else if(str[j]=='#')
                s2++;
        }
        if(s1>s2)cout << s1 << endl;
        else if(s1==s2) cout << '0' << endl;
        else cout << s2 << endl;
    }
    return 0;
}
