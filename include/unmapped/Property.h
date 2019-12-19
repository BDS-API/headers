#pragma once

using namespace JsonValidator;

class Property {

public:

    Property(JsonValidator::Property&&);
    Property(void);
    Property(JsonValidator::Property const&);
    void addType(Json::ValueType);
    void addConditionalProperty(Json::Value const&, JsonValidator::Property const&);
    void addConditionalProperty(Json::ValueType, JsonValidator::Property const&);
    void description(std::string const&);
    void required(void);
    void requireConditionalProperty(void);
    void addChildProperty(JsonValidator::Property const&);
};
