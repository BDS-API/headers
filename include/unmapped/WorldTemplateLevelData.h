#pragma once

#include "../bedrock/nbt/CompoundTag"


class WorldTemplateLevelData {

public:

    WorldTemplateLevelData(WorldTemplateLevelData&&);
    WorldTemplateLevelData(void);
    WorldTemplateLevelData(bool, bool, BaseGameVersion const&);
    void getTagData(CompoundTag const&);
    void _getTagData(CompoundTag const&);
    void setTagData(CompoundTag &)const;
    void _setTagData(CompoundTag &)const;
    void getContentIdentity()const;
    void setContentIdentity(ContentIdentity const&);
    void getWorldTemplateIdentity()const;
    void setWorldTemplateIdentity(PackIdVersion const&);
    void getBaseGameVersion()const;
    void setBaseGameVersion(BaseGameVersion const&);
    bool isFromWorldTemplate()const;
    void setIsFromWorldTemplate(bool);
    bool isWorldTemplateOptionLocked()const;
    void setIsWorldTemplateOptionLocked(bool);
};
