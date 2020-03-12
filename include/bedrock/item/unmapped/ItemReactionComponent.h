#pragma once

#include "../../../unmapped/LabTableReactionComponent.h"


class ItemReactionComponent : LabTableReactionComponent {

public:
    virtual void _onEnd(LabTableReaction &, BlockSource &);
    ~ItemReactionComponent();
    ItemReactionComponent(ItemStack const&);
};
