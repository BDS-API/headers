#pragma once

class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    virtual ~RandomizableBlockActorFillingContainer();
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    void RandomizableBlockActorFillingContainer(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&, int, ContainerType);
};
