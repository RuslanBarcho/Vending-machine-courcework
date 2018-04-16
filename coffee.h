#ifndef COFFEE_H
#define COFFEE_H
#include <QString>
#include <QTimer>
#include <QTime>

class Coffee: public QObject
{
    Q_OBJECT
public:
    Coffee();
    ~Coffee();
    int value;
    QString name;
    enum States {NOT_READY, PROCESSING, READY};
    States currentState;
    QTimer *timer;
public slots:
    virtual void updateState();
signals:
    void coffeeReady();
};

#endif // COFFEE_H
