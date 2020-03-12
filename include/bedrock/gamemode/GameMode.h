#pragma once

#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include <functional>
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../item/ItemStack.h"


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

    ~GameMode();
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void useItem(ItemStack &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual void interact(Actor &, Vec3 const&);
    virtual bool isInTrialMode();
    virtual void stopDestroyBlock(BlockPos const&);
    virtual void stopBuildBlock();
    virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void releaseUsingItem();
    virtual void attack(Actor &);
//  virtual void getPickRange(InputMode const&, bool); //TODO: incomplete function definition
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void tick();
    virtual void continueBuildBlock(BlockPos const&, unsigned char);
    virtual void setTrialMode(bool);
    void getDestroyProgress();
    void getDestroyBlockPos();
    void _releaseUsingItemInternal();
    bool hasStartedBuilding()const;
    void _canDestroy(BlockPos const&, unsigned char);
    void getContinueFacing()const;
    void getDestroyRate(Block const&);
    void _creativeDestroyBlock(BlockPos const&, unsigned char);
    void getOldDestroyProgress();
    bool isLastBuildBlockSnappable()const;
    void getMaxPickRangeSqr();
    void _destroyBlockInternal(BlockPos const&, unsigned char);
    void _calculatePlacePos(BlockPos const&, unsigned char &)const;
    void getLastBuiltBlockPos()const;
    void baseUseItem(ItemStack &);
    void getNextContinuePos()const;
    void getHitProgress(float);
    GameMode(Player &);
    bool hasContinueDirection()const;
    void getContinueDirection()const;
    void getMaxPickRange();
    void _canUseBlock(Block const&);
};
