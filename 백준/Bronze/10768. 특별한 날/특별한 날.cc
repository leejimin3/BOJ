#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
	
	int M, D;

	cin >> M >> D;

	if (M == 2)
	{
		if (D == 18)
		{
			cout << "Special" << "\n";
		}
		else if (D < 18)
		{
			cout << "Before" << "\n";
		}
		else
		{
			cout << "After" << "\n";
		}
	}

	else if(M < 2)
	{
		cout << "Before" << "\n";
	}
	else
	{
		cout << "After" << "\n";
	}
	

}