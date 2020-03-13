#pragma once

#include "../../../unmapped/LabTableReactionComponent.h"


class ItemReactionComponent : LabTableReactionComponent {

public:
    ~ItemReactionComponent(); // _ZN21ItemReactionComponentD2Ev
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN21ItemReactionComponent6_onEndER16LabTableReactionR11BlockSource
    ItemReactionComponent(ItemStack const&); // _ZN21ItemReactionComponentC2ERK9ItemStack
};
