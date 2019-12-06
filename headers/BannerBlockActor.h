#pragma once

class BannerBlockActor : BlockActor {

public:
    static long BannerBlockActor::MAX_PATTERNS;

    virtual ~BannerBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);

    void BannerBlockActor(BlockPos const&);
    void setItemValues(ItemStack const&);
    void getBaseColor(ItemStack const&);
    void getBaseColor(void)const;
    void getBaseColorInt(void)const;
    void getType(void)const;
    void getPatternCount(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void getPatternCount(void)const;
    void getPattern(int)const;
    void getColor(int)const;
    bool isDefaultBanner(ItemInstance const&);
    void getType(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>> const&);
    void removeLastPattern(ItemStack &, Player &);
    void setBannerDetails(ItemStack &, int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, BannerBlockType);
};
