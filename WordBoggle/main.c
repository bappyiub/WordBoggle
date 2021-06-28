//
//  main.c
//  WordBoggle
//
//  Created by manzoor on 23/6/21.
//

#include <stdio.h>

#include <string.h>
const int M=3 ,t=5,p=10;
int charexists(char * array, char ch) {
    for (int i = 0;*(array + i) != '\0'; i++)
        if (ch == * (array + i))
            return (i + 1);
    return 0;;
}
int wordexists(char array[p], char board[M][M]) {
    int x = 0;
    for (int k = 0; k < M; k++) {
        for (int i = 0; i < M; i++) {

            x = charexists(array, board[k][i]);

            if (x && array[x] == '\0')
                return 1;

        }

    }

    return 0;
}
int main(int argc,
    const char * argv[]) {
    char dictionary[t][p] = {
        "GEEKS",
        "FOR",
        "QUIZ",
        "GO",
        '\0'
    };
    int j = 0;
    char board[M][M] = {
        {
            'G',
            'I',
            'Z'
        },
        {
            'U',
            'E',
            'K'
        },
        {
            'Q',
            'S',
            'E'
        }
    };
    for (j = 0; dictionary[j][0] != '\0'; j++) {

        if (wordexists(dictionary[j], board)) {
            printf("%s\n", dictionary[j]);

        }

    }

    return 0;
}
