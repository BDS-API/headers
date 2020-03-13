#pragma once



class WorldTemplateLevelData {

public:
    ~WorldTemplateLevelData(); // _ZN22WorldTemplateLevelDataD2Ev
    WorldTemplateLevelData(WorldTemplateLevelData &&); // _ZN22WorldTemplateLevelDataC2EOS_
    WorldTemplateLevelData(); // _ZN22WorldTemplateLevelDataC2Ev
    WorldTemplateLevelData(bool, bool, BaseGameVersion const&); // _ZN22WorldTemplateLevelDataC2EbbRK15BaseGameVersion
    void getTagData(CompoundTag const&); // _ZN22WorldTemplateLevelData10getTagDataERK11CompoundTag
    void _getTagData(CompoundTag const&); // _ZN22WorldTemplateLevelData11_getTagDataERK11CompoundTag
    void setTagData(CompoundTag &)const; // _ZNK22WorldTemplateLevelData10setTagDataER11CompoundTag
    void _setTagData(CompoundTag &)const; // _ZNK22WorldTemplateLevelData11_setTagDataER11CompoundTag
    void getContentIdentity()const; // _ZNK22WorldTemplateLevelData18getContentIdentityEv
    void setContentIdentity(ContentIdentity const&); // _ZN22WorldTemplateLevelData18setContentIdentityERK15ContentIdentity
    void getWorldTemplateIdentity()const; // _ZNK22WorldTemplateLevelData24getWorldTemplateIdentityEv
    void setWorldTemplateIdentity(PackIdVersion const&); // _ZN22WorldTemplateLevelData24setWorldTemplateIdentityERK13PackIdVersion
    void getBaseGameVersion()const; // _ZNK22WorldTemplateLevelData18getBaseGameVersionEv
    void setBaseGameVersion(BaseGameVersion const&); // _ZN22WorldTemplateLevelData18setBaseGameVersionERK15BaseGameVersion
    bool isFromWorldTemplate()const; // _ZNK22WorldTemplateLevelData19isFromWorldTemplateEv
    void setIsFromWorldTemplate(bool); // _ZN22WorldTemplateLevelData22setIsFromWorldTemplateEb
    bool isWorldTemplateOptionLocked()const; // _ZNK22WorldTemplateLevelData27isWorldTemplateOptionLockedEv
    void setIsWorldTemplateOptionLocked(bool); // _ZN22WorldTemplateLevelData30setIsWorldTemplateOptionLockedEb
};
