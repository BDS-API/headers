#pragma once

#include "../ItemStack"
#include "../../block/unmapped/BlockSource"
#include "../../../unmapped/LabTableReaction"
#include "../../../unmapped/LabTableReactionComponent"


class ItemReactionComponent : LabTableReactionComponent {

public:
    virtual ItemReactionComponent::~ItemReactionComponent()
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    ItemReactionComponent(ItemStack const&);
};
