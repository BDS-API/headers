#pragma once

#include <functional>


class AppConfigs {

public:
    virtual void areResourcePacksAllowed()const;
    virtual void useFullScreenByDefault()const;
    virtual void muteByDefault()const;
    virtual bool isCoursesCacheEnabled()const;
    virtual bool supportsChangingMultiplayerDuringPlay()const;
    virtual void areQuizzesSupported()const;
    ~AppConfigs();
    virtual void useNormalizedFontSize()const;
    virtual bool isLessonProgressionSupported()const;
    virtual void getEducationEditionOffering()const;
    virtual bool isGameTabShownInSettings()const;
    virtual bool isPlayScreenAllowed()const;
    virtual void getConnectionDefinition()const;
    AppConfigs();
//  void tryLeaveGameOverride(SceneStack &, SceneFactory &); //TODO: incomplete function definition
//  void setLeaveGameOverride(std::function<void (SceneStack &, SceneFactory &)>); //TODO: incomplete function definition
};
