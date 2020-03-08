#pragma once

#include "../ItemStack"
#include "../../../unmapped/LabTableReactionComponent"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/LabTableReaction"


class ItemReactionComponent : LabTableReactionComponent {

public:
    ItemReactionComponent::~ItemReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    ItemReactionComponent(ItemStack const&);
};
