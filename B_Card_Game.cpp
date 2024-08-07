#include <stdio.h>
int win(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;
    int flag[4][4] = {
        {a1, b1, a2, b2},
        {a1, b2, a2, b1},
        {a2, b1, a1, b2},
        {a2, b2, a1, b1}
    };
    for (int i = 0; i < 4; i++) {
        int s1 = 0;
        int s2 = 0;
        if (flag[i][0] > flag[i][1]) s1++;
        else if (flag[i][0] < flag[i][1]) s2++;
        if (flag[i][2] > flag[i][3]) s1++;
        else if (flag[i][2] < flag[i][3]) s2++;
        if (s1 > s2) suneet_wins++;
    }
    return suneet_wins;
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a1, a2, b1, b2;
        scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
        int result = win(a1, a2, b1, b2);
        printf("%d\n", result);
    }
    return 0;
}
