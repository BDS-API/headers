#pragma once

class HorseEquipContainerController : ContainerController {

public:
    virtual ~HorseEquipContainerController();
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    void HorseEquipContainerController(std::shared_ptr<ContainerModel>);
    void setAllowedArmorItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
    void setAllowedSaddleItems(std::vector<ItemInstance, std::allocator<ItemInstance>> const&);
};
