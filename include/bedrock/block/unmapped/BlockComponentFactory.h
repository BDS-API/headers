#pragma once



class BlockComponentFactory {

public:

    BlockComponentFactory(void);
    void initializeFactory();
    void teardownFactory();
    void registerDescription(std::string const&, std::function<std::unique_ptr ()(void)>);
    void createComponentDescription(std::string const&)const;
};
