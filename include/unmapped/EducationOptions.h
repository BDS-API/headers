#pragma once

#include "../bedrock/resourcepack/ResourcePackListener.h"


class EducationOptions : ResourcePackListener {

public:
    static long DEFAULT_OPTION;
    static long CHEMISTRY_ENABLED;

    virtual void onActiveResourcePacksChanged(ResourcePackManager &);
    ~EducationOptions();
    void init(LevelData const&);
    bool isEducationEnabled();
    bool isChemistryEnabled();
    EducationOptions(ResourcePackManager *);
    bool isCodeBuilderEnabled();
//  void _isFeatureEnabled(EducationFeature)const; //TODO: incomplete function definition
    bool isBaseCodeBuilderEnabled();
//  void _setFeature(EducationFeature, bool); //TODO: incomplete function definition
};
