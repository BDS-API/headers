#pragma once

class Json::Value {

public:

    void Value(Json::ValueType);
    void Value(unsigned int);
    void Value(int);
    void Value(long long);
    void Value(unsigned long long);
    void Value(double);
    void Value(char const*);
    void Value(char const*, char const*);
    void Value(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void Value(Json::StaticString const&);
    void Value(bool);
    void Value(Json::Value const&);
    void swap(Json::Value&);
    void type(void)const;
    void compare(Json::Value const&)const;
    void asCString(void)const;
    void asString(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void asInt(int)const;
    void asUInt(unsigned int)const;
    void asInt64(long long)const;
    void asUInt64(unsigned long long)const;
    void asLargestInt(void)const;
    void asLargestUInt(void)const;
    void asDouble(double)const;
    void asFloat(float)const;
    void asBool(bool)const;
    bool isConvertibleTo(Json::ValueType)const;
    void size(void)const;
    void empty(void)const;
    bool isNull(void)const;
    bool isArray(void)const;
    bool isObject(void)const;
    void clear(void);
    void resize(unsigned int);
    void resolveReference(char const*, bool);
    void get(unsigned int, Json::Value const&)const;
    bool isValidIndex(unsigned int)const;
    void append(Json::Value const&);
    void get(char const*, Json::Value const&)const;
    void get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&)const;
    void removeMember(char const*);
    void removeMember(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isMember(char const*)const;
    bool isMember(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    bool isBool(void)const;
    bool isInt(void)const;
    bool isUInt(void)const;
    bool isIntegral(void)const;
    bool isDouble(void)const;
    bool isNumeric(void)const;
    bool isString(void)const;
    void setComment(char const*, Json::CommentPlacement);
    void setComment(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::CommentPlacement);
    bool hasComment(Json::CommentPlacement)const;
    void begin(void)const;
    void end(void)const;
    void begin(void);
    void end(void);
};
