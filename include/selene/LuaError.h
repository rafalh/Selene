#pragma once

#include <string>
#include <exception>

namespace sel {
class LuaError : public std::exception {
private:
    int _code;
    std::string _reason;

public:
    LuaError(int code, const std::string &reason) : _code(code), _reason(reason) {}
    
    virtual const char* what() const throw() { return _reason.c_str(); }
    int GetCode() const { return _code; }
};
}
