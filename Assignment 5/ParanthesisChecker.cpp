#include <iostream>
#include <string>
using namespace std;

class Stack {
    char arr[100];
    int top;
public:
    Stack() { top = -1; }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(char c) {
        if (!isFull())
            arr[++top] = c;
    }

    char pop() {
        if (!isEmpty())
            return arr[top--];
        return '\0';
    }

    char peek() {
        if (!isEmpty())
            return arr[top];
        return '\0';
    }
};

bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

bool isBalanced(string exp) {
    Stack s;
    for (char c : exp) {
        if (c == '(' || c == '{' || c == '[')
            s.push(c);
        else if (c == ')' || c == '}' || c == ']') {
            if (s.isEmpty() || !isMatching(s.pop(), c))
                return false;
        }
    }
    return s.isEmpty();
}

int main() {
    string expression;
    cout << "Enter expression: ";
    cin >> expression;

    if (isBalanced(expression))
        cout << "Expression is Balanced";
    else
        cout << "Expression is Not Balanced";

    return 0;
}
