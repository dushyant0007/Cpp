#include <iostream>
#include <list>
#include <vector>

using namespace std;

class Edge
{
private:
  int DestinationVertexID;
  int weight;

public:
  Edge()
  {
    int DestinationVertexID = -1;
    int weight = -1;
  }
  Edge(int destVID, int w)
  {
    DestinationVertexID = destVID;
    weight = w;
  }
  void setDestinationVertexID(int destVID)
  {
    DestinationVertexID = destVID;
  }
  void setWeight(int w)
  {
    weight = w;
  }
  int getDestinationVertexID()
  {
    return DestinationVertexID;
  }
  int getWeight()
  {
    return weight;
  }
};

class Vertex
{
private:
  int state_id;
  string state_name;
  list<Edge> edgeList;

public:
  Vertex()
  {
    state_id = -1;
    state_name = "";
  }
  Vertex(int id, string sname)
  {
    state_id = id;
    state_name = sname;
  }
  list<Edge> &getEdgeList()
  {
    return edgeList;
  }
  string getStateName()
  {
    return state_name;
  }
  int getStateID()
  {
    return state_id;
  }
  void setID(int id)
  {
    state_id = id;
  }
  void setStateName(string sname)
  {
    state_name = sname;
  }
  void setEdgeList(int DestinationVertexID, int weight)
  {
    Edge e(DestinationVertexID, weight);
    edgeList.push_back(e);
  }

  void printEdgeList()
  {
    cout << "[";
    for (auto it = edgeList.begin(); it != edgeList.end(); it++)
    {
      cout << it->getDestinationVertexID() << "(" << it->getWeight() << ") --> ";
    }
    cout << "]";
    cout << endl;
  }
};

class Graph
{
public:
  vector<Vertex> vertices;

  bool vertexExistByID(int vid)
  {
    for (int i = 0; i < vertices.size(); i++)
    {
      if (vertices.at(i).getStateID() == vid)
      {
        return true;
      }
    }
    return false;
  }
  void addVertex(Vertex newVertex)
  {
    if (vertexExistByID(newVertex.getStateID()))
    {
      cout << "Vertex Already Exist " << endl;
      return;
    }
    else
    {
      vertices.push_back(newVertex);
      cout << "New Vertex Added Successfully" << endl;
    }
  }

  Vertex getVertexByID(int vid)
  {
    for (int i = 0; i < vertices.size(); i++)
    {
      if (vertices.at(i).getStateID() == vid)
      {
        return vertices.at(i);
      }
    }
    Vertex temp;
    cout << "Vertex did't exist" << endl;
    return temp;
  }

  bool checkIfEdgeExistByID(int vid1, int vid2)
  {
    Vertex v = getVertexByID(vid1);
    list<Edge> e = v.getEdgeList();
    for (auto it = e.begin(); it != e.end(); it++)
    {
      if (it->getDestinationVertexID() == vid2)
      {
        return true;
      }
    }
    return false;
  }

  void addEdgeByID(int vid1, int vid2, int w)
  {
    if (vertexExistByID(vid1) && vertexExistByID(vid2))
    {
      if (!checkIfEdgeExistByID(vid1, vid2))
      {
        int flag = 0;
        for (int i = 0; i < vertices.size(); i++)
        {
          if (vertices.at(i).getStateID() == vid1)
          {
            // Edge e (vid2,w);
            vertices.at(i).setEdgeList(vid2, w);
            flag += 1;
          }
          else if (vertices.at(i).getStateID() == vid2)
          {
            Edge e(vid1, w);
            vertices.at(i).setEdgeList(vid1, w);
            flag += 1;
          }
        }
        if (flag == 2)
        {
          cout << "Edge Added Successfully" << endl;
        }
      }
      else
      {
        cout << "Edge Already Exist Between vertices with id " << vid1 << " and " << vid2 << endl;
      }
    }
    else
    {
      cout << "Vertexes with id " << vid1 << " or " << vid2 << " did't exist" << endl;
    }
  }

