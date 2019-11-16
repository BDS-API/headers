#pragma once

class IMinecraftApp {

    virtual void ~IMinecraftApp();
    virtual void ~IMinecraftApp();
    virtual void getPrimaryMinecraft(void);
    virtual void getAutomationClient(void)const;
    virtual void isEduMode(void)const;
    virtual void isIMinecraftApp(void)const;
    virtual void onNetworkMaxPlayersChanged(unsigned int);
    virtual void getGameModule(void);
}
