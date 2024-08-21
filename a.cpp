#include<bits/stdc++.h>
using namespace std;
bool cmp(const vector<int> &xx,const vector<int> &yy){
    return xx[1]==yy[1]?xx[0]<yy[0]:xx[1]<yy[1];
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>points(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>points[i][0]>>points[i][1];
    }
    sort(points.begin(),points.end(),cmp);
    for(int i=1;i<n;i++){
        int x=points[i][0],y=points[i-1][1];
        if(x<=y){
            points[i-1][0]=x;
            points[i-1][1]=y;
            points[i][0]=x;
            points[i][1]=y;
        }
    }
    set<vector<int>>st;
    for(auto item:points){
        st.insert(item);
    }
    cout<<st.size()<<endl;
    cin>>n;
    return 0;
}