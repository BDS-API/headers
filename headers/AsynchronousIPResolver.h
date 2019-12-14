#pragma once

class AsynchronousIPResolver {

public:

    void AsynchronousIPResolver(AsynchronousIPResolver const&);
    void AsynchronousIPResolver(std::string);
    void _resolve(void);
    bool isDone(void)const;
};
