#pragma once

#include <memory>


class LabTableReaction {

public:
    ~LabTableReaction(); // _ZN16LabTableReactionD2Ev
//  LabTableReaction(LabTableReactionType, BlockPos const&, bool, int, int); //TODO: incomplete function definition // _ZN16LabTableReactionC2E20LabTableReactionTypeRK8BlockPosbii
    void _setLifetime(int, int); // _ZN16LabTableReaction12_setLifetimeEii
    void addResultItem(ItemStack const&); // _ZN16LabTableReaction13addResultItemERK9ItemStack
    void addComponent(std::unique_ptr<LabTableReactionComponent>); // _ZN16LabTableReaction12addComponentESt10unique_ptrI25LabTableReactionComponentSt14default_deleteIS1_EE
    void tick(BlockSource &); // _ZN16LabTableReaction4tickER11BlockSource
    void _onStart(BlockSource &); // _ZN16LabTableReaction8_onStartER11BlockSource
    void _onTick(BlockSource &); // _ZN16LabTableReaction7_onTickER11BlockSource
    void _onEnd(BlockSource &); // _ZN16LabTableReaction6_onEndER11BlockSource
    void getType(); // _ZN16LabTableReaction7getTypeEv
    void getReactionId(); // _ZN16LabTableReaction13getReactionIdEv
    void _getIsClientSide()const; // _ZNK16LabTableReaction16_getIsClientSideEv
    void _getPercentage()const; // _ZNK16LabTableReaction14_getPercentageEv
    void _getTableTop()const; // _ZNK16LabTableReaction12_getTableTopEv
    void _getPos()const; // _ZNK16LabTableReaction7_getPosEv
    void _getRandom(); // _ZN16LabTableReaction10_getRandomEv
    void _secsToTicks(float); // _ZN16LabTableReaction12_secsToTicksEf
//  void createReaction(LabTableReactionType, BlockPos const&, bool); //TODO: incomplete function definition // _ZN16LabTableReaction14createReactionE20LabTableReactionTypeRK8BlockPosb
};
