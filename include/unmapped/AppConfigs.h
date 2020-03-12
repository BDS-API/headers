#pragma once

#include <functional>


class AppConfigs {

public:
    virtual void muteByDefault()const;
    ~AppConfigs();
    virtual bool isLessonProgressionSupported()const;
    virtual void useNormalizedFontSize()const;
    virtual bool isCoursesCacheEnabled()const;
    virtual void getConnectionDefinition()const;
    virtual bool isPlayScreenAllowed()const;
    virtual void getEducationEditionOffering()const;
    virtual bool supportsChangingMultiplayerDuringPlay()const;
    virtual bool isGameTabShownInSettings()const;
    virtual void areResourcePacksAllowed()const;
    virtual void useFullScreenByDefault()const;
    virtual void areQuizzesSupported()const;
//  void tryLeaveGameOverride(SceneStack &, SceneFactory &); //TODO: incomplete function definition
    AppConfigs();
    void setLeaveGameOverride(std::function<void (SceneStack &, SceneFactory &)>);
};
