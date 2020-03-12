#pragma once



namespace Core {

    class StringSpan {

    public:
        void find(Core::StringSpan)const;
        void find_last_of(char const*)const;
        void substr(unsigned long, unsigned long)const;
        void size()const;
        void rfind(char)const;
        void find(char const*, unsigned long)const;
        void substr(unsigned long)const;
//      StringSpan(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
        void length()const;
        void find_first_of(char const*)const;
        void data()const;
        StringSpan(char const*, unsigned long);
    };
}
