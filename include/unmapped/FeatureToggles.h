#pragma once

#include <functional>
#include "./Option.h"
#include <string>


class FeatureToggles {

public:
    static long mFeatureToggles;


    void makeDefault();
    void makeFeatureToggles();
    void _registerFeatures();
    void initialize();
    void _initialize();
//  void get(FeatureOptionID); //TODO: incomplete function definition
    void _load();
    void _setupDependencies();
    ~FeatureToggles();
    void _tearDownDependencies();
    void count()const;
//  void get(FeatureOptionID)const; //TODO: incomplete function definition
//  bool isEnabled(FeatureOptionID)const; //TODO: incomplete function definition
    void _save();
//  void _registerFeature(FeatureOptionID, std::string const&, std::string const&, bool, FeatureOptionID, std::function<void (Option *)>, std::function<bool (void)>); //TODO: incomplete function definition
//  void _getEnabledSetupCallback(FeatureOptionID); //TODO: incomplete function definition
//  void _getEnabledLockedCallback(FeatureOptionID); //TODO: incomplete function definition
    FeatureToggles();
};
