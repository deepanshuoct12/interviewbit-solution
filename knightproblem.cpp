#include <bits/stdc++.h>
using namespace std;

struct cell {
    int x, y;
    int dis;
    cell() {}
    cell(int x, int y, int dis)
        : x(x), y(y), dis(dis)
    {
    }
};

bool isInside(int x, int y, int N)
{
    if (x >= 1 && x <= N && y >= 1 && y <= N)
        return true;
    return false;
}
int KnightTour(int n, int x1, int y1, int x2, int y2){
   int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
   int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
   int N=n;
    // queue for storing states of knight in board
    queue<cell> q;

    // push starting position of knight with 0 distance
    q.push(cell(x1,y1,0));

    cell t;
    int x, y;
    bool visit[N + 1][N + 1];

    // make all cell unvisited
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            visit[i][j] = false;

    // visit starting state
    visit[x1][y1] = true;

    // loop untill we have one element in queue
    while (!q.empty()) {
        t = q.front();
        q.pop();

        // if current cell is equal to target cell,
        // return its distance
        if (t.x == x2 && t.y == y2)
            return t.dis;

        // loop for all reachable states
        for (int i = 0; i < 8; i++) {
            x = t.x + dx[i];
            y = t.y + dy[i];

            // If reachable state is not yet visited and
            // inside board, push that state into queue
            if (isInside(x, y, N) && !visit[x][y]) {
                visit[x][y] = true;
                q.push(cell(x, y, t.dis + 1));
            }
        }
    }
	//write your code here
}

int main(){
    int n;
	cin>>n;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout << KnightTour(n,x1,y1,x2,y2);

    return 0;
}
