#pragma once

#include "../item/ItemStack"
#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "../../unmapped/Block"


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

    GameMode::~GameMode()
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void stopDestroyBlock(BlockPos const&);
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void continueBuildBlock(BlockPos const&, unsigned char);
    virtual void stopBuildBlock();
    virtual void tick();
    virtual void getPickRange(InputMode const&, bool);
    virtual void useItem(ItemStack &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void interact(Actor &, Vec3 const&);
    virtual void attack(Actor &);
    virtual void releaseUsingItem();
    virtual void setTrialMode(bool);
    virtual bool isInTrialMode();
    virtual void registerUpsellScreenCallback(std::function<void ()(bool)>);

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
