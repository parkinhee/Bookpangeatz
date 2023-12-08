#include<stdio.h>
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
// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;

// // typedef struct point Point;

// // typedef struct Person
// // {
// //     char name[20];
// //     char phoneNum[20];
// //     int age;
// // }Person;



// // int main(void){
// //     Point pos={10,20,};
// //     Person man={"이승기","010-1212-0001",21};
// //     printf("%d %d \n",pos.xpos,pos.ypos);
// //     printf("%s %s %d \n",man.name,man.phoneNum,man.age);
// //     return 0;
// //     }
// void ShowPosition(Point pos)
// {
//     printf("[%d %d] \n",pos.xpos,pos.ypos);
// }
// Point GetCurrentPosition(void)
// {
//     Point cen;
//     printf("Input current pos: ");
//     scanf("%d %d", &cen.xpos,&cen.ypos);
//     return cen;
// }

// int main(void){
//     Point curPos=GetCurrentPosition();
//     ShowPosition(curPos);
//     return 0;
// }

// typedef struct point
// {
//     int xpos;
//     int ypos;
// }Point;

// Point AddPoint(Point pos1, Point pos2){
//     Point pos={pos1.xpos+pos2.xpos,pos1.ypos+pos2.ypos};
//     return pos;
// }

// Point MinPoint(Point pos1,Point pos2){
//     Point pos={pos1.xpos-pos2.ypos,pos1.ypos-pos2.ypos};
//     return pos;
// }

// int main(void){
//     Point pos1={5,6};
//     Point pos2={2,9};
//     Point result;

//     result=AddPoint(pos1,pos2);
//     printf("[%d %d]\n", result.xpos,result.ypos);
//     result=MinPoint(pos1,pos2);
//     printf("[%d %d]\n", result.xpos,result.ypos);
//     return 0;


// }

// typedef enum syllable
// {
//     Do=1,Re=2,Mi=3,Fa=4,So=5,La=6,Ti=7
// }Syllable;

// void Sound(Syllable sy)
// {
//     switch(sy)
//     {
//         case Do:
//             puts("도는 하얀 도라지"); return;
//         case Re:
//             puts("레는 둥근 레코드 "); return;
//         case Mi:
//             puts("미는 파란 미나리 "); return;
//         case Fa:
//             puts("파는 예쁜 파랑새"); return;
//         case So:
//             puts("솔은 작은 솔방울");return;
//         case La:
//             puts("라는 라디오고요~"); return;
//         case Ti:
//             puts("시는 졸졸 시냇물"); return;
//     }
//     puts("다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠");
// }

// int main(void){
//     Syllable tone;
//     for(tone=Do;tone<=Ti;tone++)
//         Sound(tone);
//     return 0;
// }

// int main(void){
//     int ch;
//     int i;
//     FILE*fp=fopen("data.txt","wt");
//     if(fp==NULL){
//         puts("오픈 실패!");
//         return -1;
//     }

//    for(i=0;i<3;i++)
//    {
//     ch=fgetc(fp);
//     printf("%c\n",ch);
//    }
//    fclose(fp);
//    return 0;
// }
// #include <stdlib.h>

// char *ReadUserName(void){
//     char *name=(char*)malloc(sizeof(char)*30);
//     printf("What's your name?");
//     gets(name);
//     return name;
// }

// int main(void){
//     char *name1;
//     char *name2;
//     name1=ReadUserName();
//     printf("name1:%s\n",name1);
//     name2=ReadUserName();
//     printf("name2:%s\n",name2);

//     printf("name1:%s\n",name1);
//     printf("name2:%s\n",name2);
//     free(name1);
//     free(name2);
//     return 0;
// }
int main(void){
    typedef struct book{

    }Book;
}