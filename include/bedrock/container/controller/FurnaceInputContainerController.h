#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../../unmapped/HashString"
#include "../../item/ItemInstance"
#include "../model/ContainerModel"
#include "../../../unmapped/Recipes"


class FurnaceInputContainerController : ContainerController {

public:
    virtual FurnaceInputContainerController::~FurnaceInputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;

    FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&);
};
