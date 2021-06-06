#include <iostream>
#include "FordFulkerson.h"
using namespace std;

int main()
{
    string filename;
    filename = "in.txt";
    FordFulkerson alg;
    alg.inputData(filename);
    int res = alg.MaxStream();
    cout << "Answer:" << res;
}
