#include <bits/stdc++.h>
using namespace std;

#define V 5

void display(int color[]);

bool isSafe(int v, bool graph[V][V], int color[], int c)
{
	for (int i = 0; i < V; i++)
		if (graph[v][i] && c == color[i])
			return false;

	return true;
}

bool graphColoringUtil(bool graph[V][V], int m, int color[], int v)
{
	if (v == V)
		return true;

	for (int c = 1; c <= m; c++)
        {
		if (isSafe(v, graph, color, c))
		{
			color[v] = c;
            if (graphColoringUtil(graph, m, color, v + 1) == true)
				return true;

			color[v] = 0;
		}
	}
	return false;
}

bool graphColoring(bool graph[V][V], int m)
{
    int color[V];
	for (int i = 0; i < V; i++)
		color[i] = 0;
	if (graphColoringUtil(graph, m, color, 0) == false)
    {
		cout << "Solution does not exist";
		return false;
	}

	display(color);
	return true;
}

void display(int color[])
{
	cout << "Solution Exists:\n" << "Colors are" << "\n";
	for (int i = 0; i < V; i++)
		cout << " " << color[i] << " ";

	cout << "\n";
}

int main()
{
	bool graph[V][V] = {
		{ 0, 1, 1, 1, 1 },
		{ 1, 0, 1, 0, 0 },
		{ 1, 1, 0, 1, 1 },
		{ 1, 0, 1, 0, 0 },
		{ 1, 0, 0, 1, 0}
	};

	int m = 3;

	graphColoring(graph, m);
	return 0;
}


