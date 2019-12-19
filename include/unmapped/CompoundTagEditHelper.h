#pragma once

class CompoundTagEditHelper {

public:

    CompoundTagEditHelper(Tag &);
    void replaceWith(std::string const&, std::unique_ptr<Tag, std::default_delete<Tag>>);
    void pushChild(std::string const&);
    void popChild(void);
    bool canPopChild(void);
    void getParent(void)const;
};
