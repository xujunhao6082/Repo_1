// CA1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "main_header.h"
using namespace std;
int a(char str[]);
int main(int argc,char** argv)
{
    char str_1[999999999] = "" ;
    for (int i = 1; i < argc; i++)
    {
        char *str = argv[i];
        for (int n = 0; n < strlen(str); n++)
        {
            switch (str[n])
            {
            case 'a':
                strcat(str_1, ".-/");
                break;
            case 'b':
                strcat(str_1, "-.../");
                break;
            case 'c':
                strcat(str_1, "-.-./");
                break;
            case 'd':
                strcat(str_1, "-../");
                break;
            case 'e':
                strcat(str_1, "./");
                break;
            case 'f':
                strcat(str_1, "..-./");
                break;
            case 'g':
                strcat(str_1, "--./");
                break;
            case 'h':
                strcat(str_1, "..../");
                break;
            case 'i':
                strcat(str_1, "../");
                break;
            case 'j':
                strcat(str_1, ".---/");
                break;
            case 'k':
                strcat(str_1, "-.-/");
                break;
            case 'l':
                strcat(str_1, ".-../");
                break;
            case 'm':
                strcat(str_1, "--/");
                break;
            case 'n':
                strcat(str_1, "-./");
                break;
            case 'o':
                strcat(str_1, "---/");
                break;
            case 'p':
                strcat(str_1, ".--./");
                break;
            case 'q':
                strcat(str_1, "--.-/");
                break;
            case 'r':
                strcat(str_1, ".-./");
                break;
            case 's':
                strcat(str_1, ".../");
                break;
            case 't':
                strcat(str_1, "-/");
                break;
            case 'u':
                strcat(str_1, "..-/");
                break;
            case 'v':
                strcat(str_1, "...-/");
                break;
            case 'w':
                strcat(str_1, ".--/");
                break;
            case 'x':
                strcat(str_1, "-..-/");
                break;
            case 'y':
                strcat(str_1, "-.--/");
                break;
            case 'z':
                strcat(str_1, "--../");
                break;
            case 'A':
                strcat(str_1, ".-/");
                break;
            case 'B':
                strcat(str_1, "-.../");
                break;
            case 'C':
                strcat(str_1, "-.-./");
                break;
            case 'D':
                strcat(str_1, "-../");
                break;
            case 'E':
                strcat(str_1, "./");
                break;
            case 'F':
                strcat(str_1, "..-./");
                break;
            case 'G':
                strcat(str_1, "--./");
                break;
            case 'H':
                strcat(str_1, "..../");
                break;
            case 'I':
                strcat(str_1, "../");
                break;
            case 'J':
                strcat(str_1, ".---/");
                break;
            case 'K':
                strcat(str_1, "-.-/");
                break;
            case 'L':
                strcat(str_1, ".-../");
                break;
            case 'M':
                strcat(str_1, "--/");
                break;
            case 'N':
                strcat(str_1, "-./");
                break;
            case 'O':
                strcat(str_1, "---/");
                break;
            case 'P':
                strcat(str_1, ".--./");
                break;
            case 'Q':
                strcat(str_1, "--.-/");
                break;
            case 'R':
                strcat(str_1, ".-./");
                break;
            case 'S':
                strcat(str_1, ".../");
                break;
            case 'T':
                strcat(str_1, "-/");
                break;
            case 'U':
                strcat(str_1, "..-/");
                break;
            case 'V':
                strcat(str_1, "...-/");
                break;
            case 'W':
                strcat(str_1, ".--/");
                break;
            case 'X':
                strcat(str_1, "-..-/");
                break;
            case 'Y':
                strcat(str_1, "-.--/");
                break;
            case 'Z':
                strcat(str_1, "--../");
                break;
            case '1':
                strcat(str_1,".----/");
                break;
            case '2':
                strcat(str_1,"..---/");
                break;
            case '3':
                strcat(str_1,"...--/");
                break;
            case '4':
                strcat(str_1,"....-/");
                break;
            case '5':
                strcat(str_1,"...../");
                break;
            case '6':
                strcat(str_1,"-..../");
                break;
            case '7':
                strcat(str_1,"--.../");
                break;
            case '8':
                strcat(str_1,"---../");
                break;
            case '9':
                strcat(str_1,"----./");
                break;
            case '0':
                strcat(str_1,"-----/");
                break;
            case '?':
                strcat(str_1,"..--../");
                break;
            case '/':
                strcat(str_1,"-..-./");
                break;
            case '-':
                strcat(str_1,"-....-/");
                break;
            case '.':
                strcat(str_1,".-.-.-/");
                break;
            case '_':
                strcat(str_1,"..--.-/");
                break;
            case ':':
                strcat(str_1,"---.../");
                break;
            case ',':
                strcat(str_1,"--..--/");
                break;
            case ';':
                strcat(str_1,"-.-.-./");
                break;
            case '=':
                strcat(str_1,"-...-/");
                break;
            case '\'':
                strcat(str_1,".----./");
                break;
            case '!':
                strcat(str_1,"-.-.--/");
                break;
            case '\"':
                strcat(str_1,".-..-./");
                break;
            case '(':
                strcat(str_1,"-.--./");
                break;
            case ')':
                strcat(str_1,"-.--.-/");
                break;
            case '$':
                strcat(str_1,"...-..-/");
                break;
            case '&':
                strcat(str_1,".-.../");
                break;
            case '@':
                strcat(str_1,".--.-./");
                break;
            case '%':
                strcat(str_1,"-..-.-/");
                break;
            case '^':
                strcat(str_1,"-.----./");
                break;
            case '*':
                strcat(str_1,"-.-.-./");
                break;
            case '#':
                strcat(str_1,"-...--");
                break;
            case '+':
                strcat(str_1,".-.-./");
                break;
            case '[':
                strcat(str_1,"-.--.--/");
                break;
            case ']':
                strcat(str_1,"-.---.-/");
                break;
            case '{':
                strcat(str_1,"----.--/");
                break;
            case '}':
                strcat(str_1,"-----.-/");
                break;
            case '|':
                strcat(str_1,"-----../");
                break;
            case '\\':
                strcat(str_1,"-.---../");
                break;
            case '<':
                strcat(str_1,"----../");
                break;
            case '>':
                strcat(str_1,"-----./");
                break;
            case '~':
                strcat(str_1,"------./");
                break;
            case '`':
                strcat(str_1,"--...../");
                break;
            case ' ':
                strcat(str_1,"+/");
                break;

            default:
                strcat(str_1,"-./..-/.-../.-../");
            }
        }
    }
    strcat(str_1,"+/.-.-.");
    cout << str_1;
    a(str_1);
    return 0;
}
int a(char str[]) {
    for (int n = 0; n < strlen(str); n++)
    {
        switch (str[n])
        {
        case '.':
            PlaySound(L"short.wav", NULL, SND_FILENAME | SND_ASYNC);
            Sleep(250);
            break;
        case '-':
            PlaySound(L"long.wav", NULL, SND_FILENAME | SND_ASYNC);
            Sleep(250);
            break;
        case '/':
            Sleep(500);
            break; 
        case '+':
            Sleep(1250);
            break;
        default:
            cout << "";
        }
    }
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
