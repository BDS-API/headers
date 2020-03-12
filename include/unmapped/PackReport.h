#pragma once

#include "ResourceLocation.h"
#include <string>
#include "PackIdVersion.h"
#include "../json/Value.h"


class PackReport {

public:
    PackReport(PackReport const&);
    std::string serializeEventErrorMessages()const;
    void setIdentity(PackIdVersion const&);
    void getNumErrors()const;
    void getErrors()const;
    void setUpgraded(bool);
    std::string getOriginalVersion()const;
    void setOriginalIdentity(std::string const&, std::string const&);
    void deserialize(Json::Value const&);
    void setAttemptedUpgrade();
    bool hasWarnings()const;
    std::string getOriginalName()const;
    void setLocation(ResourceLocation const&);
    bool hasErrors()const;
    void clear();
    void getNumWarnings()const;
    void getIdentity()const;
    void getWarnings()const;
//  bool hasErrors(PackErrorType); //TODO: incomplete function definition
//  void setPackType(PackType); //TODO: incomplete function definition
    PackReport(PackReport &&);
    bool wasUpgraded()const;
    void getPackType()const;
    ~PackReport();
    void serialize(Json::Value &);
    void getLocation()const;
    void attemptedUpgrade()const;
    void merge(PackReport &&);
    PackReport();
    void setUpgradeSuccess();
};
