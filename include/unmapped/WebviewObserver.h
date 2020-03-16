#pragma once

#include <string>


class WebviewObserver /*public Core::Observer<WebviewObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

public:
    virtual ~WebviewObserver(); // _ZN15WebviewObserverD2Ev
    virtual void __fake_function0(); // fake
    virtual void onLoadingBegin(); // _ZN15WebviewObserver14onLoadingBeginEv
    virtual void onLoadingEnd(); // _ZN15WebviewObserver12onLoadingEndEv
    virtual void onError__incomplete0(long const&); //TODO: incomplete function definition // _ZN15WebviewObserver7onErrorERK12WebviewError
    virtual void onDownloadBegin__incomplete0(long const&); //TODO: incomplete function definition // _ZN15WebviewObserver15onDownloadBeginERK19WebviewDownloadInfo
    virtual void onDownloadUpdate__incomplete0(long const&); //TODO: incomplete function definition // _ZN15WebviewObserver16onDownloadUpdateERK19WebviewDownloadInfo
    virtual void onDownloadComplete__incomplete0(long const&); //TODO: incomplete function definition // _ZN15WebviewObserver18onDownloadCompleteERK19WebviewDownloadInfo
    virtual void onDownloadCanceled__incomplete0(long const&); //TODO: incomplete function definition // _ZN15WebviewObserver18onDownloadCanceledERK19WebviewDownloadInfo
    virtual void onMessageRecieved(std::string const&); // _ZN15WebviewObserver17onMessageRecievedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    WebviewObserver(); // _ZN15WebviewObserverC2Ev
};
