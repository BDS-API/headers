#pragma once

#include "./WorldTemplateLevelData.h"
#include "./ContentIdentity.h"
#include "./PackIdVersion.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./BaseGameVersion.h"


class WorldTemplateLevelData {

public:

    ~WorldTemplateLevelData();
    WorldTemplateLevelData(WorldTemplateLevelData &&);
    WorldTemplateLevelData();
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
