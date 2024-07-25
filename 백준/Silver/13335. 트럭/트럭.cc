#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, w, L, sum;

queue <int> truck;
queue <pair<int,int>> bri; // 트럭무게, 남은시간

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> w >> L;

	for (int i = 0; i < n; i++)
	{
		int tmp;  cin >> tmp;
		truck.push(tmp);
	}

	while (1)
	{
		sum++;
		
		if (!bri.empty())
		{
			if (sum - bri.front().second == w)
			{
				L += bri.front().first;
				bri.pop();

				if (bri.empty() && truck.empty())
				{
					break;
				}
			}
		}

		if (!truck.empty() && (L >= truck.front()))
		{
			L -= truck.front();
			bri.push({ truck.front(), sum });
			truck.pop();
		}
	}

	cout << sum << "\n";
	return 0;
}