#pragma once

#include "../bedrock/resourcepack/ResourcePackListener"
#include "../bedrock/level/LevelData"
#include "../bedrock/pack/ResourcePackManager"


class EducationOptions : ResourcePackListener {

public:
    static long DEFAULT_OPTION;
    static long CHEMISTRY_ENABLED;

    virtual EducationOptions::~EducationOptions()
    virtual void onActiveResourcePacksChanged(ResourcePackManager &);

    EducationOptions(ResourcePackManager *);
    void init(LevelData const&);
    void _setFeature(EducationFeature, bool);
    void _isFeatureEnabled(EducationFeature)const;
    bool isChemistryEnabled();
    bool isEducationEnabled();
    bool isCodeBuilderEnabled();
    bool isBaseCodeBuilderEnabled();
};
