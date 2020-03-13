#pragma once

#include <string>


namespace Core {

    class PathPart {

    public:
        ~PathPart(); // _ZN4Core8PathPartD2Ev
        PathPart(char const*, unsigned long); // _ZN4Core8PathPartC2EPKcm
//      PathPart(gsl::not_null<char const*>, unsigned long); //TODO: incomplete function definition // _ZN4Core8PathPartC2EN3gsl8not_nullIPKcEEm
        PathPart(Core::Path const&); // _ZN4Core8PathPartC2ERKNS_4PathE
        void size()const; // _ZNK4Core8PathPart4sizeEv
        void getUtf8CString()const; // _ZNK4Core8PathPart14getUtf8CStringEv
        std::string getUtf8StdString()const; // _ZNK4Core8PathPart16getUtf8StdStringB5cxx11Ev
        PathPart(Core::PathPart const&); // _ZN4Core8PathPartC2ERKS0_
        PathPart(); // _ZN4Core8PathPartC2Ev
        PathPart(std::string &&); // _ZN4Core8PathPartC2EONSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        PathPart(char const*); // _ZN4Core8PathPartC2EPKc
//      PathPart(gsl::not_null<char const*>); //TODO: incomplete function definition // _ZN4Core8PathPartC2EN3gsl8not_nullIPKcEE
        PathPart(std::string const&); // _ZN4Core8PathPartC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        void empty()const; // _ZNK4Core8PathPart5emptyEv
        PathPart(Core::PathPart &&); // _ZN4Core8PathPartC2EOS0_
        void operator==(Core::PathPart const&)const; // _ZNK4Core8PathParteqERKS0_
        void operator!=(Core::PathPart const&)const; // _ZNK4Core8PathPartneERKS0_
    };
}
