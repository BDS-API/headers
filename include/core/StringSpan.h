#pragma once



namespace Core {

    class StringSpan {

    public:
//      StringSpan(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Core10StringSpanC2EN3gsl17basic_string_spanIKcLln1EEE
        void size()const; // _ZNK4Core10StringSpan4sizeEv
        StringSpan(char const*, unsigned long); // _ZN4Core10StringSpanC2EPKcm
        void find(Core::StringSpan)const; // _ZNK4Core10StringSpan4findES0_
        void find(char const*, unsigned long)const; // _ZNK4Core10StringSpan4findEPKcm
        void rfind(char)const; // _ZNK4Core10StringSpan5rfindEc
        void find_last_of(char const*)const; // _ZNK4Core10StringSpan12find_last_ofEPKc
        void find_first_of(char const*)const; // _ZNK4Core10StringSpan13find_first_ofEPKc
        void substr(unsigned long)const; // _ZNK4Core10StringSpan6substrEm
        void substr(unsigned long, unsigned long)const; // _ZNK4Core10StringSpan6substrEmm
        void data()const; // _ZNK4Core10StringSpan4dataEv
        void length()const; // _ZNK4Core10StringSpan6lengthEv
    };
}
