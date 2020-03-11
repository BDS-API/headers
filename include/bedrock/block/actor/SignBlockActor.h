#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/CachedMessageData.h"
#include "../unmapped/BlockSource.h"
#include "../../text/TextObjectRoot.h"
#include <string>


class SignBlockActor : BlockActor {

public:
    virtual ~SignBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    SignBlockActor(BlockPos const&);
    void setMessage(TextObjectRoot, std::string);
    void setMessage(std::string, std::string);
    void _clearCachedMessage();
    std::string getMessage();
    void getType()const;
//  void setType(SignBlockActor::SignType); //TODO: incomplete function definition
    void getCachedMessage()const;
    void setCachedMessage(SignBlockActor::CachedMessageData);
};
