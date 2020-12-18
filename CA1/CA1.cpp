// CA1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "main_header.h"
using namespace std;
int main(int argc,char** argv)
{
    char type[] = "/help";
    if(argc == 1){_ERROR_ << "不能为空";return _ERRNUM_;}if(argc == 4){_ERROR_ << "传参过多";return _ERRNUM_;}
    if (argv[1] == type) {
        if (argc > 2) { _ERROR_ << "此项下请勿输入参数"; return _ERRNUM_; }
        cout << "格式:" << argv[0] <<" [mode-input>DEG/RAD/GRAD] [double] [mode-output>DEG/RAD/GRAD]";
        return 0;
    }
    /*
    for (int i = 1; i < argc; i++)
    {
        cout << argv[i] << "\n";
    }
    */
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
