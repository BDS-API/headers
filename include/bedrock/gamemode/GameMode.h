#pragma once

#include <functional>


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

    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void continueBuildBlock(BlockPos const&, unsigned char);
    virtual void attack(Actor &);
    virtual void stopDestroyBlock(BlockPos const&);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void setTrialMode(bool);
//  virtual void getPickRange(InputMode const&, bool); //TODO: incomplete function definition
    ~GameMode();
    virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void useItem(ItemStack &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual bool isInTrialMode();
    virtual void releaseUsingItem();
    virtual void stopBuildBlock();
    virtual void tick();
    virtual void registerUpsellScreenCallback(std::function<void (bool)>);
    virtual void interact(Actor &, Vec3 const&);
    void getLastBuiltBlockPos()const;
    bool isLastBuildBlockSnappable()const;
    void _canUseBlock(Block const&);
    void _destroyBlockInternal(BlockPos const&, unsigned char);
    bool hasContinueDirection()const;
    void getMaxPickRange();
    void getDestroyBlockPos();
    bool hasStartedBuilding()const;
    void getOldDestroyProgress();
    void _releaseUsingItemInternal();
    void _creativeDestroyBlock(BlockPos const&, unsigned char);
    void getContinueFacing()const;
    void getDestroyProgress();
    void _canDestroy(BlockPos const&, unsigned char);
    void getDestroyRate(Block const&);
    void getContinueDirection()const;
    GameMode(Player &);
    void _calculatePlacePos(BlockPos const&, unsigned char &)const;
    void getNextContinuePos()const;
    void getMaxPickRangeSqr();
    void getHitProgress(float);
    void baseUseItem(ItemStack &);
};
