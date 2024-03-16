#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

#define MAXN 100010
#define INF 1000000000

int SegmentTree[4 * MAXN];

int a[MAXN], b[MAXN];

void BuildTree(int *a, int Vertex, int LeftPos, int RightPos) {
    if (LeftPos == RightPos)
        SegmentTree[Vertex] = a[LeftPos];
    else {
        int Middle = (LeftPos + RightPos) / 2;
        BuildTree(a, 2 * Vertex, LeftPos, Middle);
        BuildTree(a, 2 * Vertex + 1, Middle + 1, RightPos);
        SegmentTree[Vertex] = std::max(SegmentTree[2 * Vertex], SegmentTree[2 * Vertex + 1]);
    }
}

int GetMax(int Vertex, int LeftPos, int RightPos, int Left, int Right) {
    if (Left > Right)
        return -INF;
    if (Left == LeftPos && Right == RightPos)
        return SegmentTree[Vertex];
    int Middle = (LeftPos + RightPos) / 2;
    return std::max(GetMax(2 * Vertex, LeftPos, Middle, Left, std::min(Right, Middle)),
                    GetMax(2 * Vertex + 1, Middle + 1, RightPos, std::max(Left, Middle + 1), Right));
}

int main() {
    int n, q, i, j, cnt, bPtr;
    while (scanf("%d %d", &n, &q), n) {
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (bPtr = i = 0; i < n; i++) {
            cnt = 1;
            while ((i < n) && (a[i] == a[i + 1]))
                cnt++, i++;
            for (j = 0; j < cnt; j++)
                b[bPtr++] = cnt;
        }

        memset(SegmentTree, 0, sizeof(SegmentTree));
        BuildTree(b, 1, 0, n - 1);

        int Left, Right;
        for (i = 0; i < q; i++) {
            scanf("%d %d", &Left, &Right);
            Left--;
            Right--;

            if (a[Left] == a[Right])
                printf("%d\n", Right - Left + 1);
            else {
                int LeftEnd = (int) (std::upper_bound(a + Left, a + Right, a[Left]) - a) - 1;
                int RightBegin = (int) (std::lower_bound(a + Left, a + Right, a[Right]) - a);
                int LeftCnt = LeftEnd - Left + 1;
                int RightCnt = Right - RightBegin + 1;
                int Middle = GetMax(1, 0, n - 1, LeftEnd + 1, RightBegin - 1);
                int res = std::max(std::max(LeftCnt, RightCnt), Middle);
                printf("%d\n", res);
            }
        }
    }
    return 0;
}
