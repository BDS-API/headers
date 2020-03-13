#pragma once

#include <string>
#include <functional>


class FeatureToggles {

public:
    class FeatureToggle;

    static long mFeatureToggles;

    void makeDefault(); // _ZN14FeatureToggles11makeDefaultEv
    void makeFeatureToggles(); // _ZN14FeatureToggles18makeFeatureTogglesEv
    void _registerFeatures(); // _ZN14FeatureToggles17_registerFeaturesEv
    void initialize(); // _ZN14FeatureToggles10initializeEv
    void _initialize(); // _ZN14FeatureToggles11_initializeEv
//  void get(FeatureOptionID); //TODO: incomplete function definition // _ZN14FeatureToggles3getE15FeatureOptionID
    void _load(); // _ZN14FeatureToggles5_loadEv
    void _setupDependencies(); // _ZN14FeatureToggles18_setupDependenciesEv
    ~FeatureToggles(); // _ZN14FeatureTogglesD2Ev
    void _tearDownDependencies(); // _ZN14FeatureToggles21_tearDownDependenciesEv
    void count()const; // _ZNK14FeatureToggles5countEv
//  void get(FeatureOptionID)const; //TODO: incomplete function definition // _ZNK14FeatureToggles3getE15FeatureOptionID
//  bool isEnabled(FeatureOptionID)const; //TODO: incomplete function definition // _ZNK14FeatureToggles9isEnabledE15FeatureOptionID
    void _save(); // _ZN14FeatureToggles5_saveEv
//  void _registerFeature(FeatureOptionID, std::string const&, std::string const&, bool, FeatureOptionID, std::function<void (Option *)>, std::function<bool (void)>); //TODO: incomplete function definition // _ZN14FeatureToggles16_registerFeatureE15FeatureOptionIDRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_bS0_St8functionIFvP6OptionEES9_IFbvEE
//  void _getEnabledSetupCallback(FeatureOptionID); //TODO: incomplete function definition // _ZN14FeatureToggles24_getEnabledSetupCallbackE15FeatureOptionID
//  void _getEnabledLockedCallback(FeatureOptionID); //TODO: incomplete function definition // _ZN14FeatureToggles25_getEnabledLockedCallbackE15FeatureOptionID
    FeatureToggles(); // _ZN14FeatureTogglesC2Ev
    class FeatureToggle {

    public:
        ~FeatureToggle(); // _ZN14FeatureToggles13FeatureToggleD2Ev
        FeatureToggle(FeatureToggles::FeatureToggle &&); // _ZN14FeatureToggles13FeatureToggleC2EOS0_
    };
};
