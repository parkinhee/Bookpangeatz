#include<stdio.h>
// #include<math.h>

// struct point{
//     int xpos;
//     int ypos;

// };

// int main(void){
//     struct point pos1,pos2;
//     double distance;

//     fputs("point1 pos:",stdout);
//     scanf("%d %d",&pos1.xpos,&pos1.ypos);

//     fputs("point2 pos: ", stdout);
//     scanf("%d %d",&pos2.xpos,&pos2.ypos);

//     distance=sqrt((double)((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos)));
//     printf(" 두 점의 거리는 %g입니다.\n",distance);
//     return 0;

// }
// void ClearLineFromReadBuffer(void){
//     while(getchar()!='\n');
// }

// int main(void){
//     char perID[7];
//     char name[10];

//     fputs("주민번호 앞 6자리 입력: ",stdout);
//     fgets(perID,sizeof(perID),stdin);
//     ClearLineFromReadBuffer();

//     fputs("이름 입력: ",stdout);
//     fgets(name,sizeof(name),stdin);

//     printf("주민번호: %s\n",perID);
//     printf("이름:%s\n",name);
//     return 0;
// }
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
void Print(char chroom[25][25],int x,int y,int size,int weight){
    
       for(int i=0; i<25; i++) //춘식이 방초기화
    {
        for(int j=0; j<25; j++)
        {
            chroom[i][j] =' ';
        }
    }  
    for(int i=0; i<25; i++) //춘식이 방 틀
    {
        chroom[0][i] ='*';
        chroom[i][0] ='*';
        chroom[24][i] ='*';
        chroom[i][24] ='*';
    }
    if(weight<15.0){
    chroom[x][y]='c';
        for(int i=0; i<25; i++) 
        {
            for(int j=0; j<25; j++)
            {
            if(chroom[i][j] == 'c')
            {
                printf("😻 ");
            }
            
            if(chroom[i][j] == '*')
            {
                printf("🧱 ");
            }
            if(chroom[i][j] == ' ')
            {
                printf("   ");
            }
        }
        printf("\n");
        }
    }
    if(weight>=15.0&&weight<50.0){
    chroom[x][y]='c';
    chroom[x][y+1]='c';
        for(int i=0; i<25; i++) 
        {
            for(int j=0; j<25; j++)
            {
            if(chroom[i][j] == 'c')
            {
                printf("😻 ");
            }
            
            if(chroom[i][j] == '*')
            {
                printf("🧱 ");
            }
            if(chroom[i][j] == ' ')
            {
                printf("   ");
            }
        }
        printf("\n");
        }
    }
    if(weight>=50.0){
    chroom[x][y]='c';
    chroom[x][y+1]='c';
    chroom[x+1][y]='c';
    chroom[x+1][y+1]='c';
        for(int i=0; i<25; i++) 
        {
            for(int j=0; j<25; j++)
            {
            if(chroom[i][j] == 'c')
            {
                printf("😻 ");
            }
            
            if(chroom[i][j] == '*')
            {
                printf("🧱 ");
            }
            if(chroom[i][j] == ' ')
            {
                printf("   ");
            }
        }
        printf("\n");
        }
    }
}
int main(void){
    int random;
    int die=0;
    double weight=10;
    double love=0;
    int ddong=0;
    int sick=0;
    int key=0;
    int over=0;
    double recovery=0;
    int turn=0;
    srand(time(NULL));
    int x,y;
    int i,j;
    char chroom[25][25]; //춘식이 방크기
    printf("현재 춘식이 몸무게: %gkg이고, 🩷 (애정도)는 %g입니다.\n",weight,love);
    sleep(1);
    while(weight<100){
        system("clear");
    
        i = rand()%21+1;
        j = rand()%21+1;
        x=i;
        y=j;
        Print(chroom,x,y,25,weight);
        love+=5;
        weight+=5;
        printf("춘식이가 🍚(밥)을 먹습니다.\n");
        ddong=rand()%100+1;
        sick=rand()%100+1;
        if(ddong<=50){
            weight-=0.2;
            printf("춘식이가 💩(응가)를 쌉니다.\n");
        }
        while(sick<=10){
            system("clear");
            recovery=rand()%100+1;
            over=rand()%100+1;
            weight-=0.5;
            love+=5;
            system("clear");
            i = rand()%21+1;
            j = rand()%21+1;
            x=i;
            y=j;
            Print(chroom,x,y,25,weight);
            printf("춘식이가 ☠️ (병)에 걸렸습니다.\n");

            if(recovery<=love*0.1)
            {
                printf("춘식이 🧚‍♂️(회복)합니다.\n");
                break;
            }
            if(over<=10)
            {
                die=1;
                turn++;
                printf("춘식이가 👻(죽)었습니다. \n");
                break;
            }      
            turn++;
            printf("%d턴 째의 춘식이가 회복하지 🤕(못)하였습니다.\n춘식이 몸무게: %gkg이고, 🩷 (애정도): %g입니다.\n",turn,weight,love);

            sleep(2);
        }
        if(die == 1)
            break;    
        turn++;
        printf("%d턴 째의 춘식이 몸무게: %gkg이고, 🩷 (애정도): %g입니다.\n",turn,weight,love);
        sleep(2);
    }
    printf("총 %d턴 돌았고, 🐷 (거대 춘식이) 최종 몸무게: %gkg이고, 최종 🩷 (애정도): %g입니다.\n",turn,weight,love);
    printf("⏳ 게임 종료 ⏳\n");
}