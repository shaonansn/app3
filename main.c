#include <stdio.h>

int main(int arg, char *argv[])
{
    int qian = 0;
    printf("进入存钱取钱管理系统\n");
    while (1)
    {
        int a = 0;

        printf("1---存钱\n");
        printf("2---取钱\n");
        printf("3---余额\n");
        printf("4---退出\n");

        printf("请输入功能编号\n");
        scanf("%d", &a);

        if (a == 1)
        {

            int cun;
            char x;
            printf("进入存钱功能，请输入要存入的金额\n");

            scanf("%d", &cun);

            qian += cun;

            printf("存入成功，点击回车继续");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (a == 2)
        {
            if (qian >= qu)
            {
                scanf("%d", &qu);
                int qu;
                char x;
                printf("进入取钱功能，请输入要取出的金额\n");

                {
                    qian

                        scanf("%c", &x)
                            scanf("%c", &x)
                }
            }
        }
    }
    printf("hello world!");

    return 0;
}
