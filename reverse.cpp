#include <iostream>
using namespace std;
int stack[1000];
int count = 0;
void push(int a) {
    stack[count] = a;
    count++;
}
int pop() {
    int a = stack[count - 1];
    count--;
    return a;
}
void function(int n) {
    if (n != 0) {
        push(n % 2);
        n = n / 2;
        function(n);
    }
}
void print(int n) {
    function(n);
    while (count != 0) {
        cout << pop();
    }
}
main() {
    print(100);
}