#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../../unmapped/CachedMessageData"
#include "../../text/TextObjectRoot"
#include "../../nbt/CompoundTag"


class SignBlockActor : BlockActor {

public:
    virtual SignBlockActor::~SignBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void getImmersiveReaderText[abi:cxx11](BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    SignBlockActor(BlockPos const&);
    void setMessage(TextObjectRoot, std::string);
    void setMessage(std::string, std::string);
    void _clearCachedMessage(void);
    void getType(void)const;
    void setType(SignBlockActor::SignType);
    void getCachedMessage(void)const;
    void setCachedMessage(SignBlockActor::CachedMessageData);
};
