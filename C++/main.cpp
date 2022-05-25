#include "swap.h"
using namespace std;

int main(int argc, char const *argv[]){
    swap2 s(1, 2);
    s.print_value();
    s.swap_value();
    s.print_value();
    return 0;
}