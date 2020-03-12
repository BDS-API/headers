#pragma once

#include "../core/SingleThreadedLock.h"
#include <string>


class WebviewObserver /*Core::Observer<WebviewObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

public:
//  virtual void onDownloadBegin(WebviewDownloadInfo const&); //TODO: incomplete function definition
    virtual void onLoadingBegin();
//  virtual void onDownloadComplete(WebviewDownloadInfo const&); //TODO: incomplete function definition
//  virtual void onDownloadUpdate(WebviewDownloadInfo const&); //TODO: incomplete function definition
    ~WebviewObserver();
    virtual void onMessageRecieved(std::string const&);
//  virtual void onError(WebviewError const&); //TODO: incomplete function definition
    virtual void onLoadingEnd();
//  virtual void onDownloadCanceled(WebviewDownloadInfo const&); //TODO: incomplete function definition
    WebviewObserver();
};
