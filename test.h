#ifndef TEST_H
#define TEST_H

#include <QObject>
#include "animal.h"
#include <QDebug>

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);
    animal* dog;
    ~test();

signals:

public slots:
};

#endif // TEST_H
