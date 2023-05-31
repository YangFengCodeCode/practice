#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BOARD_WIDTH  10
#define BOARD_HEIGHT 20
#define BLOCK_SIZE   4

// ����˹��������ֻ�����״��ÿ����״����4���������
const int BLOCK_SHAPES[7][BLOCK_SIZE][2] = {
    {{0, 0}, {0, 1}, {0, 2}, {0, 3}}, // I
    {{0, 0}, {0, 1}, {1, 0}, {1, 1}}, // O
    {{0, 0}, {0, 1}, {0, 2}, {1, 2}}, // L
    {{0, 0}, {0, 1}, {0, 2}, {1, 0}}, // J
    {{0, 0}, {0, 1}, {1, 1}, {1, 2}}, // Z
    {{0, 0}, {0, 1}, {1, 0}, {1, 2}}, // S
    {{0, 0}, {0, 1}, {0, 2}, {1, 1}}  // T
};

// ��Ϸ����
int board[BOARD_HEIGHT][BOARD_WIDTH];

// ��ǰ�����λ�ú���״
int curX, curY;
int curShape, curRotation;

// �������һ���µķ���
void newBlock() {
    curX = BOARD_WIDTH / 2 - 2;
    curY = 0;
    curShape = rand() % 7;
    curRotation = 0;
}

// �жϵ�ǰ�����Ƿ����Ϸ�����еķ��鷢����ײ
int isCollision() {
    int i, j;
    for (i = 0; i < BLOCK_SIZE; i++) {
        int x = curX + BLOCK_SHAPES[curShape][i][0];
        int y = curY + BLOCK_SHAPES[curShape][i][1];
        if (x < 0 || x >= BOARD_WIDTH || y < 0 || y >= BOARD_HEIGHT || board[y][x] != 0) {
            return 1;
        }
    }
    return 0;
}

// ����ǰ������õ���Ϸ������
void placeBlock() {
    int i;
    for (i = 0; i < BLOCK_SIZE; i++) {
        int x = curX + BLOCK_SHAPES[curShape][i][0];
        int y = curY + BLOCK_SHAPES[curShape][
