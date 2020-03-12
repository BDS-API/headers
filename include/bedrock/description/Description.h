#pragma once

#include <string>


class Description {

public:
    static std::string NAME_TO_ID_MAP;
    static std::string ID_TO_NAME_MAP;

    virtual void deserializeData(Json::Value &);
    ~Description();
    void registerProperties();
    void getId(std::string const&);
    Description(Description const&);
    void startParsing(Json::Value &, Json::Value &, char const*);
    void registerComponents();
    void registerJsonName(std::string const&);
    void registerTriggers();
    Description();
    std::string getName(int);
    void parseDescription(Json::Value &);
    void registerAttributes();
};
