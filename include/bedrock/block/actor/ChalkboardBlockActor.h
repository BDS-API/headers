#pragma once

#include <string>
#include "BlockActor.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <vector>


class ChalkboardBlockActor : BlockActor {

public:
    class CachedLineData;
    class CachedMessageData;

    ~ChalkboardBlockActor(); // _ZN20ChalkboardBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN20ChalkboardBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK20ChalkboardBlockActor4saveER11CompoundTag
    virtual void onChanged(BlockSource &); // _ZN20ChalkboardBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN20ChalkboardBlockActor15getUpdatePacketER11BlockSource
    virtual void getShadowRadius(BlockSource &)const; // _ZNK20ChalkboardBlockActor15getShadowRadiusER11BlockSource
    virtual std::string getImmersiveReaderText(BlockSource &); // _ZN20ChalkboardBlockActor22getImmersiveReaderTextB5cxx11ER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN20ChalkboardBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    ChalkboardBlockActor(BlockPos const&); // _ZN20ChalkboardBlockActorC2ERK8BlockPos
    bool isBaseChalkboard()const; // _ZNK20ChalkboardBlockActor16isBaseChalkboardEv
    void setText(std::string const&, TextObjectRoot &&); // _ZN20ChalkboardBlockActor7setTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEO14TextObjectRoot
    void setText(std::string const&); // _ZN20ChalkboardBlockActor7setTextERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getText()const; // _ZNK20ChalkboardBlockActor7getTextB5cxx11Ev
    std::string getUnfilteredText()const; // _ZNK20ChalkboardBlockActor17getUnfilteredTextB5cxx11Ev
    void _flagCachedMessageAsDirty(); // _ZN20ChalkboardBlockActor25_flagCachedMessageAsDirtyEv
    void getRotation(BlockSource &)const; // _ZNK20ChalkboardBlockActor11getRotationER11BlockSource
    void setOnGround(bool); // _ZN20ChalkboardBlockActor11setOnGroundEb
    bool isOnGround()const; // _ZNK20ChalkboardBlockActor10isOnGroundEv
//  void setChalkboardSize(ChalkboardSize); //TODO: incomplete function definition // _ZN20ChalkboardBlockActor17setChalkboardSizeE14ChalkboardSize
    void getChalkboardSize()const; // _ZNK20ChalkboardBlockActor17getChalkboardSizeEv
    void getBaseChalkboard(BlockSource &)const; // _ZNK20ChalkboardBlockActor17getBaseChalkboardER11BlockSource
    void setBasePos(BlockPos const&); // _ZN20ChalkboardBlockActor10setBasePosERK8BlockPos
    void setOwnerId(ActorUniqueID); // _ZN20ChalkboardBlockActor10setOwnerIdE13ActorUniqueID
    void getOwnerId()const; // _ZNK20ChalkboardBlockActor10getOwnerIdEv
//  void calculateAllBlocks(BlockPos const&, ChalkboardSize, int); //TODO: incomplete function definition // _ZN20ChalkboardBlockActor18calculateAllBlocksERK8BlockPos14ChalkboardSizei
    void setLocked(bool); // _ZN20ChalkboardBlockActor9setLockedEb
    void getLocked()const; // _ZNK20ChalkboardBlockActor9getLockedEv
    void getTextCharCount()const; // _ZNK20ChalkboardBlockActor16getTextCharCountEv
    void _isBaseEntity()const; // _ZNK20ChalkboardBlockActor13_isBaseEntityEv
    void getWidth()const; // _ZNK20ChalkboardBlockActor8getWidthEv
    void getHeight()const; // _ZNK20ChalkboardBlockActor9getHeightEv
    void convertFromEntity(BlockSource &, CompoundTag const&); // _ZN20ChalkboardBlockActor17convertFromEntityER11BlockSourceRK11CompoundTag
//  void createChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, bool, std::string); //TODO: incomplete function definition // _ZN20ChalkboardBlockActor16createChalkboardEP5ActorR11BlockSourceRK8BlockPos14ChalkboardSizeibNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  bool canCreateChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, std::vector<BlockPos> &); //TODO: incomplete function definition // _ZN20ChalkboardBlockActor19canCreateChalkboardEP5ActorR11BlockSourceRK8BlockPos14ChalkboardSizeiRSt6vectorIS4_SaIS4_EE
    void playerMayEdit(Player &)const; // _ZNK20ChalkboardBlockActor13playerMayEditER6Player
    void _isOwner(Player &)const; // _ZNK20ChalkboardBlockActor8_isOwnerER6Player
    void playerMayToggleLock(Player &)const; // _ZNK20ChalkboardBlockActor19playerMayToggleLockER6Player
    void playerMayDestroy(Player &)const; // _ZNK20ChalkboardBlockActor16playerMayDestroyER6Player
    void getCachedMessage()const; // _ZNK20ChalkboardBlockActor16getCachedMessageEv
    void setCachedMessage(ChalkboardBlockActor::CachedMessageData); // _ZN20ChalkboardBlockActor16setCachedMessageENS_17CachedMessageDataE
    class CachedLineData {

    public:
        CachedLineData(); // _ZN20ChalkboardBlockActor14CachedLineDataC2Ev
        ~CachedLineData(); // _ZN20ChalkboardBlockActor14CachedLineDataD2Ev
    };
    class CachedMessageData {

    public:
        CachedMessageData(); // _ZN20ChalkboardBlockActor17CachedMessageDataC2Ev
        ~CachedMessageData(); // _ZN20ChalkboardBlockActor17CachedMessageDataD2Ev
    };
};
