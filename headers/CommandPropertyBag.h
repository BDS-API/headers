#pragma once

class CommandPropertyBag {

public:
    virtual ~CommandPropertyBag();

    void CommandPropertyBag(void);
    void CommandPropertyBag(Json::Value const&);
    void clone(void)const;
    void set(std::string const&, Json::Value const&);
    void set(std::string const&, BlockPos const&);
    void set(std::string const&, Vec3);
    void addToResultList(std::string const&, std::string const&);
};
