#include <iostream>
using namespace std;
int main()
{
    char c;
    int letter=0, space=0, num=0, other = 0;
    do 
    { 
        c = getchar();//�ؼ����������Զ�ȡ' '��'/n'
        //���������getcharʱ������͵����û��������û�������ַ�������ڼ��̻������С�ֱ���û����س�Ϊֹ�����û�����س�֮��getchar�ſ�ʼ����������ÿ�ζ���һ���ַ���
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letter++;
        else if (c == ' ' || c == '\t') space++;
        else if (c >= '0' && c <= '9') num++;
        else other++;
    } 
    while (c != '\n');
    cout << "Letter= " << letter << " Space= " << space << " Number= " << num << " Other= " << other << endl;
    return 0;
}