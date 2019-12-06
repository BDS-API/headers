#pragma once

class FurnaceFuelContainerController : ContainerController {

public:
    virtual ~FurnaceFuelContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    void FurnaceFuelContainerController(std::shared_ptr<ContainerModel>);
    bool isFurnaceFuelItem(ItemInstance const&);
    bool isBucket(ItemDescriptor const&);
};
