#pragma once

#include <string>
#include "BlockActor.h"
#include "../../text/TextObjectRoot.h"


class SignBlockActor : BlockActor {

public:
    class CachedLineData;
    class CachedMessageData;

    ~SignBlockActor(); // _ZN14SignBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN14SignBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK14SignBlockActor4saveER11CompoundTag
    virtual void onChanged(BlockSource &); // _ZN14SignBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN14SignBlockActor15getUpdatePacketER11BlockSource
    virtual void getShadowRadius(BlockSource &)const; // _ZNK14SignBlockActor15getShadowRadiusER11BlockSource
    virtual std::string getImmersiveReaderText(BlockSource &); // _ZN14SignBlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN14SignBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    SignBlockActor(BlockPos const&); // _ZN14SignBlockActorC2ERK8BlockPos
    void setMessage(TextObjectRoot, std::string); // _ZN14SignBlockActor10setMessageE14TextObjectRootNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setMessage(std::string, std::string); // _ZN14SignBlockActor10setMessageENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES5_
    void _clearCachedMessage(); // _ZN14SignBlockActor19_clearCachedMessageEv
    std::string getMessage(); // _ZN14SignBlockActor10getMessageB5cxx11Ev
    void getType()const; // _ZNK14SignBlockActor7getTypeEv
//  void setType(SignBlockActor::SignType); //TODO: incomplete function definition // _ZN14SignBlockActor7setTypeENS_8SignTypeE
    void getCachedMessage()const; // _ZNK14SignBlockActor16getCachedMessageEv
    void setCachedMessage(SignBlockActor::CachedMessageData); // _ZN14SignBlockActor16setCachedMessageENS_17CachedMessageDataE
    class CachedLineData {

    public:
        CachedLineData(); // _ZN14SignBlockActor14CachedLineDataC2Ev
        ~CachedLineData(); // _ZN14SignBlockActor14CachedLineDataD2Ev
    };
    class CachedMessageData {

    public:
        CachedMessageData(); // _ZN14SignBlockActor17CachedMessageDataC2Ev
        ~CachedMessageData(); // _ZN14SignBlockActor17CachedMessageDataD2Ev
    };
};
