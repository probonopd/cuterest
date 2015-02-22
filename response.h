#ifndef REPONSE_H
#define REPONSE_H
#include <QtCore>
#include <QByteArray>
#include <QNetworkReply>
#include "request.h"
class Response
{
public:
    Response();
    ~Response();
    void setBody(const QByteArray& body);
    const QByteArray &body() const;

    void setElapsed(qint64 time);
    qint64 elapsed() const;

    void setRequest(const Request& request);
    const Request &request() const;

    void setStatusCode(int code);
    int statusCode() const;

    const QDateTime &time() const;
    int size() const;

    const QList<QNetworkReply::RawHeaderPair> &rawHeaderPairs() const;
    void setRawHeaderPairs(const QList<QNetworkReply::RawHeaderPair> & pairs);

    QByteArray	rawHeader(const QByteArray & headerName) const;
    QList<QByteArray> rawHeaderList() const;

private:
    QList<QNetworkReply::RawHeaderPair> mRawHeaderPairs;
    QByteArray mBody;
    qint64	mElapsed;
    Request mRequest;
    int mStatusCode;
    QDateTime mTime;
    int mSize;




};

#endif // REPONSE_H
