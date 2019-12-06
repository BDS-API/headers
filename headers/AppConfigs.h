#pragma once

class AppConfigs {

public:
    virtual ~AppConfigs();
    virtual void areResourcePacksAllowed(void)const;
    virtual bool isPlayScreenAllowed(void)const;
    virtual bool isGameTabShownInSettings(void)const;
    virtual void areQuizzesSupported(void)const;
    virtual bool isLessonProgressionSupported(void)const;
    virtual void useNormalizedFontSize(void)const;
    virtual void useFullScreenByDefault(void)const;
    virtual void muteByDefault(void)const;
    virtual bool isCoursesCacheEnabled(void)const;
    virtual void getEducationEditionOffering(void)const;
    virtual void getConnectionDefinition(void)const;
    virtual void supportsChangingMultiplayerDuringPlay(void)const;

    void AppConfigs(void);
    void tryLeaveGameOverride(SceneStack &, SceneFactory &);
    void setLeaveGameOverride(std::function<void ()(SceneStack &, SceneFactory &)>);
};
