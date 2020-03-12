#pragma once



namespace Json {

    class StaticString {

    public:
        void c_str()const;
        StaticString(char const*);
    };
}
