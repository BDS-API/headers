#pragma once

#include "BaseGameVersion.h"
#include "ContentIdentity.h"
#include "PackIdVersion.h"
#include "../bedrock/nbt/CompoundTag.h"


class WorldTemplateLevelData {

public:
    void getBaseGameVersion()const;
    void setWorldTemplateIdentity(PackIdVersion const&);
    void setContentIdentity(ContentIdentity const&);
    void setIsFromWorldTemplate(bool);
    WorldTemplateLevelData();
    void getWorldTemplateIdentity()const;
    WorldTemplateLevelData(WorldTemplateLevelData &&);
    void getContentIdentity()const;
    void setTagData(CompoundTag &)const;
    void setIsWorldTemplateOptionLocked(bool);
    void _getTagData(CompoundTag const&);
    void _setTagData(CompoundTag &)const;
    void getTagData(CompoundTag const&);
    void setBaseGameVersion(BaseGameVersion const&);
    bool isFromWorldTemplate()const;
    bool isWorldTemplateOptionLocked()const;
    ~WorldTemplateLevelData();
    WorldTemplateLevelData(bool, bool, BaseGameVersion const&);
};
