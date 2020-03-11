#pragma once

#include "../../json/Value.h"
#include "./Description.h"
#include <string>


class Description {

public:
    static std::string NAME_TO_ID_MAP;
    static std::string ID_TO_NAME_MAP;

    virtual ~Description();
    virtual void deserializeData(Json::Value &);

    Description();
    Description(Description const&);
    void startParsing(Json::Value &, Json::Value &, char const*);
    void parseDescription(Json::Value &);
    void registerAttributes();
    void registerJsonName(std::string const&);
    void registerProperties();
    void registerTriggers();
    void registerComponents();
    std::string getName(int);
    void getId(std::string const&);
};
