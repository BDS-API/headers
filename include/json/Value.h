#pragma once

#include <string>


namespace Json {

    class Value {

    public:
        class CZString;

        ~Value();
        void resize(unsigned int);
        void operator!=(Json::Value const&)const;
        Value(double);
        void operator[](int);
        bool isMember(std::string const&)const;
//      void setComment(std::string const&, Json::CommentPlacement); //TODO: incomplete function definition
//      Value(Json::ValueType); //TODO: incomplete function definition
        bool asFloat(float)const;
        void operator[](int)const;
        void begin();
        Value(long);
        void size()const;
        void get(char const*, Json::Value const&)const;
        void operator[](char const*);
        Value(int);
        bool asCString()const;
        bool asBool(bool)const;
        bool asString(std::string const&)const;
        Value(unsigned long);
        bool asInt64(long)const;
        bool isValidIndex(unsigned int)const;
        void swap(Json::Value &);
        Value(Json::Value const&);
        void get(std::string const&, Json::Value const&)const;
        bool asUInt(unsigned int)const;
        void clear();
        void operator[](unsigned int)const;
        void compare(Json::Value const&)const;
        void end()const;
        void get(unsigned int, Json::Value const&)const;
        void operator[](std::string const&);
        void operator[](unsigned int);
        bool isBool()const;
        Value(bool);
        void operator[](std::string const&)const;
        Value(unsigned int);
        std::string getMemberNames()const;
        void resolveReference(char const*, bool);
        void operator[](Json::StaticString const&);
        Value(char const*);
        void type()const;
//      void setComment(char const*, Json::CommentPlacement); //TODO: incomplete function definition
        bool isUInt()const;
        void operator[](char const*)const;
        bool isDouble()const;
        std::string toStyledString()const;
//      bool isConvertibleTo(Json::ValueType)const; //TODO: incomplete function definition
        bool isIntegral()const;
        bool asLargestInt()const;
        bool asUInt64(unsigned long)const;
        bool isInt()const;
        Value(char const*, char const*);
        void operator>=(Json::Value const&)const;
        void removeMember(char const*);
        bool isNull()const;
//      std::string getComment(Json::CommentPlacement)const; //TODO: incomplete function definition
        bool isArray()const;
        void begin()const;
        bool isNumeric()const;
        void append(Json::Value const&);
        void operator<=(Json::Value const&)const;
        void operator<(Json::Value const&)const;
        void empty()const;
        void end();
//      bool hasComment(Json::CommentPlacement)const; //TODO: incomplete function definition
        bool asDouble(double)const;
        bool asInt(int)const;
        void operator>(Json::Value const&)const;
        bool isMember(char const*)const;
        bool asLargestUInt()const;
        Value(Json::StaticString const&);
        bool isString()const;
        Value(std::string const&);
        void operator==(Json::Value const&)const;
        void removeMember(std::string const&);
        bool isObject()const;
        class CZString {

        public:
            void operator==(Json::Value::CZString const&)const;
            CZString(unsigned int);
            void index()const;
//          CZString(char const*, Json::Value::CZString::DuplicationPolicy); //TODO: incomplete function definition
            ~CZString();
            void c_str()const;
            CZString(Json::Value::CZString const&);
            bool isStaticString()const;
            void swap(Json::Value::CZString &);
            void operator<(Json::Value::CZString const&)const;
        };
    };
}
