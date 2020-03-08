#pragma once



class FeatureToggles {

public:
    static long mFeatureToggles;


    void makeDefault();
    void makeFeatureToggles();
    void _registerFeatures();
    void initialize();
    void _initialize();
    void get(FeatureOptionID);
    void _load();
    void _setupDependencies();
    void _tearDownDependencies();
    void count()const;
    void get(FeatureOptionID)const;
    bool isEnabled(FeatureOptionID)const;
    void _save();
    void _registerFeature(FeatureOptionID, std::string const&, std::string const&, bool, FeatureOptionID, std::function<void ()(Option *)>, std::function<bool ()(void)>);
    void _getEnabledSetupCallback(FeatureOptionID);
    void _getEnabledLockedCallback(FeatureOptionID);
    FeatureToggles(void);
};
