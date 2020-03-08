#pragma once



using namespace Json;

class Value {

public:

    Value(Json::ValueType);
    Value(unsigned int);
    Value(int);
    Value(long long);
    Value(unsigned long long);
    Value(double);
    Value(char const*);
    Value(char const*, char const*);
    Value(std::string const&);
    Value(Json::StaticString const&);
    Value(bool);
    Value(Json::Value const&);
    void swap(Json::Value&);
    void type()const;
    void compare(Json::Value const&)const;
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
    bool isConvertibleTo(Json::ValueType)const;
    void size()const;
    void empty()const;
    bool isNull()const;
    bool isArray()const;
    bool isObject()const;
    void clear();
    void resize(unsigned int);
    void resolveReference(char const*, bool);
    void get(unsigned int, Json::Value const&)const;
    bool isValidIndex(unsigned int)const;
    void append(Json::Value const&);
    void get(char const*, Json::Value const&)const;
    void get(std::string const&, Json::Value const&)const;
    void removeMember(char const*);
    void removeMember(std::string const&);
    bool isMember(char const*)const;
    bool isMember(std::string const&)const;
    bool isBool()const;
    bool isInt()const;
    bool isUInt()const;
    bool isIntegral()const;
    bool isDouble()const;
    bool isNumeric()const;
    bool isString()const;
    void setComment(char const*, Json::CommentPlacement);
    void setComment(std::string const&, Json::CommentPlacement);
    bool hasComment(Json::CommentPlacement)const;
    void begin()const;
    void end()const;
    void begin();
    void end();
};
