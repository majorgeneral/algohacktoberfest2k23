#include <iostream>
#include <list>

class Graph {
private:
    int numVertices;
    std::list<int>* adjLists;

public:
    Graph(int vertices) {
        numVertices = vertices;
        adjLists = new std::list<int>[vertices];
    }

    void addEdge(int src, int dest) {
        adjLists[src].push_back(dest);
        adjLists[dest].push_back(src);
    }

    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            std::cout << "Adjacency list of vertex " << i << ": ";
            for (int neighbor : adjLists[i]) {
                std::cout << neighbor << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Graph myGraph(5);

    // Adding edges to the graph
    myGraph.addEdge(0, 1);
    myGraph.addEdge(0, 4);
    myGraph.addEdge(1, 2);
    myGraph.addEdge(1, 3);
    myGraph.addEdge(1, 4);
    myGraph.addEdge(2, 3);
    myGraph.addEdge(3, 4);

    // Printing the graph
    myGraph.printGraph();

    return 0;
}
