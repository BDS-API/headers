#pragma once

#include "../../mce/UUID.h"
#include "../../unmapped/WhitelistEntry.h"
#include "../../unmapped/IJsonSerializable.h"
#include "../../json/Value.h"
#include <functional>
#include <string>


class Whitelist : IJsonSerializable {

public:
    virtual ~Whitelist();
    virtual void serialize(Json::Value &);
    virtual void deserialize(Json::Value &);

//  Whitelist(std::function<void (void)>); //TODO: incomplete function definition
    bool isAllowed(mce::UUID const&, std::string const&)const;
    bool isIgnoringPlayerLimit(mce::UUID const&, std::string const&)const;
    void clear();
    void getEntries()const;
    void addEntry(WhitelistEntry const&);
    void removeByName(std::string const&);
    void tryUpdateEntries(mce::UUID const&, std::string const&, std::string const&);
};
