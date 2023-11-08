#include<iostream>
#include<queue>
using namespace std;
//adjacency list will be provided to perform the bfs traversal

vector<int>bfsOfGraph(int n, vector<int>adj[]){

int vis[n]={0};

vis[1]=1; //1-based indexing use 0 if 0 is connected to nodes

queue<int>q;
q.push(1);

vector<int>bfs;

while(!q.empty()){

int node=q.front();
q.pop();

bfs.push_back(node);


for(auto x: adj[node]){
    if(!vis[x]){
        vis[x]=1;
        q.push(x);
    }
}

}

return bfs;


}







int main(){
vector<int>adj[6]; //1-based indexing tp create 5 node size of 6 will require

//level wise traversal is done in bfs
//queue ds is used
// 1 2 3 4 5 -->level wise
//change starting node and order will be changed
//multtple solution change the postion of node 



/*
                    1
                   / \
                  /   \
                 2     3
                 |  \  |
                 |   \ |
                 4     5 

 */
    adj[1].push_back(3);
    adj[1].push_back(2);

    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[2].push_back(5);

    adj[3].push_back(1);
    adj[3].push_back(5);

    adj[4].push_back(2);
    adj[5].push_back(2);
    adj[5].push_back(3);



    vector<int>ans=bfsOfGraph(6,adj);

    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
// 1st 1 2 3 4 5
// 2nd 1 3 2 4 5 czu we push back 3 and then 2

}