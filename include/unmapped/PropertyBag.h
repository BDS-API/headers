#pragma once

#include <vector>
#include <string>
#include "../json/Value.h"


class PropertyBag {

public:
    static long EMPTY;

    PropertyBag(std::string const&);
//  void _value(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<int>); //TODO: incomplete function definition
//  void _value(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void toJsonValue()const;
//  bool has(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<bool>); //TODO: incomplete function definition
    PropertyBag();
    void memberCount()const;
    void clone()const;
    PropertyBag(Json::Value const&);
    ~PropertyBag();
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<std::string>); //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, std::vector<Json::Value> const&); //TODO: incomplete function definition
    std::string toString()const;
    void getChangeVersion()const;
//  void set(gsl::basic_string_span<char const, -1l>, std::vector<bool> const&); //TODO: incomplete function definition
    void setChangeVersion(int);
};