  void updateEdgeByID(int formVertex, int toVertex, int newWeight)
  {
    if (checkIfEdgeExistByID(formVertex, toVertex))
    {
      int flag = 0;
      for (int i = 0; i < vertices.size(); i++)
      {
        if (vertices.at(i).getStateID() == formVertex)
        {
          for (auto it = vertices.at(i).getEdgeList().begin(); it != vertices.at(i).getEdgeList().end(); it++)
          {
            if (it->getDestinationVertexID() == toVertex)
            {
              it->setWeight(newWeight);
              flag = 1;
            }
          }
        }
        else if (vertices.at(i).getStateID() == toVertex)
        {
          for (auto it = vertices.at(i).getEdgeList().begin(); it != vertices.at(i).getEdgeList().end(); it++)
          {
            if (it->getDestinationVertexID() == formVertex)
            {
              it->setWeight(newWeight);
              flag += 1;
            }
          }
        }
      }

      if (flag == 2)
      {
        cout << "Edge Updated Successfully between vertex" << toVertex << " and " << formVertex << " with weight " << newWeight << endl;
      }
    }
    cout << "No edge exist between the vertices " << endl;
  }

  void deleteEdgeByID(int fromVertex, int toVertex)
  {
    if (checkIfEdgeExistByID(fromVertex, toVertex))
    {
      int flag = 0;
      for (int i = 0; i < vertices.size(); i++)
      {
        if (vertices.at(i).getStateID() == fromVertex)
        {
          for (auto it = vertices.at(i).getEdgeList().begin(); it != vertices.at(i).getEdgeList().end(); it++)
          {
            if (it->getDestinationVertexID() == toVertex)
            {
              vertices.at(i).getEdgeList().erase(it);
              flag += 1;
            }
          }
        }
        else if (vertices.at(i).getStateID() == toVertex)
        {
          for (auto it = vertices.at(i).getEdgeList().begin(); it != vertices.at(i).getEdgeList().end(); it++)
          {
            if (it->getDestinationVertexID() == fromVertex)
            {
              vertices.at(i).getEdgeList().erase(it);
              flag += 2;
            }
          }
        }
      }
      if (flag == 2)
      {
        cout << "Edge Deleted Successfully" << endl;
      }
    }
    else
    {
      cout << "Edge did't exist between " << fromVertex << " and " << toVertex << endl;
    }
  }

  void deleteVertexByID(int vid)
  {
    for (int i = 0; i < vertices.size(); i++)
    {
      if (vertices.at(i).getStateID() == vid)
      {
        for (auto it = vertices.at(i).getEdgeList().begin(); it != vertices.at(i).getEdgeList().end(); it++)
        {
          deleteEdgeByID(it->getDestinationVertexID(), vid);
        }
        vertices.erase(vertices.begin() + i);
        cout << "Vertex Deleted Successfully " << endl;
        break;
      }
    }
  }

  void updateVertexByID(int vid, string newStateName)
  {
    if (vertexExistByID(vid))
    {
      for (int i = 0; i < vertices.size(); i++)
      {
        if (vertices.at(i).getStateID() == vid)
        {
          vertices.at(i).setStateName(newStateName);
          cout << "Vertex name is updated" << endl;
          break;
        }
      }
    }
    else
    {
      cout << "Vertex did't exist with id " << vid << endl;
    }
  }

  void vertexAllNeighbors(int vid)
  {
    if (vertexExistByID(vid))
    {
      for (int i = 0; i < vertices.size(); i++)
      {
        if (vertices.at(i).getStateID() == vid)
        {
          for (auto it = vertices.at(i).getEdgeList().begin(); it != vertices.at(i).getEdgeList().end(); it++)
          {
            cout << "id " << it->getDestinationVertexID() << " StateName " << getVertexByID(it->getDestinationVertexID()).getStateName() << endl;
          }
          break;
        }
      }
    }
    else
    {
      cout << "vertex did't exist with id " << vid << endl;
    }
  }

