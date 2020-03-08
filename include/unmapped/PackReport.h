#pragma once

#include "../json/Value"


class PackReport {

public:

    PackReport(void);
    void merge(PackReport&&);
    bool wasUpgraded()const;
    void attemptedUpgrade()const;
    bool hasErrors()const;
    bool hasErrors(PackErrorType);
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
    void getPackType()const;
    void setPackType(PackType);
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void clear();
    PackReport(PackReport const&);
    PackReport(PackReport&&);
};
