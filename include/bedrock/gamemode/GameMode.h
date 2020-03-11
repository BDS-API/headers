#pragma once

#include "../item/ItemStack.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include <functional>
#include "../../unmapped/Block.h"


class GameMode {

public:
    static long PICKRANGE_VR_SURVIVAL;
    static long PICKRANGE_VR_CREATIVE;
    static long PICKRANGE_MOUSE;
    static long PICKRANGE_GAMEPAD;
    static long PICKRANGE_TOUCH_CREATIVE;
    static long PICKRANGE_TOUCH_SURVIVAL;
    static long PICKRANGE_SURVIVAL_MAXIMUM;
    static long PICKRANGE_CREATIVE_MAXIMUM;
    static long PICKRANGE_SURVIVAL_MAXIMUM_SQR;
    static long PICKRANGE_CREATIVE_MAXIMUM_SQR;

    virtual ~GameMode();
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void stopDestroyBlock(BlockPos const&);
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void continueBuildBlock(BlockPos const&, unsigned char);
    virtual void stopBuildBlock();
    virtual void tick();
//  virtual void getPickRange(InputMode const&, bool); //TODO: incomplete function definition
    virtual void useItem(ItemStack &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void interact(Actor &, Vec3 const&);
    virtual void attack(Actor &);
    virtual void releaseUsingItem();
    virtual void setTrialMode(bool);
    virtual bool isInTrialMode();
//  virtual void registerUpsellScreenCallback(std::function<void (bool)>); //TODO: incomplete function definition

    GameMode(Player &);
    void _canDestroy(BlockPos const&, unsigned char);
    void _creativeDestroyBlock(BlockPos const&, unsigned char);
    void _destroyBlockInternal(BlockPos const&, unsigned char);
    void getDestroyRate(Block const&);
    void _calculatePlacePos(BlockPos const&, unsigned char &)const;
    bool isLastBuildBlockSnappable()const;
    bool hasStartedBuilding()const;
    bool hasContinueDirection()const;
    void getContinueFacing()const;
    void getContinueDirection()const;
    void getNextContinuePos()const;
    void getLastBuiltBlockPos()const;
    void _canUseBlock(Block const&);
    void baseUseItem(ItemStack &);
    void getMaxPickRange();
    void getMaxPickRangeSqr();
    void getDestroyBlockPos();
    void getOldDestroyProgress();
    void getDestroyProgress();
    void _releaseUsingItemInternal();
    void getHitProgress(float);
};
