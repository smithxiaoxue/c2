#include <stdio.h>

int main(int argc, char *argv[])
{
    char arr[1000];
    int index = 0;
    int code = 0;
    printf("jinruminganzifuguanlixitong\n");
    while (1)
    {
        printf("1--tianjiayigeminganzifu\n");
        printf("2--shanchuzuihouyigeminganzifu\n");
        printf("3---xianshisuoyoum9nganzifu\n");
        printf("qingshuruxiangyingdegongnengbiaohao\n");
        scanf("%d", &code);
        if (code == 1)
        {
            char a;
            char x;
            printf("qingshuruyaochucundezifu\n");
            scanf("%c", &a);
            scanf("%c", &a);
            arr[index] = a;
            index += 1;
            printf("tianjiachengong,dianjihuichejixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            char x;
            printf("shanchuzuihouyigeminganzifu");
            index -= 1;
            printf("shanchuchenggong,dianjihuichejixu");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 3)
        {
            char x;
            int i = 0;
            printf("xianshisuoyoudeminganzifu\n");
            for (; i < index; i++)
            {
                printf("%c\n", arr[i]);
            }
            printf("dianjihuichejixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
    }

    return 0;
}

