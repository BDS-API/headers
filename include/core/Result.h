#pragma once

#include <functional>
#include "./Result.h"
#include <string>


namespace Core {

class Result {

public:

    Result(bool, std::function<char const* (std::string *)>);
    Result(Core::Result &&);
    Result(Core::Result const&);
    void peekFailed()const;
    void peekSucceeded()const;
    void throwFailed()const;
    void _setHandled()const;
    void succeeded()const;
    void failed()const;
    void architecturalProblem()const;
    void succeededArchitecturalProblem()const;
    void failedArchitecturalProblem()const;
    void ignoreError()const;
    void catastrophic()const;
    void otherMechanism();
    void message(std::string *)const;
    void makeSuccess();
    void makeFailure();
    void makeFailure(std::string &&);
    void makeFailure(std::function<char const* (std::string *)> &&);
    void makeFailureWithStringLiteral(char const*);
    void makeFailureNotImplemented();
    ~Result();
    void merge(Core::Result &&, Core::Result &);
    void either(Core::Result &&, Core::Result &);
};

}