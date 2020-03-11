#pragma once

#include "../../block/unmapped/BlockSource.h"
#include "../../../unmapped/LabTableReaction.h"
#include "../../../unmapped/LabTableReactionComponent.h"
#include "../ItemStack.h"


class ItemReactionComponent : LabTableReactionComponent {

public:
    virtual ~ItemReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    ItemReactionComponent(ItemStack const&);
};
