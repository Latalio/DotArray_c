#include <iostream>
#include <fstream>
#include <cassert>
#include <string>

#include <windows.h>
#include <dsound.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")

#include <thread>
using namespace std;

//void read_text(string& filename)
//{
//    ifstream infile;
//    infile.open(filename);   //将文件流对象与文件连接起来
//    assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行
//
//    string s;
//    while(getline(infile,s))
//    {
//        cout<<s<<endl;
//    }
//    infile.close();             //关闭文件输入流
//}

int main ()
{
    string name;
//    name = "D:\\Code\\CLionProjects\\DotArray\\shanhai.lrc";
//    read_text(name);
//     bool playSucc = PlaySound(TEXT("D:\\Code\\CLionProjects\\DotArray\\shanhai.wav"), NULL, SND_FILENAME | SND_ASYNC);
//    mciSendString(TEXT("open shanhai,wav alias mysong"), NULL, 0,NULL);//这一行是打开音频，你要播放音频肯定要先打开文件的，并将其命名为mysong.
//    mciSendString(TEXT("play mysong repeat"), NULL, 0, NULL);//打开报警音

//    if(playSucc)
//    {
//        cout<<"Success to play!"<<endl;
//    }
//    else
//    {
//        cout<<"Fail to paly!"<<endl;
//    }

    system("pause");

    return 0;
}
