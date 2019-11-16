#pragma once

class VanillaAppConfigs : AppConfigs {

    virtual ~VanillaAppConfigs();
    virtual ~VanillaAppConfigs();
    virtual void areResourcePacksAllowed(void)const;
    virtual void isPlayScreenAllowed(void)const;
    virtual void isGameTabShownInSettings(void)const;
    virtual void areQuizzesSupported(void)const;
    virtual void isLessonProgressionSupported(void)const;
    virtual void useNormalizedFontSize(void)const;
    virtual void useFullScreenByDefault(void)const;
    virtual void muteByDefault(void)const;
    virtual void isCoursesCacheEnabled(void)const;
    virtual void getEducationEditionOffering(void)const;
    virtual void getConnectionDefinition(void)const;
    virtual void supportsChangingMultiplayerDuringPlay(void)const;
}
