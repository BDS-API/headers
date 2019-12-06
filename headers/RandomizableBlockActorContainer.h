#pragma once

class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    virtual ~RandomizableBlockActorContainer();
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    void RandomizableBlockActorContainer(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, ContainerType);
};
