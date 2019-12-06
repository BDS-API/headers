#pragma once

class EnderChestBlockActor : ChestBlockActor {

public:
    static long EnderChestBlockActor::ITEMS_SIZE;

    virtual ~EnderChestBlockActor();
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);

    void EnderChestBlockActor(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockActorRendererId, BlockPos const&);
    void createEnderChestBlockEntity(BlockPos const&);
};
