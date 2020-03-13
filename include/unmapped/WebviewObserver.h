#pragma once

#include <string>


class WebviewObserver /*Core::Observer<WebviewObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

public:
    ~WebviewObserver(); // _ZN15WebviewObserverD2Ev
    virtual void onLoadingBegin(); // _ZN15WebviewObserver14onLoadingBeginEv
    virtual void onLoadingEnd(); // _ZN15WebviewObserver12onLoadingEndEv
//  virtual void onError(WebviewError const&); //TODO: incomplete function definition // _ZN15WebviewObserver7onErrorERK12WebviewError
//  virtual void onDownloadBegin(WebviewDownloadInfo const&); //TODO: incomplete function definition // _ZN15WebviewObserver15onDownloadBeginERK19WebviewDownloadInfo
//  virtual void onDownloadUpdate(WebviewDownloadInfo const&); //TODO: incomplete function definition // _ZN15WebviewObserver16onDownloadUpdateERK19WebviewDownloadInfo
//  virtual void onDownloadComplete(WebviewDownloadInfo const&); //TODO: incomplete function definition // _ZN15WebviewObserver18onDownloadCompleteERK19WebviewDownloadInfo
//  virtual void onDownloadCanceled(WebviewDownloadInfo const&); //TODO: incomplete function definition // _ZN15WebviewObserver18onDownloadCanceledERK19WebviewDownloadInfo
    virtual void onMessageRecieved(std::string const&); // _ZN15WebviewObserver17onMessageRecievedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    WebviewObserver(); // _ZN15WebviewObserverC2Ev
};
