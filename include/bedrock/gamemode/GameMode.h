#pragma once

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

    virtual GameMode::~GameMode();
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void destroyBlock(BlockPos const&, unsigned char);
    virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool &);
    virtual void stopDestroyBlock(BlockPos const&);
    virtual void startBuildBlock(BlockPos const&, unsigned char);
    virtual void buildBlock(BlockPos const&, unsigned char);
    virtual void continueBuildBlock(BlockPos const&, unsigned char);
    virtual void stopBuildBlock(void);
    virtual void tick(void);
    virtual void getPickRange(InputMode const&, bool);
    virtual void useItem(ItemStack &);
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*);
    virtual void interact(Actor &, Vec3 const&);
    virtual void attack(Actor &);
    virtual void releaseUsingItem(void);
    virtual void setTrialMode(bool);
    virtual bool isInTrialMode(void);
    virtual void registerUpsellScreenCallback(std::function<void ()(bool)>);

    GameMode(Player &);
    void _canDestroy(BlockPos const&, unsigned char);
    void _creativeDestroyBlock(BlockPos const&, unsigned char);
    void _destroyBlockInternal(BlockPos const&, unsigned char);
    void getDestroyRate(Block const&);
    void _calculatePlacePos(BlockPos const&, unsigned char &)const;
    bool isLastBuildBlockSnappable(void)const;
    bool hasStartedBuilding(void)const;
    bool hasContinueDirection(void)const;
    void getContinueFacing(void)const;
    void getContinueDirection(void)const;
    void getNextContinuePos(void)const;
    void getLastBuiltBlockPos(void)const;
    void _canUseBlock(Block const&);
    void baseUseItem(ItemStack &);
    void getMaxPickRange(void);
    void getMaxPickRangeSqr(void);
    void getDestroyBlockPos(void);
    void getOldDestroyProgress(void);
    void getDestroyProgress(void);
    void _releaseUsingItemInternal(void);
    void getHitProgress(float);
};
