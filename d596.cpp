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
    
    int bomb[row][4] = {0};
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (grid[j][k] == input[i][0]) {
                    for (int l = 0; l < 4; l++) {
                        int x = 0, y = 0;
                        switch (l) {
                            case 0:
                                x = -1;
                                break;
                            case 1:
                                y = -1;
                                break;
                            case 2:
                                y = 1;
                                break;
                            case 3:
                                x = 1;
                                break;
                        }
                        
                        if (j+x < 0 || k+y < 0 || j+x > 2 || k+y > 2) {
                            bomb[i][l] = 0;
                        } else {
                            bomb[i][l] = grid[j+x][k+y];
                        }
                    }
                }
            }
        }
    }
    
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (bomb[i][j] == 0) {
//            } else {
//                cout << bomb[i][j] << " ";
//            }
//        }
//        cout << endl;
//    }
    
    return 0;
}
