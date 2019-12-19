#pragma once

class EducationOptions : ResourcePackListener {

public:
    static long DEFAULT_OPTION;
    static long CHEMISTRY_ENABLED;

    virtual EducationOptions::~EducationOptions();
    virtual void onActiveResourcePacksChanged(ResourcePackManager &);

    EducationOptions(ResourcePackManager *);
    void init(LevelData const&);
    void _setFeature(EducationFeature, bool);
    void _isFeatureEnabled(EducationFeature)const;
    bool isChemistryEnabled(void);
    bool isEducationEnabled(void);
    bool isCodeBuilderEnabled(void);
    bool isBaseCodeBuilderEnabled(void);
};
