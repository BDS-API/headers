#pragma once

#include "../bedrock/pack/ResourcePackManager.h"
#include "../bedrock/level/LevelData.h"
#include "../bedrock/resourcepack/ResourcePackListener.h"


class EducationOptions : ResourcePackListener {

public:
    static long DEFAULT_OPTION;
    static long CHEMISTRY_ENABLED;

    ~EducationOptions();
    virtual void onActiveResourcePacksChanged(ResourcePackManager &);
    bool isBaseCodeBuilderEnabled();
    EducationOptions(ResourcePackManager *);
    void init(LevelData const&);
    bool isEducationEnabled();
    bool isChemistryEnabled();
    bool isCodeBuilderEnabled();
//  void _setFeature(EducationFeature, bool); //TODO: incomplete function definition
//  void _isFeatureEnabled(EducationFeature)const; //TODO: incomplete function definition
};
