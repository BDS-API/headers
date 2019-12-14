#pragma once

class Core::Result {

public:

    void Result(bool, std::function<char const* ()(std::string *)>);
    void Result(Core::Result&&);
    void Result(Core::Result const&);
    void peekFailed(void)const;
    void peekSucceeded(void)const;
    void throwFailed(void)const;
    void _setHandled(void)const;
    void succeeded(void)const;
    void failed(void)const;
    void architecturalProblem(void)const;
    void succeededArchitecturalProblem(void)const;
    void failedArchitecturalProblem(void)const;
    void ignoreError(void)const;
    void catastrophic(void)const;
    void otherMechanism(void);
    void message(std::string *)const;
    void makeSuccess(void);
    void makeFailure(void);
    void makeFailure(std::string &&);
    void makeFailure(std::function<char const* ()(std::string *)> &&);
    void makeFailureWithStringLiteral(char const*);
    void makeFailureNotImplemented(void);
    void merge(Core::Result&&, Core::Result&);
    void either(Core::Result&&, Core::Result&);
};
