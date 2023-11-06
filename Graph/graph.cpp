#include<iostream>
using namespace std;

int main(){
    // 1 based indexing node
    int n,m;
    //undirected graph stored using adjacency matrix
    cout<<" *** Undirected graph stored using adjacency matrix *** "<<endl;
    cout<<" Enter number of nodes: ";
    cin>>n;
    cout<<" Enter number of edges: ";
    cin>>m;

    //creating matrix to store connected node adjacency matrix

    int adj[n+1][n+1]={0};


    for(int i=0;i<m;i++){
        int u,v;
        cout<<" Enter pair of connected nodes (e.g 1 2 i.e 1 <--->2 ): ";
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;



    }

        //connected node;

        for(int i=1;i<n+1;i++){

            for(int j=1;j<n+1;j++){
                
                
                    cout<<adj[i][j]<<" ";
                

            }
            cout<<endl;

        }


    return 0;

}
