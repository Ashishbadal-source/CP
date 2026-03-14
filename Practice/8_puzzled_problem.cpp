#include <bits/stdc++.h>
using namespace std;

struct Node {
    vector<vector<int>> board;
    int zeroX, zeroY;
    int g, h, f;
    Node* parent;

    Node(vector<vector<int>> b, int zx, int zy, int g, int h, Node* p) {
        board = b;
        zeroX = zx;
        zeroY = zy;
        this->g = g;
        this->h = h;
        f = g + h;
        parent = p;
    }
};

struct compare {
    bool operator()(Node* a, Node* b) {
        return a->f > b->f;
    }
};


void printPath(Node* node) {
    if (!node) return;
    printPath(node->parent);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << node->board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "------\n";
}


int heuristic(vector<vector<int>>& board) {
    int dist = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int val = board[i][j];
            if (val != 0) {
                int tx = (val - 1) / 3;
                int ty = (val - 1) % 3;
                dist += abs(i - tx) + abs(j - ty);
            }
        }
    }
    return dist;
}


int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool isValid(int x, int y) {
    return x >= 0 && y >= 0 && x < 3 && y < 3;
}

string encode(vector<vector<int>>& board) {
    string s;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            s += char(board[i][j] + '0');
    return s;
}


int main() {

    vector<vector<int>> start = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 5, 8}
    };

    vector<vector<int>> goal = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 0}
    };

    int zx, zy;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (start[i][j] == 0) {
                zx = i;
                zy = j;
            }

    priority_queue<Node*, vector<Node*>, compare> open;
    unordered_set<string> closed;

    Node* startNode = new Node(start, zx, zy, 0, heuristic(start), nullptr);
    open.push(startNode);

    while (!open.empty()) {
        Node* cur = open.top();
        open.pop();

        string key = encode(cur->board);
        if (closed.count(key)) continue;
        closed.insert(key);

        if (cur->board == goal) {
            cout << "Solution Found:\n";
            printPath(cur);
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            int nx = cur->zeroX + dx[i];
            int ny = cur->zeroY + dy[i];

            if (!isValid(nx, ny)) continue;

            vector<vector<int>> newBoard = cur->board;
            swap(newBoard[cur->zeroX][cur->zeroY],
                 newBoard[nx][ny]);

            string newKey = encode(newBoard);
            if (closed.count(newKey)) continue;

            int newG = cur->g + 1;
            int newH = heuristic(newBoard);

            Node* next = new Node(newBoard, nx, ny, newG, newH, cur);
            open.push(next);
        }
    }

    cout << "No solution exists\n";
    return 0;
}
