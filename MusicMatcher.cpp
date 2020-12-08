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
}
