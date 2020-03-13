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

    ~GameMode(); // _ZN8GameModeD2Ev
    virtual void startDestroyBlock(BlockPos const&, unsigned char, bool &); // _ZN8GameMode17startDestroyBlockERK8BlockPoshRb
    virtual void destroyBlock(BlockPos const&, unsigned char); // _ZN8GameMode12destroyBlockERK8BlockPosh
    virtual void continueDestroyBlock(BlockPos const&, unsigned char, bool &); // _ZN8GameMode20continueDestroyBlockERK8BlockPoshRb
    virtual void stopDestroyBlock(BlockPos const&); // _ZN8GameMode16stopDestroyBlockERK8BlockPos
    virtual void startBuildBlock(BlockPos const&, unsigned char); // _ZN8GameMode15startBuildBlockERK8BlockPosh
    virtual void buildBlock(BlockPos const&, unsigned char); // _ZN8GameMode10buildBlockERK8BlockPosh
    virtual void continueBuildBlock(BlockPos const&, unsigned char); // _ZN8GameMode18continueBuildBlockERK8BlockPosh
    virtual void stopBuildBlock(); // _ZN8GameMode14stopBuildBlockEv
    virtual void tick(); // _ZN8GameMode4tickEv
//  virtual void getPickRange(InputMode const&, bool); //TODO: incomplete function definition // _ZN8GameMode12getPickRangeERK9InputModeb
    virtual void useItem(ItemStack &); // _ZN8GameMode7useItemER9ItemStack
    virtual void useItemOn(ItemStack &, BlockPos const&, unsigned char, Vec3 const&, Block const*); // _ZN8GameMode9useItemOnER9ItemStackRK8BlockPoshRK4Vec3PK5Block
    virtual void interact(Actor &, Vec3 const&); // _ZN8GameMode8interactER5ActorRK4Vec3
    virtual void attack(Actor &); // _ZN8GameMode6attackER5Actor
    virtual void releaseUsingItem(); // _ZN8GameMode16releaseUsingItemEv
    virtual void setTrialMode(bool); // _ZN8GameMode12setTrialModeEb
    virtual bool isInTrialMode(); // _ZN8GameMode13isInTrialModeEv
    virtual void registerUpsellScreenCallback(std::function<void (bool)>); // _ZN8GameMode28registerUpsellScreenCallbackESt8functionIFvbEE
    GameMode(Player &); // _ZN8GameModeC2ER6Player
    void _canDestroy(BlockPos const&, unsigned char); // _ZN8GameMode11_canDestroyERK8BlockPosh
    void _creativeDestroyBlock(BlockPos const&, unsigned char); // _ZN8GameMode21_creativeDestroyBlockERK8BlockPosh
    void _destroyBlockInternal(BlockPos const&, unsigned char); // _ZN8GameMode21_destroyBlockInternalERK8BlockPosh
    void getDestroyRate(Block const&); // _ZN8GameMode14getDestroyRateERK5Block
    void _calculatePlacePos(BlockPos const&, unsigned char &)const; // _ZNK8GameMode18_calculatePlacePosERK8BlockPosRh
    bool isLastBuildBlockSnappable()const; // _ZNK8GameMode25isLastBuildBlockSnappableEv
    bool hasStartedBuilding()const; // _ZNK8GameMode18hasStartedBuildingEv
    bool hasContinueDirection()const; // _ZNK8GameMode20hasContinueDirectionEv
    void getContinueFacing()const; // _ZNK8GameMode17getContinueFacingEv
    void getContinueDirection()const; // _ZNK8GameMode20getContinueDirectionEv
    void getNextContinuePos()const; // _ZNK8GameMode18getNextContinuePosEv
    void getLastBuiltBlockPos()const; // _ZNK8GameMode20getLastBuiltBlockPosEv
    void _canUseBlock(Block const&); // _ZN8GameMode12_canUseBlockERK5Block
    void baseUseItem(ItemStack &); // _ZN8GameMode11baseUseItemER9ItemStack
    void getMaxPickRange(); // _ZN8GameMode15getMaxPickRangeEv
    void getMaxPickRangeSqr(); // _ZN8GameMode18getMaxPickRangeSqrEv
    void getDestroyBlockPos(); // _ZN8GameMode18getDestroyBlockPosEv
    void getOldDestroyProgress(); // _ZN8GameMode21getOldDestroyProgressEv
    void getDestroyProgress(); // _ZN8GameMode18getDestroyProgressEv
    void _releaseUsingItemInternal(); // _ZN8GameMode25_releaseUsingItemInternalEv
    void getHitProgress(float); // _ZN8GameMode14getHitProgressEf
};
