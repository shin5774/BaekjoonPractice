#include <iostream>
#include <string.h>

#define MAX_N 500
using namespace std;

int n, m, b, t, l_count, h_count; // l_count,h_count:가장 낮은곳과 높은곳의 개수
bool low[MAX_N][MAX_N]; //가장 낮은곳의 위치를 확인하기 위한 배열
bool high[MAX_N][MAX_N]; //가장 높은곳의 위치를 확인하기 위한 배열
int blocks[MAX_N][MAX_N]; // input이 들어가는곳

//매 시도시 low와 high 초기화를 위한 함수
void reset_low_high() {
    for (int i = 0; i < n; i++) {
        memset(low[i], false, sizeof(m));
        memset(high[i], false, sizeof(m));
    }
}

//최소 높이와 최대높이 설정
void set_low_high() {
    int min = 257;
    int max = -1;
    l_count = 0;
    h_count = 0;

    reset_low_high();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (blocks[i][j] < min)
                min = blocks[i][j];
            if (blocks[i][j] > max)
                max = blocks[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (blocks[i][j] == min) {
                low[i][j] = true;
                l_count++;
            }
            if (blocks[i][j] == max) {
                high[i][j] = true;
                h_count++;
            }
        }
    }
}

// b에 따른 최소위치 쌓기
void stack_block() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (low[i][j] == true) {
                blocks[i][j]++;
                low[i][j] = false;
                b--;
                t++;
                l_count--;
                if (b == 0)
                    return;
            }
        }
    }
}

//평평해 졌는지 확인
bool check_block() {
    int check = blocks[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (blocks[i][j] != check)
                return false;
        }
    }

    return true;
}

int find_high() {
    int max = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (blocks[i][j] > max)
                max = blocks[i][j];
        }
    }

    return max;
}

void remove_block() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (high[i][j] == true) {
                blocks[i][j]--;
                high[i][j] = false;
                b++;
                t += 2;
                h_count--;
            }
        }
    }
}

int main() {
    cin >> n >> m >> b;

    // input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> blocks[i][j];
        }
    }
    while (true) {

        if (check_block()) {
            cout << t << " " << find_high();
            break;
        }

        bool check = true;
        set_low_high();

        int c_t = t;
        int c_b = b;
        if (b >= l_count && 2 * h_count >= l_count) {
            stack_block();
        } else {
            remove_block();
        }
    }
}
