#include "mat.hpp"
using namespace ariel;



char* ariel::mat (int w, int h, char a, char b) {
    char* str = NULL;
    return str;
}

// char* mat2 (int w, int h, char a, char b) {
//     char** mat = (char**)malloc(w * sizeof(char*));
//     int rows = w;
//     int cols = h;
//     char ch = a;
//     while (rows > 0 && cols > 0) {
//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < cols; j++) {
//                 if (i == 0 || i == rows-1) {
//                     mat[i][j] = ch; //cout cin instead
//                 }
//                 if (j == 0 || j == cols-1) {
//                     mat[i][j] = ch;
//                 }
            
//             }
//         }
//         rows = rows - 2;
//         cols = cols - 2;
//         if (ch == a) {
//             ch = b;
//         } else {
//             ch = a;
//         }
//     }

//     for (int i = 0; i < w; i ++) {
//         for (int j = 0; j < h; j++) {
//             printf("%c", mat[i][j]);
//         }
//     }
//     char* str;
//     return str;
// }

// int main () {
//     mat2(3, 3, '#', '-');
// }