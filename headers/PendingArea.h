#pragma once

class PendingArea {

public:

    void PendingArea(PendingArea&&);
    void PendingArea(PendingArea const&);
    void PendingArea(mce::UUID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Bounds const&, bool);
    void PendingArea(mce::UUID, ActorUniqueID, Bounds const&);
    void PendingArea(mce::UUID, ActorUniqueID, Bounds const&, float);
    void createTickingArea(mce::UUID, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Bounds const&, bool);
    void createEntityTickingArea(mce::UUID, ActorUniqueID, Bounds const&, bool, float);
    void validTag(CompoundTag const&);
    void load(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, CompoundTag const&);
    void serialize(AutomaticID<Dimension, int>)const;
};
