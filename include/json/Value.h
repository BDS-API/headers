#pragma once

#include "./Value.h"
#include "./StaticString.h"
#include <string>


namespace Json {

class Value {

public:

//  Value(Json::ValueType); //TODO: incomplete function definition
    Value(unsigned int);
    Value(int);
    Value(long);
    Value(unsigned long);
    Value(double);
    Value(char const*);
    Value(char const*, char const*);
    Value(std::string const&);
    Value(Json::StaticString const&);
    Value(bool);
    Value(Json::Value const&);
    ~Value();
    void swap(Json::Value &);
    void type()const;
    void compare(Json::Value const&)const;
    void operator<(Json::Value const&)const;
    void operator>(Json::Value const&)const;
    void operator<=(Json::Value const&)const;
    void operator>=(Json::Value const&)const;
    void operator==(Json::Value const&)const;
    void operator!=(Json::Value const&)const;
    bool asCString()const;
    bool asString(std::string const&)const;
    bool asInt(int)const;
    bool asUInt(unsigned int)const;
    bool asInt64(long)const;
    bool asUInt64(unsigned long)const;
    bool asLargestInt()const;
    bool asLargestUInt()const;
    bool asDouble(double)const;
    bool asFloat(float)const;
    bool asBool(bool)const;
//  bool isConvertibleTo(Json::ValueType)const; //TODO: incomplete function definition
    void size()const;
    void empty()const;
    bool isNull()const;
    bool isArray()const;
    bool isObject()const;
    void clear();
    void resize(unsigned int);
    void operator[](unsigned int);
    void operator[](int);
    void operator[](unsigned int)const;
    void operator[](int)const;
    void operator[](char const*);
    void resolveReference(char const*, bool);
    void get(unsigned int, Json::Value const&)const;
    bool isValidIndex(unsigned int)const;
    void operator[](char const*)const;
    void operator[](std::string const&);
    void operator[](std::string const&)const;
    void operator[](Json::StaticString const&);
    void append(Json::Value const&);
    void get(char const*, Json::Value const&)const;
    void get(std::string const&, Json::Value const&)const;
    void removeMember(char const*);
    void removeMember(std::string const&);
    bool isMember(char const*)const;
    bool isMember(std::string const&)const;
    std::string getMemberNames()const;
    bool isBool()const;
    bool isInt()const;
    bool isUInt()const;
    bool isIntegral()const;
    bool isDouble()const;
    bool isNumeric()const;
    bool isString()const;
//  void setComment(char const*, Json::CommentPlacement); //TODO: incomplete function definition
//  void setComment(std::string const&, Json::CommentPlacement); //TODO: incomplete function definition
//  bool hasComment(Json::CommentPlacement)const; //TODO: incomplete function definition
//  std::string getComment(Json::CommentPlacement)const; //TODO: incomplete function definition
    std::string toStyledString()const;
    void begin()const;
    void end()const;
    void begin();
    void end();
};

}