#pragma once

class WorldTemplateLevelData {

public:

    WorldTemplateLevelData(WorldTemplateLevelData&&);
    WorldTemplateLevelData(void);
    WorldTemplateLevelData(bool, bool, BaseGameVersion const&);
    void getTagData(CompoundTag const&);
    void _getTagData(CompoundTag const&);
    void setTagData(CompoundTag &)const;
    void _setTagData(CompoundTag &)const;
    void getContentIdentity(void)const;
    void setContentIdentity(ContentIdentity const&);
    void getWorldTemplateIdentity(void)const;
    void setWorldTemplateIdentity(PackIdVersion const&);
    void getBaseGameVersion(void)const;
    void setBaseGameVersion(BaseGameVersion const&);
    bool isFromWorldTemplate(void)const;
    void setIsFromWorldTemplate(bool);
    bool isWorldTemplateOptionLocked(void)const;
    void setIsWorldTemplateOptionLocked(bool);
};
