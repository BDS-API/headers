#pragma once

#include "../json/Value"


class PackReport {

public:

    PackReport(void);
    void merge(PackReport&&);
    bool wasUpgraded(void)const;
    void attemptedUpgrade(void)const;
    bool hasErrors(void)const;
    bool hasErrors(PackErrorType);
    bool hasWarnings(void)const;
    void setUpgraded(bool);
    void getLocation(void)const;
    void setLocation(ResourceLocation const&);
    void getErrors(void)const;
    void getWarnings(void)const;
    void getNumErrors(void)const;
    void getNumWarnings(void)const;
    void setUpgradeSuccess(void);
    void setAttemptedUpgrade(void);
    void getIdentity(void)const;
    void setIdentity(PackIdVersion const&);
    void setOriginalIdentity(std::string const&, std::string const&);
    void getPackType(void)const;
    void setPackType(PackType);
    void serialize(Json::Value &);
    void deserialize(Json::Value const&);
    void clear(void);
    PackReport(PackReport const&);
    PackReport(PackReport&&);
};
