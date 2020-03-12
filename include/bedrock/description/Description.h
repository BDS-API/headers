#pragma once

#include "../../json/Value.h"
#include <string>


class Description {

public:
    static std::string NAME_TO_ID_MAP;
    static std::string ID_TO_NAME_MAP;

    ~Description();
    virtual void deserializeData(Json::Value &);
    Description();
    Description(Description const&);
    void startParsing(Json::Value &, Json::Value &, char const*);
    void registerJsonName(std::string const&);
    void registerAttributes();
    void registerProperties();
    void getId(std::string const&);
    void registerComponents();
    void parseDescription(Json::Value &);
    std::string getName(int);
    void registerTriggers();
};
