#include <stdio.h>

int main(int arg, char *argv[])
{
    int qian = 0;
    printf("jinrucunqianquqianguanlixitong\n");
    while (1)
    {

        printf("1---cunqian\n");
        printf("2---quqian\n");
        printf("3---yue\n");
        printf("4---tuichu\n");

        printf("qingxuanzexiangyingdegongneng\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("qingshuruyaocunrudejine:\n");
            int cun;
            scanf("%d", &cun);
            qian += cun;

            printf("cunruchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("qingshuruyaoquchudejine:\n");
            int qu;
            
            scanf("%d",&qu);
            if(qian<qu){
                printf("yuebuzu,quqianshibai\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }else
            {
                qian-=qu;
                printf("quqianchenggong,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            
        }

        if (code == 3)
        {
            printf("dangqianyuewei: \n");
            printf("%d\n", qian);

            printf("quchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
          printf  ("chengxutuichu\n");
          break; 
        }
       
    }
     return 0;
}