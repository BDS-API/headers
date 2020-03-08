#pragma once



class AsynchronousIPResolver {

public:

    AsynchronousIPResolver(AsynchronousIPResolver const&);
    AsynchronousIPResolver(std::string);
    void _resolve(void);
    bool isDone(void)const;
};
