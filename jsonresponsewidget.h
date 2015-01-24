#ifndef JSONRESPONSEWIDGET_H
#define JSONRESPONSEWIDGET_H

#include <QtWidgets>
#include "qjsonmodel.h"
#include "abstractresponsewidget.h"

class JsonResponseWidget : public AbstractResponseWidget
{
public:
    JsonResponseWidget(QWidget * parent = 0);
    ~JsonResponseWidget();

public slots:
    void setResponse(const Response& rep);

private:
    QTreeView * mView;
    QJsonModel * mModel;
};

#endif // JSONRESPONSEWIDGET_H