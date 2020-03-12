#pragma once

#include <functional>
#include <string>


namespace Core {

    class Result {

    public:
        void peekFailed()const;
        void merge(Core::Result &&, Core::Result &);
        void ignoreError()const;
        void succeeded()const;
        void either(Core::Result &&, Core::Result &);
        void makeFailure(std::string &&);
        void makeFailureNotImplemented();
        void message(std::string *)const;
        void peekSucceeded()const;
        Result(bool, std::function<char const* (std::string *)>);
        void failed()const;
        void otherMechanism();
        void makeFailure(std::function<char const* (std::string *)> &&);
        void throwFailed()const;
        void makeFailureWithStringLiteral(char const*);
        void catastrophic()const;
        void makeSuccess();
        ~Result();
        void succeededArchitecturalProblem()const;
        void failedArchitecturalProblem()const;
        Result(Core::Result &&);
        void makeFailure();
        void _setHandled()const;
        void architecturalProblem()const;
        Result(Core::Result const&);
    };
}
