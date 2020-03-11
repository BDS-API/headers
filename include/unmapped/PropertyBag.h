#pragma once

#include <memory>
#include <string>
#include <vector>
#include "../json/Value.h"


class PropertyBag {

public:
    static long EMPTY;


    ~PropertyBag();
    PropertyBag();
    PropertyBag(Json::Value const&);
    PropertyBag(std::string const&);
    void clone()const;
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<bool>); //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, std::vector<bool, std::allocator<bool>> const&); //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<int>); //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, buffer_span<std::string>); //TODO: incomplete function definition
//  void set(gsl::basic_string_span<char const, -1l>, std::vector<Json::Value, std::allocator<Json::Value>> const&); //TODO: incomplete function definition
//  bool has(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void memberCount()const;
    std::string toString()const;
    void toJsonValue()const;
    void getChangeVersion()const;
    void setChangeVersion(int);
//  void _value(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  void _value(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
};
