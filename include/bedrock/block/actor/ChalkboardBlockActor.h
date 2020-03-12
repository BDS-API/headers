#pragma once

#include <string>
#include "BlockActor.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <vector>


class ChalkboardBlockActor : BlockActor {

public:
    class CachedLineData;
    class CachedMessageData;

    virtual void onChanged(BlockSource &);
    ~ChalkboardBlockActor();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual std::string getImmersiveReaderText(BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    void setOwnerId(ActorUniqueID);
    void convertFromEntity(BlockSource &, CompoundTag const&);
    void playerMayToggleLock(Player &)const;
    void getHeight()const;
    void getRotation(BlockSource &)const;
    bool isBaseChalkboard()const;
    ChalkboardBlockActor(BlockPos const&);
    std::string getUnfilteredText()const;
//  void setChalkboardSize(ChalkboardSize); //TODO: incomplete function definition
//  bool canCreateChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, std::vector<BlockPos> &); //TODO: incomplete function definition
    void playerMayEdit(Player &)const;
    void getChalkboardSize()const;
    void getLocked()const;
    void setOnGround(bool);
    void setText(std::string const&, TextObjectRoot &&);
    void _flagCachedMessageAsDirty();
//  void calculateAllBlocks(BlockPos const&, ChalkboardSize, int); //TODO: incomplete function definition
    void setBasePos(BlockPos const&);
    void setCachedMessage(ChalkboardBlockActor::CachedMessageData);
    void getBaseChalkboard(BlockSource &)const;
//  void createChalkboard(Actor *, BlockSource &, BlockPos const&, ChalkboardSize, int, bool, std::string); //TODO: incomplete function definition
    void getWidth()const;
    void _isBaseEntity()const;
    void getTextCharCount()const;
    void _isOwner(Player &)const;
    std::string getText()const;
    bool isOnGround()const;
    void setText(std::string const&);
    void setLocked(bool);
    void playerMayDestroy(Player &)const;
    void getOwnerId()const;
    void getCachedMessage()const;
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
