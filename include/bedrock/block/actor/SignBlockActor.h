#pragma once

#include <string>
#include "BlockActor.h"
#include "../../text/TextObjectRoot.h"


class SignBlockActor : BlockActor {

public:
    class CachedLineData;
    class CachedMessageData;

    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void onChanged(BlockSource &);
    ~SignBlockActor();
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
//  void setType(SignBlockActor::SignType); //TODO: incomplete function definition
    void setMessage(std::string, std::string);
    void setCachedMessage(SignBlockActor::CachedMessageData);
    void getCachedMessage()const;
    SignBlockActor(BlockPos const&);
    void setMessage(TextObjectRoot, std::string);
    void _clearCachedMessage();
    std::string getMessage();
    void getType()const;
    class CachedLineData {

    public:
        CachedLineData();
        ~CachedLineData();
    };
    class CachedMessageData {

    public:
        CachedMessageData();
        ~CachedMessageData();
    };
};
