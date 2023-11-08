#include<iostream>
#include<vector>
using namespace std;

int main(){
    //1-based indexing
     int n,m; //node m->edges
     cout<<"enter number of nodes: ";
     cin>>n;
     cout<<"enter number of edges: ";
     cin>>m;


    vector<int>mat[n+1];

    for(int i=1;i<=m;i++){
        int u,v;
        cout<<" Enter pair of connected nodes (e.g 1 2 i.e 1 <--->2 ): ";
        cin>>u>>v;
        mat[u].push_back(v);
        mat[v].push_back(u);




    }
    for(int i=1;i<n+1;i++){
        cout<<i<<"->>"<<" ";
    for(auto x:mat[i]){
        cout<<x<<" ";


    }
    cout<<endl;
    }



    return 0;
}