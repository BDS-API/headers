#pragma once

#include <string>


class PackReport {

public:
    void merge(PackReport &&);
    void getIdentity()const;
    void getLocation()const;
    void setLocation(ResourceLocation const&);
    PackReport();
    bool hasErrors()const;
    void clear();
//  bool hasErrors(PackErrorType); //TODO: incomplete function definition
    void setAttemptedUpgrade();
    void setIdentity(PackIdVersion const&);
    bool hasWarnings()const;
    void setUpgraded(bool);
    bool wasUpgraded()const;
    void setUpgradeSuccess();
    void getWarnings()const;
    std::string getOriginalName()const;
//  void setPackType(PackType); //TODO: incomplete function definition
    std::string serializeEventErrorMessages()const;
    void getPackType()const;
    PackReport(PackReport &&);
    ~PackReport();
    std::string getOriginalVersion()const;
    void getErrors()const;
    PackReport(PackReport const&);
    void setOriginalIdentity(std::string const&, std::string const&);
    void serialize(Json::Value &);
    void attemptedUpgrade()const;
    void deserialize(Json::Value const&);
    void getNumWarnings()const;
    void getNumErrors()const;
};
