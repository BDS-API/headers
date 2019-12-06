#pragma once

class CraftingContainerController : ContainerController {

public:
    virtual ~CraftingContainerController();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void clearSelectedRecipe(void);
    virtual void getSelectedRecipe(void)const;
    virtual void setGhostItem(ContainerItemStack const&, int, bool);
    virtual void getGhostItem(int)const;

    void CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
};
