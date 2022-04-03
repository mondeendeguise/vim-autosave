#include <fstream>

using namespace std;

int main()
{
    ifstream vim_in;
    vim_in.open(".vim/vimrc", ios::in);

    ofstream vim_out;
    vim_out.open("autosave/vimrc", ios::trunc);

    string line;
    while ( getline (vim_in,line) ) {
        vim_out << line << endl;
    }
    
    vim_in.close();
    vim_out.close();

    return 0;
}