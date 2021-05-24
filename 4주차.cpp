#include <stdio.h>
int main() {
    int arr[9], big = 0, index;
    for (int i = 0; i<9; i++)
    {
        scantf("%d", &arr[i]]);
        if (arr[i] > big)
        {
            big = arr[i];
            index = i;
        }
    }
    printf("%d\n%d", big, index+1);
}

#include <stdio.h>
int main() {
    int a,b,c;
    int arr[10] = {0, };
    scanf("%d%d%d", &a,&b, &c);
    int n = a*b*c;

    int num;
    while(n>0) {
        num = n%10;
        arr[num]++;
        n /= 10;
    }
    for(int i =0; i<10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

#include<stdio.h>

typedef struct sarr {
    char arr9800;
    int score;
}SARR;

int main(void) {
    int n;
    SARR sar[100];
    scaf("%d", &n);

    for (int i = 0; i
    < n; i++) {
        scanf("%s", &
        sar[i].arr);
    }
    for (int i = 0; i
    < n; i++) {
        sar[i].score = 0; 
        int count = 0;
        for (int j = 0; j < strlen(sar[i].arr); j++) {
            if (sar[i].arr[j] == '0' 
            sar[i].arr[j] == 'o') {
                count 
++;
sar[i].score += count;}
else
count = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            printf("%d \n", sar[i].score);
    }
}

#include <stdio.h>

int main(void)
{
    char word[100] = { 0 };
    scanf("%s", word);
    for (int i = 97; i <= 122; i++) {
        int j = 0;
        while (word[j] != 0) {
            if (word[j] == (char)i) break;
            j++;
        }
        if (word[j] == (char)i) printf("%d", j);
        else printf("-1 ");
    }
}