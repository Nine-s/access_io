/* Opening & closing files Example: InfoBrother:*/
 
#include<iostream>//Required for input & output: 
#include<fstream>//Required for File function:
#include<unistd.h>

using namespace std;
 
void readSeq(int lineToRead) 
{
	ifstream in("/home/ninon/Documents/access_io/data/test_1.fq");
    int linenb = 0;
    string line = "";
    while ( getline( in , line ) ) {
        if ( linenb == lineToRead ){
            cout << "\n";
            cout << linenb;
            cout << "\n";
            cout << line;
            break;
        }
        //cout << " ";
        //cout << linenb;
        linenb++ ;
    }
}

int main()
{
    readSeq(5);
    readSeq(1000);

    return 0;
}