  void printGraph()
  {
    for (int i = 0; i < vertices.size(); i++)
    {
      Vertex temp;
      temp = vertices.at(i);
      cout << temp.getStateName() << " (" << temp.getStateID() << ") --> ";
      temp.printEdgeList();
    }
  }
};

int main()
{
  Graph g;
  string sname;
  int option, id1, id2, w;
  Vertex v1;

  v1.setID(1);
  v1.setStateName("DEL");
  g.addVertex(v1);

  v1.setID(2);
  v1.setStateName("RAJ");
  g.addVertex(v1);

  v1.setID(3);
  v1.setStateName("PNJ");
  g.addVertex(v1);

  g.addEdgeByID(1, 2, 200);
  g.addEdgeByID(2, 3, 500);
  g.addEdgeByID(2, 5, 500);
  g.printGraph();

  {
    cout << "\n\n----->\n"
         << endl;
    cout << "What operation do you want to perform ?" << endl;
    cout << "Select Option number" << endl;
    cout << "1 → Add Vertex" << endl;
    cout << "2 → Update Vertex" << endl;
    cout << "3 → Delete Vertex" << endl;
    cout << "4 → Add Edge" << endl;
    cout << "5 → Update Edge" << endl;
    cout << "6 → Delete Edge" << endl;
    cout << "7 → Check if 2 vertices are neighbors" << endl;
    cout << "8 → Print all neighbors of a vertex" << endl;
    cout << "9 → Print Graph" << endl;
    cout << "10 → Clear Screen" << endl;
    cout << "0 → Exit Program" << endl;
  }

  do
  {
    cout << "What operation do you want to perform ?" << endl;
    cin >> option;

    switch (option)
    {

    case 0:

      break;

    case 1:
    {
      cout << "Add Vertex Operation - " << endl;
      cout << "Enter State ID : ";
      cin >> id1;
      cout << "Enter State Name : ";
      cin >> sname;
      v1.setID(id1);
      v1.setStateName(sname);
      g.addVertex(v1);
    }

    break;

    case 2:
      cout << " Update Vertex Operation - " << endl;
      cout << "Enter the vertex id ";
      cin >> id1;
      cout << "Enter the new state name ";
      cin >> sname;
      g.updateVertexByID(id1, sname);
      break;

    case 3:
      cout << "Delete Vertex Operation - " << endl;
      cout << "Enter the Vertex id ";
      cin >> id1;
      g.deleteVertexByID(id1);
      break;

    case 4:
    {
      cout << "Add Edge Operation -" << endl;
      cout << "Enter ID of Source Vertex(State): ";
      cin >> id1;
      cout << "Enter ID of Destination Vertex(State): ";
      cin >> id2;
      cout << "Enter Weight of Edge: ";
      cin >> w;
      g.addEdgeByID(id1, id2, w);
    }
    break;

    case 5:
    {
      cout << "Update Edge Operation - " << endl;
      cout << "Enter the formVertex ID ";
      cin >> id1;
      cout << "\nEnter the toVertex ID ";
      cin >> id2;
      cout << "\nEnter the new Edge weight ";
      cin >> w;
      g.updateEdgeByID(id1, id2, w);
    }

    break;

    case 6:
      cout << " Delete Edge - " << endl;
      cout << "Enter the id of start vertex of edge ";
      cin >> id1;
      cout << "Enter the id of end vertex of edge ";
      cin >> id2;
      g.deleteEdgeByID(id1, id2);
      break;

    case 7:
      cout << "Check if 2 vertices are neighbors - " << endl;
      cout << "Enter vertex 1 ";
      cin >> id1;
      cout << "Enter vertex 2 ";
      cin >> id2;
      cout << g.checkIfEdgeExistByID(id1, id2) << endl;
      ;
      break;

    case 8:
      cout << " print all neighbors of a vertex - " << endl;
      cout << "Enter the vertex id ";
      cin >> id1;
      g.vertexAllNeighbors(id1);
      break;

    case 9:
      cout << "Print Graph Operation - " << endl;
      g.printGraph();
      break;

    default:
      cout << "Enter Proper Option number" << endl;
      break;
    }

  } while (option != 0);
}