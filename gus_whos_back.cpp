#include <iostream>
using namespace std;

void kgtnem(int a, int e, int u) {
    int maxavat=max(max(a, e), u);
    int miniven=min(min(a, e), u);
    

    cout<<"poqrot="<<miniven<<", metsot="<<maxavat<<endl;
}
int main(int argc, char* argv[]) {
    if(argc != 4) {
        return 1;
    }
    int a=atoi(argv[1]);
    int e=atoi(argv[2]);
    int u=atoi(argv[3]);
    kgtnem(a, e, u);
    return 0;
}
