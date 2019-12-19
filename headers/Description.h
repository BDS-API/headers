#pragma once

class Description {

public:
    static long NAME_TO_ID_MAP[abi:cxx11];
    static long ID_TO_NAME_MAP[abi:cxx11];

    virtual ~Description();
    virtual void deserializeData(Json::Value &);

    void Description(void);
    void Description(Description const&);
    void startParsing(Json::Value &, Json::Value &, char const*);
    void parseDescription(Json::Value &);
    void registerAttributes(void);
    void registerJsonName(std::string const&);
    void registerProperties(void);
    void registerTriggers(void);
    void registerComponents(void);
    void getId(std::string const&);
};
