#pragma once

#include <string>
#include "ActorBlock.h"


class SignBlock : ActorBlock {

public:
    ~SignBlock(); // _ZN9SignBlockD2Ev
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9SignBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK9SignBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9SignBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9SignBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK9SignBlock14getVisualShapeERK5BlockR4AABBb
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const; // _ZNK9SignBlock21getEntityResourceItemER6RandomRK10BlockActori
//  SignBlock(std::string const&, int, bool, SignBlockActor::SignType); //TODO: incomplete function definition // _ZN9SignBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEibN14SignBlockActor8SignTypeE
    void getShape(int, AABB &)const; // _ZNK9SignBlock8getShapeEiR4AABB
    void _getItemInstance()const; // _ZNK9SignBlock16_getItemInstanceEv
    void getSignType()const; // _ZNK9SignBlock11getSignTypeEv
};
