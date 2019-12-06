#pragma once

class RandomizableBlockActorContainerBase : BlockActor {

public:
    virtual ~RandomizableBlockActorContainerBase();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    void RandomizableBlockActorContainerBase(BlockActorType, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BlockPos const&);
    void setLootTable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int);
    void unPackLootTable(Level &, Container &, Actor *);
};
