#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
 
void gotoxy(int x, int y)   // xay dung ham gotoxy
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
 
void SetColor(WORD color)
{
    HANDLE hConsoleOutput;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
 
    CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
    GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
 
    WORD wAttributes = screen_buffer_info.wAttributes;
    color &= 0x000f;
    wAttributes &= 0xfff0;
    wAttributes |= color;
 
    SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}
 
int main(){
    int a[256] = {0};
    a[7] = a[8] = a[9] = a[10] = a[13] = 1;
    char *s = "ASCII table upload by nguyendinhthuong2879";
    gotoxy(40 - strlen(s)/2, 1);
    printf("%s\n\n", s);
    system("color 1A");   // Dat mau, mau nen la 1, mau chu la A
    for (int i=0; i<20; i++){
        for (int j=i, k = 0; k<13 && j<256; k++, j += 20){
            //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
            SetColor(10);
            printf("%4d ", j);
            SetColor(15);
            if (a[j])
                printf(" ");
            else
                printf("%c", j);
        }
 
        printf("\n");
    }
    SetColor(10);
    s = "Program in Dev-C++";
    gotoxy(40 - strlen(s)/2, 24);
    printf("%s\n\n", s);
}
