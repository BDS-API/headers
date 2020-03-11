#pragma once

#include <functional>


class AppConfigs {

public:
    virtual ~AppConfigs();
    virtual void areResourcePacksAllowed()const;
    virtual bool isPlayScreenAllowed()const;
    virtual bool isGameTabShownInSettings()const;
    virtual void areQuizzesSupported()const;
    virtual bool isLessonProgressionSupported()const;
    virtual void useNormalizedFontSize()const;
    virtual void useFullScreenByDefault()const;
    virtual void muteByDefault()const;
    virtual bool isCoursesCacheEnabled()const;
    virtual void getEducationEditionOffering()const;
    virtual void getConnectionDefinition()const;
    virtual bool supportsChangingMultiplayerDuringPlay()const;

    AppConfigs();
//  void tryLeaveGameOverride(SceneStack &, SceneFactory &); //TODO: incomplete function definition
//  void setLeaveGameOverride(std::function<void (SceneStack &, SceneFactory &)>); //TODO: incomplete function definition
};
