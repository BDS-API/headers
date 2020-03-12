#pragma once

#include "../../../unmapped/HashString.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"
#include "../../../unmapped/Recipes.h"


class FurnaceInputContainerController : ContainerController {

public:
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    ~FurnaceInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    FurnaceInputContainerController(std::shared_ptr<ContainerModel>, Util::HashString const&);
};
