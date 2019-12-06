#pragma once

class Core::Result {

public:

    void Result(bool, std::function<char const* ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> *)>);
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
    void message(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> *)const;
    void makeSuccess(void);
    void makeFailure(void);
    void makeFailure(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &&);
    void makeFailure(std::function<char const* ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> *)> &&);
    void makeFailureWithStringLiteral(char const*);
    void makeFailureNotImplemented(void);
    void merge(Core::Result&&, Core::Result&);
    void either(Core::Result&&, Core::Result&);
};
