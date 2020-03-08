#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../../unmapped/CachedMessageData"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"
#include "../../text/TextObjectRoot"


class SignBlockActor : BlockActor {

public:
    virtual SignBlockActor::~SignBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void getImmersiveReaderText(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    SignBlockActor(BlockPos const&);
    void setMessage(TextObjectRoot, std::string);
    void setMessage(std::string, std::string);
    void _clearCachedMessage();
    void getType()const;
    void setType(SignBlockActor::SignType);
    void getCachedMessage()const;
    void setCachedMessage(SignBlockActor::CachedMessageData);
};
