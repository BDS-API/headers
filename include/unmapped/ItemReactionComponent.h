#pragma once

class ItemReactionComponent : LabTableReactionComponent {

public:
    virtual ItemReactionComponent::~ItemReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    ItemReactionComponent(ItemStack const&);
};
