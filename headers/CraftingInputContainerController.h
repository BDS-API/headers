#pragma once

class CraftingInputContainerController : CraftingContainerController {

public:
    virtual ~CraftingInputContainerController();
    virtual void getBackgroundStyle(int)const;
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe(void);

    void CraftingInputContainerController(std::shared_ptr<ContainerModel>);
};
