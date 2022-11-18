#include <iostream>
#include <queue>

using namespace std;


int Max(queue<int> queue)
{
    int tmp,max = -1;
    for (int i = 0; i < queue.size(); i++)
    {
        if (queue.front() > max)
            max = queue.front();
        tmp = queue.front();
        queue.pop();
        queue.push(tmp);
    }

    return max;
}

void Test()
{
    int M, N, tmp, cnt = 0;
    queue<int> queue;

    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        queue.push(tmp);
    }

    while (queue.empty() != true)
    {
        if (queue.front() == Max(queue))
        {
            cnt++;
            queue.pop();
            if (M == 0)
            {
                cout << cnt << "\n";
                break;
            }
            else
            {
                M--;
                N--;
            }
        }
        else
        {
            tmp = queue.front();
            queue.pop();
            queue.push(tmp);
            if (M == 0)
            {
                M = N - 1;
            }
            else
            {
                M--;
            }
        }

    }
}

int main(int argc, char* argv[]) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        Test();
    }

    return 0;

}