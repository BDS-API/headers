#pragma once



namespace Core {

    class StringSpan {

    public:
        void substr(unsigned long)const;
        void find(Core::StringSpan)const;
        void substr(unsigned long, unsigned long)const;
        void length()const;
        StringSpan(char const*, unsigned long);
        void find(char const*, unsigned long)const;
        void size()const;
        void find_last_of(char const*)const;
        void find_first_of(char const*)const;
        void data()const;
//      StringSpan(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
        void rfind(char)const;
    };
}
