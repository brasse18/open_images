#include <iostream>
#include <sys/stat.h>
#include <string>

using namespace std;

bool is_dir(const char* path);
string replace_space(string str);

int main(int argc, char* argv[]) {
    string cmd = "gwenview";
    for (int i = 1; i < argc ; ++i) {
        string temp = argv[i];
        if (is_dir(argv[i]))
        {
            temp = replace_space(temp);
            cmd += " ";
            cmd += temp;
            cmd += "/*";
        } else
        {
            temp = replace_space(temp);
            cmd += " ";
            cmd += temp;
        }
    }
    system(cmd.c_str());
    return 0;
}



bool is_file(const char* path) {
    struct stat buf;
    stat(path, &buf);
    return S_ISREG(buf.st_mode);
}

bool is_dir(const char* path) {
    struct stat buf;
    stat(path, &buf);
    return S_ISDIR(buf.st_mode);
}

string replace_space(string str)
{
    string rep = "\\";
    for (int i = 0; i < str.length(); ++i) {
        if(str[i] == ' ')
        {
            str.insert(i,rep);
            i++;
        }
    }
    return str;
}
