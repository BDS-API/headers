#pragma once

class ItemReactionComponent : LabTableReactionComponent {

public:
    virtual ~ItemReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    void ItemReactionComponent(ItemStack const&);
};
