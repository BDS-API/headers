#pragma once

#include "../json/Value.h"
#include "./PackIdVersion.h"
#include "./ResourceLocation.h"
#include "./PackReport.h"
#include <string>


class PackReport {

public:

    ~PackReport();
    PackReport();
    void merge(PackReport &&);
    bool wasUpgraded()const;
    void attemptedUpgrade()const;
    bool hasErrors()const;
//  bool hasErrors(PackErrorType); //TODO: incomplete function definition
    bool hasWarnings()const;
    void setUpgraded(bool);
    void getLocation()const;
    void setLocation(ResourceLocation const&);
    void getErrors()const;
    void getWarnings()const;
    void getNumErrors()const;
    void getNumWarnings()const;
    void setUpgradeSuccess();
    void setAttemptedUpgrade();
    void getIdentity()const;
    void setIdentity(PackIdVersion const&);
    void setOriginalIdentity(std::string const&, std::string const&);
    std::string getOriginalName()const;
    std::string getOriginalVersion()const;
    void getPackType()const;
//  void setPackType(PackType); //TODO: incomplete function definition
    std::string serializeEventErrorMessages()const;
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void clear();
    PackReport(PackReport const&);
    PackReport(PackReport &&);
};
