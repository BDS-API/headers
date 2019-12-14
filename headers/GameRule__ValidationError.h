#pragma once

class GameRule::ValidationError {

public:

    void setSuccess(bool);
    void setDescription(std::string const&);
    void ValidationError(void);
    bool isSuccess(void)const;
};
