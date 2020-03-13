#pragma once

#include <functional>


class AppConfigs {

public:
    ~AppConfigs(); // _ZN10AppConfigsD2Ev
    virtual void areResourcePacksAllowed()const; // _ZNK10AppConfigs23areResourcePacksAllowedEv
    virtual bool isPlayScreenAllowed()const; // _ZNK10AppConfigs19isPlayScreenAllowedEv
    virtual bool isGameTabShownInSettings()const; // _ZNK10AppConfigs24isGameTabShownInSettingsEv
    virtual void areQuizzesSupported()const; // _ZNK10AppConfigs19areQuizzesSupportedEv
    virtual bool isLessonProgressionSupported()const; // _ZNK10AppConfigs28isLessonProgressionSupportedEv
    virtual void useNormalizedFontSize()const; // _ZNK10AppConfigs21useNormalizedFontSizeEv
    virtual void useFullScreenByDefault()const; // _ZNK10AppConfigs22useFullScreenByDefaultEv
    virtual void muteByDefault()const; // _ZNK10AppConfigs13muteByDefaultEv
    virtual bool isCoursesCacheEnabled()const; // _ZNK10AppConfigs21isCoursesCacheEnabledEv
    virtual void getEducationEditionOffering()const; // _ZNK10AppConfigs27getEducationEditionOfferingEv
    virtual void getConnectionDefinition()const; // _ZNK10AppConfigs23getConnectionDefinitionEv
    virtual bool supportsChangingMultiplayerDuringPlay()const; // _ZNK10AppConfigs37supportsChangingMultiplayerDuringPlayEv
    AppConfigs(); // _ZN10AppConfigsC2Ev
//  void tryLeaveGameOverride(SceneStack &, SceneFactory &); //TODO: incomplete function definition // _ZN10AppConfigs20tryLeaveGameOverrideER10SceneStackR12SceneFactory
    void setLeaveGameOverride(std::function<void (SceneStack &, SceneFactory &)>); // _ZN10AppConfigs20setLeaveGameOverrideESt8functionIFvR10SceneStackR12SceneFactoryEE
};
