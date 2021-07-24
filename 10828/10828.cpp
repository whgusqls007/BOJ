#include <bits/stdc++.h>

using namespace std;

int N;

class Stack {
  private:
    int *stack;
    int capacity;
    int size;
    int pointer;

  public:
    Stack(int _capacity) {
        stack = new int[_capacity + 3];
        size  = 0;
    }
    int getSize() { return size; }
    int isEmpty() { return size > 0 ? 0 : 1; }
    void push(int arg) {
        stack[size] = arg;
        size++;
    }
    int pop() {
        if (size == 0) {
            return -1;
        }
        int returnArg = stack[size - 1];
        size--;
        return returnArg;
    }
    int top() { return size == 0 ? -1 : stack[size - 1]; }
    ~Stack() { delete[] stack; }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> N;
    Stack S(N);
    string keyword;
    for (int i = 0; i < N; i++) {
        keyword.clear();
        cin >> keyword;
        if (keyword == "push") {
            int arg;
            cin >> arg;
            S.push(arg);
        } else if (keyword == "pop") {
            cout << S.pop() << "\n";
        } else if (keyword == "empty") {
            cout << S.isEmpty() << "\n";
        } else if (keyword == "top") {
            cout << S.top() << "\n";
        } else {
            cout << S.getSize() << "\n";
        }
    }
    return 0;
}