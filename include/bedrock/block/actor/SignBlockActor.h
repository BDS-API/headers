#pragma once

#include "BlockActor.h"
#include <string>
#include "../../../unmapped/DataLoadHelper.h"
#include "../../text/TextObjectRoot.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class SignBlockActor : BlockActor {

public:
    class CachedLineData;
    class CachedMessageData;

    ~SignBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onChanged(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void save(CompoundTag &)const;
    void setCachedMessage(SignBlockActor::CachedMessageData);
    std::string getMessage();
    void setMessage(std::string, std::string);
    void getType()const;
    void getCachedMessage()const;
//  void setType(SignBlockActor::SignType); //TODO: incomplete function definition
    SignBlockActor(BlockPos const&);
    void setMessage(TextObjectRoot, std::string);
    void _clearCachedMessage();
    class CachedLineData {

    public:
        CachedLineData();
        ~CachedLineData();
    };
    class CachedMessageData {

    public:
        ~CachedMessageData();
        CachedMessageData();
    };
};
