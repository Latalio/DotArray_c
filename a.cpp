//
// Created by Latalio on 2019/6/3.
//

#include <iostream>

using namespace std;

int main()
{
    long int offset;
    unsigned char code[2] = {0};
    unsigned char buffer[32];       //�洢һ���������õ�32���ֽ�
    unsigned char i,j;
    FILE *fp = NULL;
    uint8_t c[2] = {0xA3, 0xC1};

    cout << "������һ������:" << endl;
    gets((char*)code);

    printf("����:%d λ��:%d\n", code[0], code[1]);      //��ʾ��λ��
//    offset = ((code[0] - 0xa1) * 94 + code[1] - 0xa1) * 32;     //�������ƫ�Ƶ�ַ
    offset = ((c[0] - 0xa1) * 94 + c[1] - 0xa1) * 32;     //�������ƫ�Ƶ�ַ
    printf("ƫ��ֵΪ: %ld\n", offset);

    fp = fopen("D:\\Code\\CLionProjects\\DotArray\\HZK16", "rb");  //������ֻ����ʽ��,261KB
    if (fp == NULL )                //�����ʧ��
    {
        printf("���ֿ�ʧ��\n");
        return 0;
    }

    fseek(fp,offset,0);             //����ƫ��Ѱ�ҵ�������ģ�ĵ�һ���ֽ�
    for (i = 0; i < 32; ++i) {       //������ȡ32���ֽ�
        buffer[i] = fgetc(fp);
    }

    for (i = 0; i < 32; ++i) {       //��32���ֽ�˳���ӡ
        for (j = 0; j < 8; ++j) {
            if (buffer[i] & 0x80) {
                printf("@@");
            }else{
                printf("  ");
            }
            buffer[i] <<= 1;
        }
        if (i % 2) {
            printf("\n");           //���i%2==1˵�����ֽ��ǿ�����Ǹ��ֽڣ���ʾ���Ҫ����
        }
    }

    return EXIT_SUCCESS;
}


