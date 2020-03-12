#pragma once

#include <string>
#include <vector>


class PropertyBag {

public:
    static long EMPTY;

//  void _value(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void setChangeVersion(int);
    PropertyBag();
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<std::string>); //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, std::vector<Json::Value> const&); //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<int>); //TODO: incomplete function definition
//  bool has(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    PropertyBag(std::string const&);
    void getChangeVersion()const;
    void clone()const;
    void memberCount()const;
//  void set(gsl::basic_string_span<char const, -1l>, std::vector<bool> const&); //TODO: incomplete function definition
    std::string toString()const;
    PropertyBag(Json::Value const&);
//  void _value(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    ~PropertyBag();
    void toJsonValue()const;
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<bool>); //TODO: incomplete function definition
};
