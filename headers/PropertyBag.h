#pragma once

class PropertyBag {

public:
    static long EMPTY;


    void PropertyBag(void);
    void PropertyBag(Json::Value const&);
    void PropertyBag(std::string const&);
    void clone(void)const;
    void set(gsl::basic_string_span<char const, -1l>, buffer_span<bool>);
    void set(gsl::basic_string_span<char const, -1l>, std::vector<bool, std::allocator<bool>> const&);
    void set(gsl::basic_string_span<char const, -1l>, buffer_span<int>);
    void set(gsl::basic_string_span<char const, -1l>, buffer_span<std::string>);
    void set(gsl::basic_string_span<char const, -1l>, std::vector<Json::Value, std::allocator<Json::Value>> const&);
    void has(gsl::basic_string_span<char const, -1l>)const;
    void memberCount(void)const;
    void toJsonValue(void)const;
    void getChangeVersion(void)const;
    void setChangeVersion(int);
    void _value(gsl::basic_string_span<char const, -1l>);
    void _value(gsl::basic_string_span<char const, -1l>)const;
};
