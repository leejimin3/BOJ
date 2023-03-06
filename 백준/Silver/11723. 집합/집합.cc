#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

bool list[20] = {false,};


void add(int x) { list[x-1] = true; }

void remove(int x) { list[x-1] = false; }

void check(int x) { int tmp = (list[x-1]) ? 1 : 0; cout << tmp << "\n"; }

void toggle(int x) { list[x-1] = !list[x-1]; }

void all() { for (int i = 0; i < 20; i++) list[i] = true; }

void empty() { for (int i = 0; i < 20; i++) list[i] = false; }


int main(int argc, char* argv[]) {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int M;
	cin >> M;

	string name; int num;

	for (int i = 0; i < M; i++)
	{
		cin >> name;
		
		if(name == "add") { cin >> num; add(num);}
		else if (name == "remove") { cin >> num; remove(num);}
		else if (name == "check") { cin >> num; check(num); }
		else if (name == "toggle") { cin >> num; toggle(num);}
		else if (name == "all") all();
		else if (name == "empty") empty();
	}

	return 0;
}