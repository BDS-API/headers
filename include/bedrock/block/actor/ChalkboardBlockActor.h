#pragma once

#include "BlockActor.h"
#include <string>
#include "../../../unmapped/DataLoadHelper.h"
#include "../../text/TextObjectRoot.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../actor/Actor.h"
#include <vector>
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"


class ChalkboardBlockActor : BlockActor {

public:
    class CachedLineData;
    class CachedMessageData;

    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void getShadowRadius(BlockSource &)const;
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    ~ChalkboardBlockActor();
    void convertFromEntity(BlockSource &, CompoundTag const&);
    ChalkboardBlockActor(BlockPos const&);
    void setOnGround(bool);
//  void calculateAllBlocks(BlockPos const&, ChalkboardSize, int); //TODO: incomplete function definition
    void getRotation(BlockSource &)const;
    void setText(std::string const&);
    void getCachedMessage()const;
    void _flagCachedMessageAsDirty();
//  bool canCreateChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, std::vector<BlockPos> &); //TODO: incomplete function definition
    void getTextCharCount()const;
    void getChalkboardSize()const;
    void getBaseChalkboard(BlockSource &)const;
    void setOwnerId(ActorUniqueID);
    void setLocked(bool);
//  void setChalkboardSize(ChalkboardSize); //TODO: incomplete function definition
    void setBasePos(BlockPos const&);
    void _isBaseEntity()const;
    std::string getText()const;
    void getHeight()const;
    void playerMayToggleLock(Player &)const;
    void playerMayEdit(Player &)const;
    void playerMayDestroy(Player &)const;
    void getLocked()const;
    bool isOnGround()const;
    void _isOwner(Player &)const;
    void setCachedMessage(ChalkboardBlockActor::CachedMessageData);
    void getWidth()const;
    std::string getUnfilteredText()const;
//  void createChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, bool, std::string); //TODO: incomplete function definition
    void setText(std::string const&, TextObjectRoot &&);
    bool isBaseChalkboard()const;
    void getOwnerId()const;
    class CachedLineData {

    public:
        ~CachedLineData();
        CachedLineData();
    };
    class CachedMessageData {

    public:
        ~CachedMessageData();
        CachedMessageData();
    };
};
