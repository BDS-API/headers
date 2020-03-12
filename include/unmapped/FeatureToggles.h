#pragma once

#include "Option.h"
#include <functional>
#include <string>


class FeatureToggles {

public:
    class FeatureToggle;

    static long mFeatureToggles;

    void _setupDependencies();
    void _registerFeatures();
    void _tearDownDependencies();
//  void _getEnabledLockedCallback(FeatureOptionID); //TODO: incomplete function definition
    void makeDefault();
    void _initialize();
    void _load();
//  void get(FeatureOptionID)const; //TODO: incomplete function definition
    void count()const;
    void initialize();
    ~FeatureToggles();
//  bool isEnabled(FeatureOptionID)const; //TODO: incomplete function definition
    void _save();
//  void _registerFeature(FeatureOptionID, std::string const&, std::string const&, bool, FeatureOptionID, std::function<void (Option *)>, std::function<bool (void)>); //TODO: incomplete function definition
    FeatureToggles();
    void makeFeatureToggles();
//  void _getEnabledSetupCallback(FeatureOptionID); //TODO: incomplete function definition
//  void get(FeatureOptionID); //TODO: incomplete function definition
    class FeatureToggle {

    public:
        FeatureToggle(FeatureToggles::FeatureToggle &&);
        ~FeatureToggle();
    };
};
