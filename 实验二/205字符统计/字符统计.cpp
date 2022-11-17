#include <iostream>
using namespace std;
int main()
{
    char c;
    int letter=0, space=0, num=0, other = 0;
    do 
    { 
        c = getchar();//关键函数，可以读取' '和'/n'
        //当程序调用getchar时，程序就等着用户按键。用户输入的字符被存放在键盘缓冲区中。直到用户按回车为止。当用户键入回车之后，getchar才开始从输入流中每次读入一个字符。
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letter++;
        else if (c == ' ' || c == '\t') space++;
        else if (c >= '0' && c <= '9') num++;
        else other++;
    } 
    while (c != '\n');
    cout << "Letter= " << letter << " Space= " << space << " Number= " << num << " Other= " << other << endl;
    return 0;
}