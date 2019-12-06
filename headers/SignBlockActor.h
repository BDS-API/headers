#pragma once

class SignBlockActor : BlockActor {

public:
    virtual ~SignBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getShadowRadius(BlockSource &)const;

    void SignBlockActor(BlockPos const&);
    void setMessage(TextObjectRoot, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void setMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void _clearCachedMessage(void);
    void getType(void)const;
    void setType(SignBlockActor::SignType);
    void getCachedMessage(void)const;
    void setCachedMessage(SignBlockActor::CachedMessageData);
};
