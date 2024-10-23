#pragma once
#include <iostream>
#include <stdexcept>

using namespace std;

auto operation = [](int a, int b, string op) -> double {
    if (op == "-") {
        return a - b;
    }
    else if (op == "+") {
        return a + b;
    }
    else if (op == "*") {
        return a * b;
    }
    else if (op == "/") {
        if (b == 0) {
            throw invalid_argument("Division by zero is not allowed.");
        }
        return static_cast<double>(a) / b;
    }
    else {
        throw invalid_argument("Unsupported operation: " + op);
    }
    };
