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
    void type(void)const;
    void compare(Json::Value const&)const;
    bool asCString(void)const;
    bool asString(std::string const&)const;
    bool asInt(int)const;
    bool asUInt(unsigned int)const;
    bool asInt64(long long)const;
    bool asUInt64(unsigned long long)const;
    bool asLargestInt(void)const;
    bool asLargestUInt(void)const;
    bool asDouble(double)const;
    bool asFloat(float)const;
    bool asBool(bool)const;
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
    void get(std::string const&, Json::Value const&)const;
    void removeMember(char const*);
    void removeMember(std::string const&);
    bool isMember(char const*)const;
    bool isMember(std::string const&)const;
    bool isBool(void)const;
    bool isInt(void)const;
    bool isUInt(void)const;
    bool isIntegral(void)const;
    bool isDouble(void)const;
    bool isNumeric(void)const;
    bool isString(void)const;
    void setComment(char const*, Json::CommentPlacement);
    void setComment(std::string const&, Json::CommentPlacement);
    bool hasComment(Json::CommentPlacement)const;
    void begin(void)const;
    void end(void)const;
    void begin(void);
    void end(void);
};
