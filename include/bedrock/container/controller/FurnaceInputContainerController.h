#pragma once

#include "../../../unmapped/HashString"
#include "../../../unmapped/Recipes"
#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class FurnaceInputContainerController : ContainerController {

public:
    virtual FurnaceInputContainerController::~FurnaceInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;

    FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&);
};
