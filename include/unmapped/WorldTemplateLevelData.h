#pragma once



class WorldTemplateLevelData {

public:
    void setTagData(CompoundTag &)const;
    void getWorldTemplateIdentity()const;
    void getContentIdentity()const;
    void setWorldTemplateIdentity(PackIdVersion const&);
    WorldTemplateLevelData(WorldTemplateLevelData &&);
    WorldTemplateLevelData(bool, bool, BaseGameVersion const&);
    bool isFromWorldTemplate()const;
    WorldTemplateLevelData();
    void getBaseGameVersion()const;
    bool isWorldTemplateOptionLocked()const;
    void setIsWorldTemplateOptionLocked(bool);
    void getTagData(CompoundTag const&);
    ~WorldTemplateLevelData();
    void _getTagData(CompoundTag const&);
    void setBaseGameVersion(BaseGameVersion const&);
    void setContentIdentity(ContentIdentity const&);
    void setIsFromWorldTemplate(bool);
    void _setTagData(CompoundTag &)const;
};
