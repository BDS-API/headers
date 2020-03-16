#pragma once

#include "../../../unmapped/LabTableReactionComponent.h"


class ItemReactionComponent : public LabTableReactionComponent {

public:
    virtual ~ItemReactionComponent(); // _ZN21ItemReactionComponentD2Ev
    virtual void __fake_function0(); // fake
    virtual void _onEnd(LabTableReaction &, BlockSource &); // _ZN21ItemReactionComponent6_onEndER16LabTableReactionR11BlockSource
    ItemReactionComponent(ItemStack const&); // _ZN21ItemReactionComponentC2ERK9ItemStack
};
