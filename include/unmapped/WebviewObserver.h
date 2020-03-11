#pragma once

#include "../core/SingleThreadedLock.h"
#include "./WebviewObserver.h"
#include <string>


class WebviewObserver /*Core::Observer<WebviewObserver, Core::SingleThreadedLock>*/ { //TODO: incomplete class definition

public:
    virtual ~WebviewObserver();
    virtual void onLoadingBegin();
    virtual void onLoadingEnd();
//  virtual void onError(WebviewError const&); //TODO: incomplete function definition
//  virtual void onDownloadBegin(WebviewDownloadInfo const&); //TODO: incomplete function definition
//  virtual void onDownloadUpdate(WebviewDownloadInfo const&); //TODO: incomplete function definition
//  virtual void onDownloadComplete(WebviewDownloadInfo const&); //TODO: incomplete function definition
//  virtual void onDownloadCanceled(WebviewDownloadInfo const&); //TODO: incomplete function definition
    virtual void onMessageRecieved(std::string const&);

    WebviewObserver();
};
