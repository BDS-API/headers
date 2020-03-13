#pragma once

#include "../bedrock/resourcepack/ResourcePackListener.h"


class EducationOptions : ResourcePackListener {

public:
    static long DEFAULT_OPTION;
    static long CHEMISTRY_ENABLED;

    ~EducationOptions(); // _ZN16EducationOptionsD2Ev
    virtual void onActiveResourcePacksChanged(ResourcePackManager &); // _ZN16EducationOptions28onActiveResourcePacksChangedER19ResourcePackManager
    EducationOptions(ResourcePackManager *); // _ZN16EducationOptionsC2EP19ResourcePackManager
    void init(LevelData const&); // _ZN16EducationOptions4initERK9LevelData
//  void _setFeature(EducationFeature, bool); //TODO: incomplete function definition // _ZN16EducationOptions11_setFeatureE16EducationFeatureb
//  void _isFeatureEnabled(EducationFeature)const; //TODO: incomplete function definition // _ZNK16EducationOptions17_isFeatureEnabledE16EducationFeature
    bool isChemistryEnabled(); // _ZN16EducationOptions18isChemistryEnabledEv
    bool isEducationEnabled(); // _ZN16EducationOptions18isEducationEnabledEv
    bool isCodeBuilderEnabled(); // _ZN16EducationOptions20isCodeBuilderEnabledEv
    bool isBaseCodeBuilderEnabled(); // _ZN16EducationOptions24isBaseCodeBuilderEnabledEv
};
