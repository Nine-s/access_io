#include<fstream>//required for file operation:
#include<iostream>//required for input/output:
using namespace std;

//https://stackoverflow.com/questions/6514774/c-reading-random-lines-of-txt

void readRand(int lineToRead){
    ifstream in("/home/ninon/Documents/access_io/data/test_1.fq");

    string line = "";
    srand(time(NULL));
    //int lineToRead = (rand() % 1000) ;
    cout << lineToRead;
    cout << "\n";
    in.seekg(lineToRead);
    in>>line;
    cout<<line;
    cout << "\n";

}

int main() {

    readRand(5);
    readRand(1000);    
    


    // ifstream in1("/home/ninon/Documents/access_io/data/test_1.fq");

    // linenb = (1000) ;
    // cout << linenb;
    // cout << "\n";
    // in1.seekg(linenb);
    // in1>>line;
    // cout<<line;

    // cout << "\n";


    // ifstream in2("/home/ninon/Documents/access_io/data/test_1.fq");

    // linenb = (5) ;
    // cout << linenb;
    // cout << "\n";
    // in2.seekg(linenb);
    // in2>>line;
    // cout<<line;
    // in2>>line;
    // cout<<line;

}