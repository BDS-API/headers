#pragma once

#include "StaticString.h"
#include <string>


namespace Json {

    class Value {

    public:
        class CZString;

        bool isMember(char const*)const;
        void swap(Json::Value &);
        bool asInt64(long)const;
        void operator[](unsigned int)const;
        void resize(unsigned int);
        bool isMember(std::string const&)const;
        void operator[](std::string const&)const;
        bool isIntegral()const;
        Value(long);
        void type()const;
        void clear();
        std::string getMemberNames()const;
        bool isUInt()const;
        void operator<=(Json::Value const&)const;
//      void setComment(char const*, Json::CommentPlacement); //TODO: incomplete function definition
        bool asInt(int)const;
        bool asUInt64(unsigned long)const;
        void operator[](std::string const&);
        void get(char const*, Json::Value const&)const;
        Value(Json::Value const&);
        bool isNumeric()const;
//      bool isConvertibleTo(Json::ValueType)const; //TODO: incomplete function definition
        void size()const;
        Value(std::string const&);
        void removeMember(std::string const&);
        void removeMember(char const*);
        bool asLargestInt()const;
        void operator!=(Json::Value const&)const;
        Value(Json::StaticString const&);
        bool isObject()const;
        bool isDouble()const;
        void begin();
        void end();
        bool asLargestUInt()const;
        bool isArray()const;
        bool asFloat(float)const;
//      bool hasComment(Json::CommentPlacement)const; //TODO: incomplete function definition
//      Value(Json::ValueType); //TODO: incomplete function definition
        void operator<(Json::Value const&)const;
        void begin()const;
        Value(char const*, char const*);
        std::string toStyledString()const;
        ~Value();
        void operator[](int);
        Value(unsigned long);
        bool asDouble(double)const;
        void operator[](char const*);
        void operator>(Json::Value const&)const;
        void operator[](int)const;
        void compare(Json::Value const&)const;
        void operator[](unsigned int);
        void operator>=(Json::Value const&)const;
        bool isValidIndex(unsigned int)const;
        Value(int);
        void get(unsigned int, Json::Value const&)const;
        Value(char const*);
        Value(bool);
        bool isInt()const;
        bool asUInt(unsigned int)const;
        void empty()const;
        bool isNull()const;
//      std::string getComment(Json::CommentPlacement)const; //TODO: incomplete function definition
        void operator==(Json::Value const&)const;
        bool asBool(bool)const;
        Value(unsigned int);
        void get(std::string const&, Json::Value const&)const;
        bool asString(std::string const&)const;
        void resolveReference(char const*, bool);
        void append(Json::Value const&);
        bool isString()const;
        void end()const;
        void operator[](Json::StaticString const&);
        void operator[](char const*)const;
        bool asCString()const;
        bool isBool()const;
        Value(double);
//      void setComment(std::string const&, Json::CommentPlacement); //TODO: incomplete function definition
        class CZString {

        public:
            bool isStaticString()const;
            void c_str()const;
            CZString(unsigned int);
            void operator==(Json::Value::CZString const&)const;
            CZString(Json::Value::CZString const&);
            void swap(Json::Value::CZString &);
            void operator<(Json::Value::CZString const&)const;
            ~CZString();
//          CZString(char const*, Json::Value::CZString::DuplicationPolicy); //TODO: incomplete function definition
            void index()const;
        };
    };
}
