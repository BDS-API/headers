#pragma once

class RandomizableBlockActorContainer : RandomizableBlockActorContainerBase, Container {

public:
    virtual ~RandomizableBlockActorContainer();
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    void RandomizableBlockActorContainer(BlockActorType, std::string const&, BlockPos const&, ContainerType);
};
