#pragma once

#include <string>
#include <functional>


class FeatureToggles {

public:
    class FeatureToggle;

    static long mFeatureToggles;

    void makeDefault();
    ~FeatureToggles();
    void _setupDependencies();
    void _save();
//  void _getEnabledSetupCallback(FeatureOptionID); //TODO: incomplete function definition
    FeatureToggles();
//  void get(FeatureOptionID)const; //TODO: incomplete function definition
    void initialize();
//  bool isEnabled(FeatureOptionID)const; //TODO: incomplete function definition
//  void _registerFeature(FeatureOptionID, std::string const&, std::string const&, bool, FeatureOptionID, std::function<void (Option *)>, std::function<bool (void)>); //TODO: incomplete function definition
    void _load();
    void _registerFeatures();
    void makeFeatureToggles();
    void _initialize();
//  void get(FeatureOptionID); //TODO: incomplete function definition
    void count()const;
//  void _getEnabledLockedCallback(FeatureOptionID); //TODO: incomplete function definition
    void _tearDownDependencies();
    class FeatureToggle {

    public:
        ~FeatureToggle();
        FeatureToggle(FeatureToggles::FeatureToggle &&);
    };
};
