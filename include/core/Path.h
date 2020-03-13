#pragma once

#include <string>


namespace Core {

    class Path {

    public:
        ~Path(); // _ZN4Core4PathD2Ev
        std::string getUtf8StdString()const; // _ZNK4Core4Path16getUtf8StdStringB5cxx11Ev
        void getUtf8StringSpan()const; // _ZNK4Core4Path17getUtf8StringSpanEv
        Path(); // _ZN4Core4PathC2Ev
        Path(std::string &&); // _ZN4Core4PathC2EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void getUtf8CString()const; // _ZNK4Core4Path14getUtf8CStringEv
        void size()const; // _ZNK4Core4Path4sizeEv
        Path(Core::Path const&); // _ZN4Core4PathC2ERKS0_
        void empty()const; // _ZNK4Core4Path5emptyEv
        Path(std::string const&); // _ZN4Core4PathC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        Path(char const*); // _ZN4Core4PathC2EPKc
        Path(Core::Path &&); // _ZN4Core4PathC2EOS0_
        void operator!=(Core::Path const&)const; // _ZNK4Core4PathneERKS0_
        void operator==(Core::Path const&)const; // _ZNK4Core4PatheqERKS0_
        bool isDotOrDotDot()const; // _ZNK4Core4Path13isDotOrDotDotEv
    };
}
