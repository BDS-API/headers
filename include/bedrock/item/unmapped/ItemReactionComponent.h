#pragma once

#include "../../../unmapped/LabTableReaction.h"
#include "../../block/unmapped/BlockSource.h"
#include "../ItemStack.h"
#include "../../../unmapped/LabTableReactionComponent.h"


class ItemReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~ItemReactionComponent();
    ItemReactionComponent(ItemStack const&);
};
