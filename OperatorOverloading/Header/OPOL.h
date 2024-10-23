#pragma once
#include <string>

class String {
private:
    std::string data;
public:
    String(const std::string& str) : data(str) {}
    String operator+(const String& other) const {
        return String(data + other.data + data + other.data);
    }
    std::string getData() const {
        return data;
    }
};

