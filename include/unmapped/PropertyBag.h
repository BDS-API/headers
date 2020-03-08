#pragma once

#include "../json/Value"


class PropertyBag {

public:
    static long EMPTY;


    PropertyBag(void);
    PropertyBag(Json::Value const&);
    PropertyBag(std::string const&);
    void clone()const;
    void set(gsl::basic_string_span<char const, -1l>, buffer_span<bool>);
    void set(gsl::basic_string_span<char const, -1l>, std::vector<bool, std::allocator<bool>> const&);
    void set(gsl::basic_string_span<char const, -1l>, buffer_span<int>);
    void set(gsl::basic_string_span<char const, -1l>, buffer_span<std::string>);
    void set(gsl::basic_string_span<char const, -1l>, std::vector<Json::Value, std::allocator<Json::Value>> const&);
    bool has(gsl::basic_string_span<char const, -1l>)const;
    void memberCount()const;
    void toJsonValue()const;
    void getChangeVersion()const;
    void setChangeVersion(int);
    void _value(gsl::basic_string_span<char const, -1l>);
    void _value(gsl::basic_string_span<char const, -1l>)const;
};
