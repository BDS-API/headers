#pragma once

#include <string>


class PackReport {

public:
    ~PackReport(); // _ZN10PackReportD2Ev
    PackReport(); // _ZN10PackReportC2Ev
    void merge(PackReport &&); // _ZN10PackReport5mergeEOS_
    bool wasUpgraded()const; // _ZNK10PackReport11wasUpgradedEv
    void attemptedUpgrade()const; // _ZNK10PackReport16attemptedUpgradeEv
    bool hasErrors()const; // _ZNK10PackReport9hasErrorsEv
//  bool hasErrors(PackErrorType); //TODO: incomplete function definition // _ZN10PackReport9hasErrorsE13PackErrorType
    bool hasWarnings()const; // _ZNK10PackReport11hasWarningsEv
    void setUpgraded(bool); // _ZN10PackReport11setUpgradedEb
    void getLocation()const; // _ZNK10PackReport11getLocationEv
    void setLocation(ResourceLocation const&); // _ZN10PackReport11setLocationERK16ResourceLocation
    void getErrors()const; // _ZNK10PackReport9getErrorsEv
    void getWarnings()const; // _ZNK10PackReport11getWarningsEv
    void getNumErrors()const; // _ZNK10PackReport12getNumErrorsEv
    void getNumWarnings()const; // _ZNK10PackReport14getNumWarningsEv
    void setUpgradeSuccess(); // _ZN10PackReport17setUpgradeSuccessEv
    void setAttemptedUpgrade(); // _ZN10PackReport19setAttemptedUpgradeEv
    void getIdentity()const; // _ZNK10PackReport11getIdentityEv
    void setIdentity(PackIdVersion const&); // _ZN10PackReport11setIdentityERK13PackIdVersion
    void setOriginalIdentity(std::string const&, std::string const&); // _ZN10PackReport19setOriginalIdentityERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    std::string getOriginalName()const; // _ZNK10PackReport15getOriginalNameB5cxx11Ev
    std::string getOriginalVersion()const; // _ZNK10PackReport18getOriginalVersionB5cxx11Ev
    void getPackType()const; // _ZNK10PackReport11getPackTypeEv
//  void setPackType(PackType); //TODO: incomplete function definition // _ZN10PackReport11setPackTypeE8PackType
    std::string serializeEventErrorMessages()const; // _ZNK10PackReport27serializeEventErrorMessagesB5cxx11Ev
    void serialize(Json::Value &); // _ZN10PackReport9serializeERN4Json5ValueE
    void deserialize(Json::Value const&); // _ZN10PackReport11deserializeERKN4Json5ValueE
    void clear(); // _ZN10PackReport5clearEv
    PackReport(PackReport const&); // _ZN10PackReportC2ERKS_
    PackReport(PackReport &&); // _ZN10PackReportC2EOS_
};
