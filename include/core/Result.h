#pragma once

#include <functional>
#include <string>


namespace Core {

    class Result {

    public:
        Result(bool, std::function<char const* (std::string *)>); // _ZN4Core6ResultC2EbSt8functionIFPKcPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
        Result(Core::Result &&); // _ZN4Core6ResultC2EOS0_
        Result(Core::Result const&); // _ZN4Core6ResultC2ERKS0_
        void peekFailed()const; // _ZNK4Core6Result10peekFailedEv
        void peekSucceeded()const; // _ZNK4Core6Result13peekSucceededEv
        void throwFailed()const; // _ZNK4Core6Result11throwFailedEv
        void _setHandled()const; // _ZNK4Core6Result11_setHandledEv
        void succeeded()const; // _ZNK4Core6Result9succeededEv
        void failed()const; // _ZNK4Core6Result6failedEv
        void architecturalProblem()const; // _ZNK4Core6Result20architecturalProblemEv
        void succeededArchitecturalProblem()const; // _ZNK4Core6Result29succeededArchitecturalProblemEv
        void failedArchitecturalProblem()const; // _ZNK4Core6Result26failedArchitecturalProblemEv
        void ignoreError()const; // _ZNK4Core6Result11ignoreErrorEv
        void catastrophic()const; // _ZNK4Core6Result12catastrophicEv
        void otherMechanism(); // _ZN4Core6Result14otherMechanismEv
        void message(std::string *)const; // _ZNK4Core6Result7messageEPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void makeSuccess(); // _ZN4Core6Result11makeSuccessEv
        void makeFailure(); // _ZN4Core6Result11makeFailureEv
        void makeFailure(std::string &&); // _ZN4Core6Result11makeFailureEONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void makeFailure(std::function<char const* (std::string *)> &&); // _ZN4Core6Result11makeFailureEOSt8functionIFPKcPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
        void makeFailureWithStringLiteral(char const*); // _ZN4Core6Result28makeFailureWithStringLiteralEPKc
        void makeFailureNotImplemented(); // _ZN4Core6Result25makeFailureNotImplementedEv
        ~Result(); // _ZN4Core6ResultD2Ev
        void merge(Core::Result &&, Core::Result &); // _ZN4Core6Result5mergeEOS0_S1_
        void either(Core::Result &&, Core::Result &); // _ZN4Core6Result6eitherEOS0_S1_
    };
}
