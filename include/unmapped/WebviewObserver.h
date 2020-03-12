#pragma once

#include <string>


class WebviewObserver /*Core::Observer<WebviewObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

public:
//  virtual void onDownloadComplete(WebviewDownloadInfo const&); //TODO: incomplete function definition
    virtual void onLoadingBegin();
    virtual void onMessageRecieved(std::string const&);
//  virtual void onDownloadCanceled(WebviewDownloadInfo const&); //TODO: incomplete function definition
    ~WebviewObserver();
//  virtual void onDownloadBegin(WebviewDownloadInfo const&); //TODO: incomplete function definition
//  virtual void onError(WebviewError const&); //TODO: incomplete function definition
//  virtual void onDownloadUpdate(WebviewDownloadInfo const&); //TODO: incomplete function definition
    virtual void onLoadingEnd();
    WebviewObserver();
};
