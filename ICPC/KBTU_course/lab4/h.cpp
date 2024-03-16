#include <cstdio>
#include <cstdlib>

#define MAX 2000000000

struct Item {
    int cnt, x, Min, Priority;
    Item *l, *r;

    Item(int x) : Priority((rand() << 16u) + unsigned(rand())), x(x), Min(x), l(nullptr), r(nullptr) {}

    Item() {}
};

int min(int x, int y) {
    return (x < y) ? x : y;
}

int cnt(Item *t) {
    return t ? t->cnt : 0;
}

long long GetMin(Item *t) {
    return t ? t->Min : MAX;
}

void upd(Item *t) {
    if (t) {
        t->cnt = 1 + cnt(t->l) + cnt(t->r);
        t->Min = min(t->x, min(GetMin(t->l), GetMin(t->r)));
    }
}

void Merge(Item *l, Item *r, Item *&t) {
    if (!l || !r)
        t = l ? l : r;
    else if (l->Priority > r->Priority)
        Merge(l->r, r, l->r), t = l;
    else
        Merge(l, r->l, r->l), t = r;
    upd(t);
}

void Split(Item *t, Item *&l, Item *&r, int pos) {
    if (!t) return void(l = r = nullptr);
    if (pos <= cnt(t->l))
        Split(t->l, l, t->l, pos), r = t;
    else
        Split(t->r, t->r, r, pos - 1 - cnt(t->l)), l = t;
    upd(t);
}

int main() {
    int n;
    scanf("%d", &n);

    char c;
    int i, j;

    Item *t = nullptr;

    for (int k = 0; k < n; ++k) {
        scanf(" %c %d %d", &c, &i, &j);
        if (c == '+') {
            Item *t1, *t2;
            Split(t, t1, t2, i);
            Merge(t1, new Item(j), t1);
            Merge(t1, t2, t);
        } else {
            Item *t1, *t2;
            Split(t, t, t1, i - 1);
            Split(t1, t1, t2, j - i + 1);
            printf("%d\n", t1->Min);
            Merge(t, t1, t);
            Merge(t, t2, t);
        }
    }

    return 0;
}
