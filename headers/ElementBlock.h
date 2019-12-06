#pragma once

class ElementBlock : BlockLegacy {

public:
    static long ElementBlock::mElements;

    virtual ~ElementBlock();
    virtual bool canBeUsedInCommands(bool)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void tryLegacyUpgrade(unsigned short)const;

    void ElementBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, ElementType);
    void getElementCategory(ElementType);
    void getElement(BlockSource &, BlockPos const&);
    void getElement(Block const&);
    void getElement(void)const;
    bool isElement(BlockLegacy const&);
    bool isElement(ItemInstance const&);
    bool isElement(ItemStack const&);
    void _getElements(void);
    void tryGetBlockLegacyForElement(ElementType);
    void getItemForElement(ElementType, int);
    void getIngredientForElement(ElementType, int);
    void getElement(ItemInstance const&);
    void initElements(void);
    void shutdownElements(void);
    void getElementInfo(ElementType);
};
