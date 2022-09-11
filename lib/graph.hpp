#ifndef C6C677F9_460D_4F2B_B272_8500CB3C8AE5
#define C6C677F9_460D_4F2B_B272_8500CB3C8AE5

#include <iostream>

//data structure to store adjacency list nodes
struct Node
{
    int val;
    Node *next;
};

//data structure to store a graph edge
struct Edge
{
    int src,dest;
};

class Graph
{
    //function to allocate a new node for the adjacency list
    Node* getAdjListNode(int dest,Node* head)
    {
        Node* newNode=new Node;
        newNode->val=dest;

        //point new node to current head
        newNode->next=head;
        return newNode;
    }

    int N; //total number of nodes in the graph 
public:
    //An array of pointers to Node to represent the adjacency list
    Node** head;

    //constructor
    Graph(Edge edges[], int n, int N)
    {
            //allocate memory 
        head=new Node*[N]();
        this->N=N;

        //initialize the head pointer for all vertices
        for(int i=0; i<N; i++)
        {
            head[i]=nullptr;
        }

        //add edges to the directed graph
        for(unsigned int i=0; i<n; i++)
        {
            int src=edges[i].src;
            int dest=edges[i].dest;

            //insert at the beginning
            Node* newNode=getAdjListNode(dest,head[src]);

            //point head pointer to the new node
            head[src]=newNode;
        }

    }

    //Destructor
    ~Graph()
    {
       for(int i=0;i<N;i++){
        delete[] head[i];
       }
       delete[] head;
        
    }


};

//Function to print all neigbouring vertices of a given  vertex
void printlist(Node* ptr)
{
    while(ptr != nullptr)
    {
        std::cout<<"->"<<ptr->val;
    }
}

#endif /* C6C677F9_460D_4F2B_B272_8500CB3C8AE5 */
