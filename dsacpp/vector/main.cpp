#include "vector_test.h"

int main(){
    Vector<int> V;
    for(int i = 0; i < 10; i++) V.insert(i, i);
    for(int i = 0; i < 10; i++) cout<<V[i]<<endl;
    return 0;
}