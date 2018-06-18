#include <iostream>
using namespace std;

int main()
{
    int row = 0;
    cin >> row;
    
    int input[row][3] = {0};
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> input[i][j];
        }
    }
    
    int grid[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//  The grid
//  (0, 0) (0, 1) (0, 2)
//  (1, 0) (1, 1) (1, 2)
//  (2, 0) (2, 1) (2, 2)
    
    int clue1[row][4] = {0};
    for (int i = 0; i < row; i++) {
        switch (input[i][0]) {
            case 1:
                clue1[i][0] = 2;
                clue1[i][1] = 4;
            case 2:
                clue1[i][0] = 1;
                clue1[i][1] = 3;
                clue1[i][2] = 5;
            case 3:
                clue1[i][0] = 2;
                clue1[i][1] = 6;
            case 4:
                clue1[i][0] = 1;
                clue1[i][1] = 5;
                clue1[i][2] = 7;
            case 5:
                clue1[i][0] = 2;
                clue1[i][1] = 4;
                clue1[i][2] = 6;
                clue1[i][3] = 8;
            case 6:
                clue1[i][0] = 3;
                clue1[i][1] = 5;
                clue1[i][2] = 9;
            case 7:
                clue1[i][0] = 4;
                clue1[i][1] = 8;
            case 8:
                clue1[i][0] = 5;
                clue1[i][1] = 7;
                clue1[i][2] = 9;
            case 9:
                clue1[i][0] = 6;
                clue1[i][1] = 8;
        }
    }
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (grid[j][k] == input[i][0]) {
                    clue1[i][0] = j;
                    clue1[i][1] = k;
                }
            }
        }
    }    
}
