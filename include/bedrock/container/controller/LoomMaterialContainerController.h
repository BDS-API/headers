#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"


class LoomMaterialContainerController : ContainerController {

public:
    LoomMaterialContainerController::~LoomMaterialContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    LoomMaterialContainerController(std::shared_ptr<ContainerModel>);
};
