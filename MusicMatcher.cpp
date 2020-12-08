#include<set>
using namespace std;

class MusicMatcher
{
	map<string, string> adjList;
	ifstream fin("data.csv");
	string artist;
	string song;
	while (fin.good())
	{
		getline(fin, artist, ']');
		getline(fin, song, '\n');
		adjList[song] = artist;
		cout << artist << endl;
	}
	fin.close();
	string source = "A";
	set<string> visited;
	stack<string> s;
	
	visited.insert(source);
	s.push(source);
	cout<<"DFS: ";
	
	while(!q.empty())
	{
		string u s.top();
		cout<<u;
		s.pop();
		vector<string> neighbors = graph[u];
		for(string v: neighbors)
		{
			if(visited.count(v)==0)
			{
				visited.insert(v);
				s.push(v);
			}
		}
	}
}
