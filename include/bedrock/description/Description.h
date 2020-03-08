#pragma once

#include "../../json/Value"


class Description {

public:
    static long NAME_TO_ID_MAP[abi:cxx11];
    static long ID_TO_NAME_MAP[abi:cxx11];

    virtual Description::~Description()
    virtual void deserializeData(Json::Value &);

    Description(void);
    Description(Description const&);
    void startParsing(Json::Value &, Json::Value &, char const*);
    void parseDescription(Json::Value &);
    void registerAttributes();
    void registerJsonName(std::string const&);
    void registerProperties();
    void registerTriggers();
    void registerComponents();
    void getId(std::string const&);
};
