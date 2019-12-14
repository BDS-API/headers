#pragma once

class Description {

public:
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
