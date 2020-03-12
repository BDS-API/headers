#pragma once

#include <string>
#include <functional>


namespace Core {

    class Result {

    public:
        void merge(Core::Result &&, Core::Result &);
        void makeFailureWithStringLiteral(char const*);
        void succeededArchitecturalProblem()const;
        void catastrophic()const;
        ~Result();
        void makeSuccess();
        void otherMechanism();
        Result(Core::Result &&);
        Result(Core::Result const&);
        void makeFailure(std::function<char const* (std::string *)> &&);
        void message(std::string *)const;
        void _setHandled()const;
        void peekFailed()const;
        void ignoreError()const;
        void either(Core::Result &&, Core::Result &);
        void architecturalProblem()const;
        void succeeded()const;
        void makeFailure();
        void failedArchitecturalProblem()const;
        void makeFailureNotImplemented();
        void failed()const;
        void makeFailure(std::string &&);
        void peekSucceeded()const;
        Result(bool, std::function<char const* (std::string *)>);
        void throwFailed()const;
    };
}
