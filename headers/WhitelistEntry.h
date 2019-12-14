#pragma once

class WhitelistEntry : IJsonSerializable {

public:
    virtual ~WhitelistEntry();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);

    void WhitelistEntry(WhitelistEntry const&);
    void WhitelistEntry(WhitelistEntry&&);
    void WhitelistEntry(Json::Value &);
    void WhitelistEntry(std::string, mce::UUID, std::string, bool);
    void WhitelistEntry(std::string);
};
